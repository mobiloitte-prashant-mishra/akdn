(function($) {

/**
 * Initialize editor instances.
 *
 * @see Drupal.wysiwyg.editor.init.ckeditor()
 */
Drupal.wysiwyg.editor.init.tinymce = function(settings, pluginInfo) {
  // Fix Drupal toolbar obscuring editor toolbar in fullscreen mode.
  var $drupalToolbars = $('#toolbar, #admin-menu', Drupal.overlayChild ? window.parent.document : document);
  tinyMCE.onAddEditor.add(function (mgr, ed) {
    if (ed.id == 'mce_fullscreen') {
      $drupalToolbars.hide();
    }
  });
  tinyMCE.onRemoveEditor.add(function (mgr, ed) {
    if (ed.id == 'mce_fullscreen') {
      $drupalToolbars.show();
    }
    else {
      // Free our reference to the private instance to not risk memory leaks.
      delete ed._drupalWysiwygInstance;
    }
  });
  // Register new plugins.
  Drupal.wysiwyg.editor.update.tinymce(settings, pluginInfo);
};

/**
 * Update the editor library when new settings are available.
 *
 * @see Drupal.wysiwyg.editor.update.ckeditor()
 */
Drupal.wysiwyg.editor.update.tinymce = function(settings, pluginInfo) {
  // Load native external plugins.
  // Array syntax required; 'native' is a predefined token in JavaScript.
  for (var plugin in pluginInfo['native']) {
    if (!(plugin in tinymce.PluginManager.lookup || plugin in tinymce.PluginManager.urls)) {
      tinymce.PluginManager.load(plugin, pluginInfo['native'][plugin]);
    }
  }
  // Load Drupal plugins.
  for (var plugin in pluginInfo.drupal) {
    if (!(plugin in tinymce.PluginManager.lookup)) {
      Drupal.wysiwyg.editor.instance.tinymce.addPlugin(plugin, pluginInfo.drupal[plugin]);
    }
  }
};

/**
 * Attach this editor to a target element.
 *
 * See Drupal.wysiwyg.editor.attach.none() for a full desciption of this hook.
 */
Drupal.wysiwyg.editor.attach.tinymce = function(context, params, settings) {
  // Configure editor settings for this input format.
  var ed = new tinymce.Editor(params.field, settings);
  ed._drupalWysiwygInstance = this;
  // Reset active instance id on any event.
  ed.onEvent.add(function(ed, e) {
    Drupal.wysiwyg.activeId = ed.id;
  });
  // Indicate that the DOM has been loaded (in case of Ajax).
  tinymce.dom.Event.domLoaded = true;
  // Make toolbar buttons wrappable (required for IE).
  ed.onPostRender.add(function (ed) {
    var $toolbar = $('<div class="wysiwygToolbar"></div>');
    $('#' + ed.editorContainer + ' table.mceToolbar > tbody > tr > td').each(function () {
      $('<div></div>').addClass(this.className).append($(this).children()).appendTo($toolbar);
    });
    $('#' + ed.editorContainer + ' table.mceLayout td.mceToolbar').append($toolbar);
    $('#' + ed.editorContainer + ' table.mceToolbar').remove();
  });

  // Remove TinyMCE's internal mceItem class, which was incorrectly added to
  // submitted content by Wysiwyg <2.1. TinyMCE only temporarily adds the class
  // for placeholder elements. If preemptively set, the class prevents (native)
  // editor plugins from gaining an active state, so we have to manually remove
  // it prior to attaching the editor. This is done on the client-side instead
  // of the server-side, as Wysiwyg has no way to figure out where content is
  // stored, and the class only affects editing.
  var $field = $('#' + params.field);
  $field.val($field.val().replace(/(<.+?\s+class=['"][\w\s]*?)\bmceItem\b([\w\s]*?['"].*?>)/ig, '$1$2'));

  // Attach editor.
  ed.render();
  if (tinymce.minorVersion == '5.7') {
    // Work around a TinyMCE bug hiding new instances when switching to them.
    // @see http://www.tinymce.com/develop/bugtracker_view.php?id=5510
    setTimeout(function () {
      tinymce.DOM.show(ed.editorContainer);
    }, 1);
  }
};

/**
 * Detach a single or all editors.
 *
 * See Drupal.wysiwyg.editor.detach.none() for a full desciption of this hook.
 */
Drupal.wysiwyg.editor.detach.tinymce = function (context, params, trigger) {
  if (typeof params != 'undefined') {
    var instance = tinyMCE.get(params.field);
    if (instance) {
      instance.save();
      if (trigger != 'serialize') {
        instance.remove();
      }
    }
  }
  else {
    // Save contents of all editors back into textareas.
    tinyMCE.triggerSave();
    if (trigger != 'serialize') {
      // Remove all editor instances.
      for (var instance in tinyMCE.editors) {
        tinyMCE.editors[instance].remove();
      }
    }
  }
};

Drupal.wysiwyg.editor.instance.tinymce = {
  addPlugin: function(plugin, pluginSettings) {
    if (typeof Drupal.wysiwyg.plugins[plugin] != 'object') {
      return;
    }
    tinymce.create('tinymce.plugins.' + plugin, {
      /**
       * Initialize the plugin, executed after the plugin has been created.
       *
       * @param ed
       *   The tinymce.Editor instance the plugin is initialized in.
       * @param url
       *   The absolute URL of the plugin location.
       */
      init: function(ed, url) {
        // Register an editor command for this plugin, invoked by the plugin's button.
        ed.addCommand(plugin, function() {
          if (typeof Drupal.wysiwyg.plugins[plugin].invoke == 'function') {
            var data = { format: 'html', node: ed.selection.getNode(), content: ed.selection.getContent() };
            // TinyMCE creates a completely new instance for fullscreen mode.
            var instanceId = ed.id == 'mce_fullscreen' ? ed.getParam('fullscreen_editor_id') : ed.id;
            Drupal.wysiwyg.plugins[plugin].invoke(data, pluginSettings, instanceId);
          }
        });

        // Register the plugin button.
        ed.addButton(plugin, {
          title : pluginSettings.title,
          cmd : plugin,
          image : pluginSettings.icon
        });

        // Load custom CSS for editor contents on startup.
        ed.onInit.add(function() {
          if (pluginSettings.css) {
            ed.dom.loadCSS(pluginSettings.css);
          }
        });

        // Attach: Replace plain text with HTML representations.
        ed.onBeforeSetContent.add(function(ed, data) {
          var editorId = (ed.id == 'mce_fullscreen' ? ed.getParam('fullscreen_editor_id') : ed.id);
          if (typeof Drupal.wysiwyg.plugins[plugin].attach == 'function') {
            data.content = Drupal.wysiwyg.plugins[plugin].attach(data.content, pluginSettings, editorId);
            data.content = ed._drupalWysiwygInstance.prepareContent(data.content);
          }
        });

        // Detach: Replace HTML representations with plain text.
        ed.onGetContent.add(function(ed, data) {
          var editorId = (ed.id == 'mce_fullscreen' ? ed.getParam('fullscreen_editor_id') : ed.id);
          if (typeof Drupal.wysiwyg.plugins[plugin].detach == 'function') {
            data.content = Drupal.wysiwyg.plugins[plugin].detach(data.content, pluginSettings, editorId);
          }
        });

        // isNode: Return whether the plugin button should be enabled for the
        // current selection.
        ed.onNodeChange.add(function(ed, command, node) {
          if (typeof Drupal.wysiwyg.plugins[plugin].isNode == 'function') {
            command.setActive(plugin, Drupal.wysiwyg.plugins[plugin].isNode(node));
          }
        });
      },

      /**
       * Return information about the plugin as a name/value array.
       */
      getInfo: function() {
        return {
          longname: pluginSettings.title
        };
      }
    });

    // Register plugin.
    tinymce.PluginManager.add(plugin, tinymce.plugins[plugin]);
  },

  openDialog: function(dialog, params) {
    var instanceId = this.getInstanceId();
    var editor = tinyMCE.get(instanceId);
    editor.windowManager.open({
      file: dialog.url + '/' + instanceId,
      width: dialog.width,
      height: dialog.height,
      inline: 1
    }, params);
  },

  closeDialog: function(dialog) {
    var editor = tinyMCE.get(this.getInstanceId());
    editor.windowManager.close(dialog);
  },

  prepareContent: function(content) {
    // Certain content elements need to have additional DOM properties applied
    // to prevent this editor from highlighting an internal button in addition
    // to the button of a Drupal plugin.
    var specialProperties = {
      img: { 'class': 'mceItem' }
    };
    var $content = $('<div>' + content + '</div>'); // No .outerHTML() in jQuery :(
    // Find all placeholder/replacement content of Drupal plugins.
    $content.find('.drupal-content').each(function() {
      // Recursively process DOM elements below this element to apply special
      // properties.
      var $drupalContent = $(this);
      $.each(specialProperties, function(element, properties) {
        $drupalContent.find(element).andSelf().each(function() {
          for (var property in properties) {
            if (property == 'class') {
              $(this).addClass(properties[property]);
            }
            else {
              $(this).attr(property, properties[property]);
            }
          }
        });
      });
    });
    return $content.html();
  },

  insert: function(content) {
    content = this.prepareContent(content);
    tinyMCE.execInstanceCommand(this.getInstanceId(), 'mceInsertContent', false, content);
  },

  setContent: function (content) {
    content = this.prepareContent(content);
    tinyMCE.execInstanceCommand(this.getInstanceId(), 'mceSetContent', false, content);
  },

  getContent: function () {
    return tinyMCE.get(this.getInstanceId()).getContent();
  },

  isFullscreen: function() {
    // TinyMCE creates a completely new instance for fullscreen mode.
    return tinyMCE.activeEditor.id == 'mce_fullscreen' && tinyMCE.activeEditor.getParam('fullscreen_editor_id') == this.field;
  },

  getInstanceId: function () {
    return this.isFullscreen() ? 'mce_fullscreen' : this.field;
  }
};

})(jQuery);
;
(function($) {

/**
 * Attach this editor to a target element.
 *
 * @param context
 *   A DOM element, supplied by Drupal.attachBehaviors().
 * @param params
 *   An object containing input format parameters. Default parameters are:
 *   - editor: The internal editor name.
 *   - theme: The name/key of the editor theme/profile to use.
 *   - field: The CSS id of the target element.
 * @param settings
 *   An object containing editor settings for all enabled editor themes.
 */
Drupal.wysiwyg.editor.attach.none = function(context, params, settings) {
  if (params.resizable) {
    var $wrapper = $('#' + params.field, context).parents('.form-textarea-wrapper:first');
    $wrapper.addClass('resizable');
    if (Drupal.behaviors.textarea) {
      Drupal.behaviors.textarea.attach(context);
    }
  }
};

/**
 * Detach a single or all editors.
 *
 * The editor syncs its contents back to the original field before its instance
 * is removed.
 *
 * @param context
 *   A DOM element, supplied by Drupal.attachBehaviors().
 * @param params
 *   (optional) An object containing input format parameters. If defined,
 *   only the editor instance in params.field should be detached. Otherwise,
 *   all editors should be detached and saved, so they can be submitted in
 *   AJAX/AHAH applications.
 * @param trigger
 *   A string describing why the editor is being detached.
 *   Possible triggers are:
 *   - unload: (default) Another or no editor is about to take its place.
 *   - move: Currently expected to produce the same result as unload.
 *   - serialize: The form is about to be serialized before an AJAX request or
 *     a normal form submission. If possible, perform a quick detach and leave
 *     the editor's GUI elements in place to avoid flashes or scrolling issues.
 * @see Drupal.detachBehaviors
 */
Drupal.wysiwyg.editor.detach.none = function (context, params, trigger) {
  if (typeof params != 'undefined' && (trigger != 'serialize')) {
    var $wrapper = $('#' + params.field, context).parents('.form-textarea-wrapper:first');
    $wrapper.removeOnce('textarea').removeClass('.resizable-textarea').removeClass('resizable')
      .find('.grippie').remove();
  }
};

/**
 * Instance methods for plain text areas.
 */
Drupal.wysiwyg.editor.instance.none = {
  insert: function(content) {
    var editor = document.getElementById(this.field);

    // IE support.
    if (document.selection) {
      editor.focus();
      var sel = document.selection.createRange();
      sel.text = content;
    }
    // Mozilla/Firefox/Netscape 7+ support.
    else if (editor.selectionStart || editor.selectionStart == '0') {
      var startPos = editor.selectionStart;
      var endPos = editor.selectionEnd;
      editor.value = editor.value.substring(0, startPos) + content + editor.value.substring(endPos, editor.value.length);
    }
    // Fallback, just add to the end of the content.
    else {
      editor.value += content;
    }
  },

  setContent: function (content) {
    $('#' + this.field).val(content);
  },

  getContent: function () {
    return $('#' + this.field).val();
  }
};

})(jQuery);
;
/**
 *  @file
 *  File with utilities to handle media in html editing.
 */
(function ($) {

  Drupal.media = Drupal.media || {};
  /**
   * Utility to deal with media tokens / placeholders.
   */
  Drupal.media.filter = {
    /**
     * Replaces media tokens with the placeholders for html editing.
     * @param content
     */
    replaceTokenWithPlaceholder: function(content) {
      var tagmap = Drupal.media.filter.ensure_tagmap(),
        matches = content.match(/\[\[.*?\]\]/g),
        media_definition,
        id = 0;

      if (matches) {
        var i = 1;
        for (var macro in tagmap) {
          var index = $.inArray(macro, matches);
          if (index !== -1) {
            var media_json = macro.replace('[[', '').replace(']]', '');

            // Make sure that the media JSON is valid.
            try {
              media_definition = JSON.parse(media_json);
            }
            catch (err) {
              media_definition = null;
            }
            if (media_definition) {
              // Apply attributes.
              var element = Drupal.media.filter.create_element(tagmap[macro], media_definition);
              var markup = Drupal.media.filter.outerHTML(element);

              content = content.replace(macro, Drupal.media.filter.getWrapperStart(i) + markup + Drupal.media.filter.getWrapperEnd(i));
            }
          }
          i++;
        }
      }
      return content;
    },

    /**
     * Replaces the placeholders for html editing with the media tokens to store.
     * @param content
     */
    replacePlaceholderWithToken: function(content) {
      var tagmap = Drupal.media.filter.ensure_tagmap();
      var i = 1;
      for (var macro in tagmap) {
        var startTag = Drupal.media.filter.getWrapperStart(i), endTag = Drupal.media.filter.getWrapperEnd(i);
        var startPos = content.indexOf(startTag), endPos = content.indexOf(endTag);
        if (startPos !== -1 && endPos !== -1) {
          // If the placeholder wrappers are empty, remove the macro too.
          if (endPos - startPos - startTag.length === 0) {
            macro = '';
          }
          content = content.substr(0, startPos) + macro + content.substr(endPos + (new String(endTag)).length);
        }
        i++;
      }
      return content;
    },

    getWrapperStart: function(i) {
      return '<!--MEDIA-WRAPPER-START-' + i + '-->';
    },

    getWrapperEnd: function(i) {
      return '<!--MEDIA-WRAPPER-END-' + i + '-->';
    },

    /**
     * Register new element and returns the placeholder markup.
     *
     * @param formattedMedia a formatted media object as given by the onSubmit
     * function of the media Style popup.
     * @param fid the file id.
     *
     * @return The registered element.
     */
    registerNewElement: function (formattedMedia, fid) {
      var element = Drupal.media.filter.create_element(formattedMedia.html, {
        fid: fid,
        view_mode: formattedMedia.type,
        attributes: formattedMedia.options
      });

      var markup = Drupal.media.filter.outerHTML(element),
        macro = Drupal.media.filter.create_macro(element);

      // Store macro/markup pair in the tagmap.
      Drupal.media.filter.ensure_tagmap();
      Drupal.settings.tagmap[macro] = markup;

      return element;
    },

    /**
     * Serializes file information as a url-encoded JSON object and stores it as a
     * data attribute on the html element.
     *
     * @param html (string)
     *    A html element to be used to represent the inserted media element.
     * @param info (object)
     *    A object containing the media file information (fid, view_mode, etc).
     */
    create_element: function (html, info) {
      if ($('<div></div>').append(html).text().length === html.length) {
        // Element is not an html tag. Surround it in a span element
        // so we can pass the file attributes.
        html = '<span>' + html + '</span>';
      }
      var element = $(html);

      // Move attributes from the file info array to the placeholder element.
      if (info.attributes) {
        $.each(Drupal.media.filter.allowed_attributes(), function(i, a) {
          if (info.attributes[a]) {
            element.attr(a, info.attributes[a]);
          }
        });
        delete(info.attributes);
      }

      // Important to url-encode the file information as it is being stored in an
      // html data attribute.
      info.type = info.type || "media";
      element.attr('data-file_info', encodeURI(JSON.stringify(info)));

      // Adding media-element class so we can find markup element later.
      var classes = ['media-element'];

      if(info.view_mode){
        classes.push('file-' + info.view_mode.replace(/_/g, '-'));
      }
      element.addClass(classes.join(' '));

      return element;
    },

    /**
     * Create a macro representation of the inserted media element.
     *
     * @param element (jQuery object)
     *    A media element with attached serialized file info.
     */
    create_macro: function (element) {
      var file_info = Drupal.media.filter.extract_file_info(element);
      if (file_info) {
        return '[[' + JSON.stringify(file_info) + ']]';
      }
      return false;
    },

    /**
     * Extract the file info from a WYSIWYG placeholder element as JSON.
     *
     * @param element (jQuery object)
     *    A media element with attached serialized file info.
     */
    extract_file_info: function (element) {
      var file_json = $.data(element, 'file_info') || element.data('file_info'),
        file_info,
        value;

      try {
        file_info = JSON.parse(decodeURIComponent(file_json));
      }
      catch (err) {
        file_info = null;
      }

      if (file_info) {
        file_info.attributes = {};

        // Extract whitelisted attributes.
        $.each(Drupal.media.filter.allowed_attributes(), function(i, a) {
          if (value = element.attr(a)) {
            file_info.attributes[a] = value;
          }
        });
        delete(file_info.attributes['data-file_info']);
      }

      return file_info;
    },

    /**
     * Gets the HTML content of an element.
     *
     * @param element (jQuery object)
     */
    outerHTML: function (element) {
      return $('<div>').append(element.eq(0).clone()).html();
    },

    /**
     * Gets the wrapped HTML content of an element to insert into the wysiwyg.
     *
     * It also registers the element in the tag map so that the token
     * replacement works.
     *
     * @param element (jQuery object) The element to insert.
     *
     * @see Drupal.media.filter.replacePlaceholderWithToken()
     */
    getWysiwygHTML: function (element) {
      // Create the markup and the macro.
      var markup = Drupal.media.filter.outerHTML(element),
        macro = Drupal.media.filter.create_macro(element);

      // Store macro/markup in the tagmap.
      Drupal.media.filter.ensure_tagmap();
      var i = 1;
      for (var key in Drupal.settings.tagmap) {
        i++;
      }
      Drupal.settings.tagmap[macro] = markup;

      // Return the wrapped html code to insert in an editor and use it with
      // replacePlaceholderWithToken()
      return Drupal.media.filter.getWrapperStart(i) + markup + Drupal.media.filter.getWrapperEnd(i);
    },

    /**
     * Ensures the tag map has been initialized and returns it.
     */
    ensure_tagmap: function () {
      Drupal.settings.tagmap = Drupal.settings.tagmap || {};
      return Drupal.settings.tagmap;
    },

    /**
     * Ensures the wysiwyg_allowed_attributes and returns it.
     * In case of an error the default settings are returned.
     */
    allowed_attributes: function () {
      Drupal.settings.wysiwyg_allowed_attributes = Drupal.settings.wysiwyg_allowed_attributes || ['height', 'width', 'hspace', 'vspace', 'border', 'align', 'style', 'alt', 'title', 'class', 'id', 'usemap'];
      return Drupal.settings.wysiwyg_allowed_attributes;
    }
  }
})(jQuery);
;
(function ($) {
  Drupal.behaviors.video_wysiwyg = {
    attach: function (context, settings) {
      $('#video-browser-page div.video-item a').click(function (){
        var nid = $(this).attr('ref');
        $('.video-item').css('background-color', 'white');
        $(this).parent().css('background-color', 'antiquewhite');
        Drupal.settings.wysiwyg.plugins.drupal.video.golbal.selectedId = nid;
        return false;
      });
      // dimensions
      $('.video-file-browser-dimensions').change(function (){
        Drupal.settings.wysiwyg.plugins.drupal.video.golbal.dimensions = $(this).val();
      });
    },
    videoBrowser: function (onSelect, data, settings, instanceId){
      // popup dialog
      var $dialog = $('<div></div>')
      .load(settings.golbal.url)
      .dialog({
        autoOpen: false,
        title: 'Video Browser',
        width: 640,
        height: 360
      });
      $dialog.dialog('open');
      // add button
      $dialog.dialog({
        buttons: [

        {
          text: "Ok",
          click: function() {
            $(this).dialog("close");
          }
        }
        ]
      });

      // close
      $dialog.dialog({
        close: function(event, ui) {
          var nid = Drupal.settings.wysiwyg.plugins.drupal.video.golbal.selectedId;
          if(nid.length)
            onSelect(nid, data, settings, instanceId);
        }
      });
    }
  };
})(jQuery);;

/**
 *  @file
 *  Attach Media WYSIWYG behaviors.
 */

(function ($) {

Drupal.media = Drupal.media || {};

/**
 * Register the plugin with WYSIWYG.
 */
Drupal.wysiwyg.plugins.media = {

  /**
   * Determine whether a DOM element belongs to this plugin.
   *
   * @param node
   *   A DOM element
   */
  isNode: function(node) {
    return $(node).is('img.media-element');
  },
  /**
   * Execute the button.
   *
   * @param data
   *   An object containing data about the current selection:
   *   - format: 'html' when the passed data is HTML content, 'text' when the
   *     passed data is plain-text content.
   *   - node: When 'format' is 'html', the focused DOM element in the editor.
   *   - content: The textual representation of the focused/selected editor
   *     content.
   * @param settings
   *   The plugin settings, as provided in the plugin's PHP include file.
   * @param instanceId
   *   The ID of the current editor instance.
   */
  invoke: function (data, settings, instanceId) {
    if (data.format == 'html') {
      var insert = new InsertMedia(instanceId);
      if (this.isNode(data.node)) {
        // Change the view mode for already-inserted media.
        var media_file = Drupal.media.filter.extract_file_info($(data.node));
        insert.onSelect([media_file]);
      }
      else {
        // Insert new media.
        insert.prompt(settings.global);
      }
    }
  },

  /**
   * Attach function, called when a rich text editor loads.
   * This finds all [[tags]] and replaces them with the html
   * that needs to show in the editor.
   *
   * This finds all JSON macros and replaces them with the HTML placeholder
   * that will show in the editor.
   */
  attach: function (content, settings, instanceId) {
    content = Drupal.media.filter.replaceTokenWithPlaceholder(content);
    return content;
  },

  /**
   * Detach function, called when a rich text editor detaches
   */
  detach: function (content, settings, instanceId) {
    content = Drupal.media.filter.replacePlaceholderWithToken(content);
    return content;
  }
};
/**
 * Defining InsertMedia object to manage the sequence of actions involved in
 * inserting a media element into the WYSIWYG.
 * Keeps track of the WYSIWYG instance id.
 */
var InsertMedia = function (instance_id) {
  this.instanceId = instance_id;
  return this;
};

InsertMedia.prototype = {
  /**
   * Prompt user to select a media item with the media browser.
   *
   * @param settings
   *    Settings object to pass on to the media browser.
   *    TODO: Determine if this is actually necessary.
   */
  prompt: function (settings) {
    Drupal.media.popups.mediaBrowser($.proxy(this, 'onSelect'), settings);
  },

  /**
   * On selection of a media item, display item's display configuration form.
   */
  onSelect: function (media_files) {
    this.mediaFile = media_files[0];
    Drupal.media.popups.mediaStyleSelector(this.mediaFile, $.proxy(this, 'insert'), {});
  },

  /**
   * When display config has been set, insert the placeholder markup into the
   * wysiwyg and generate its corresponding json macro pair to be added to the
   * tagmap.
   */
  insert: function (formatted_media) {
    var element = Drupal.media.filter.create_element(formatted_media.html, {
          fid: this.mediaFile.fid,
          view_mode: formatted_media.type,
          attributes: formatted_media.options,
          fields: formatted_media.options
        });
    // Get the markup and register it for the macro / placeholder handling.
    var markup = Drupal.media.filter.getWysiwygHTML(element);

    // Insert placeholder markup into wysiwyg.
    Drupal.wysiwyg.instances[this.instanceId].insert(markup);
  }
};

/** Helper functions */

/**
 * Ensures the tag map has been initialized.
 */
function ensure_tagmap () {
  return Drupal.media.filter.ensure_tagmap();
}

/**
 * Serializes file information as a url-encoded JSON object and stores it as a
 * data attribute on the html element.
 *
 * @param html (string)
 *    A html element to be used to represent the inserted media element.
 * @param info (object)
 *    A object containing the media file information (fid, view_mode, etc).
 *
 * @deprecated
 */
function create_element (html, info) {
  return Drupal.media.filter.create_element(html, info);
}

/**
 * Create a macro representation of the inserted media element.
 *
 * @param element (jQuery object)
 *    A media element with attached serialized file info.
 *
 * @deprecated
 */
function create_macro (element) {
  return Drupal.media.filter.create_macro(element);
}

/**
 * Extract the file info from a WYSIWYG placeholder element as JSON.
 *
 * @param element (jQuery object)
 *    A media element with attached serialized file info.
 *
 * @deprecated
 */
function extract_file_info (element) {
  return Drupal.media.filter.extract_file_info(element);
}

/**
 * Gets the HTML content of an element.
 *
 * @param element (jQuery object)
 *
 * @deprecated
 */
function outerHTML (element) {
  return Drupal.media.filter.outerHTML(element);
}

})(jQuery);
;
(function ($) {

Drupal.behaviors.textarea = {
  attach: function (context, settings) {
    $('.form-textarea-wrapper.resizable', context).once('textarea', function () {
      var staticOffset = null;
      var textarea = $(this).addClass('resizable-textarea').find('textarea');
      var grippie = $('<div class="grippie"></div>').mousedown(startDrag);

      grippie.insertAfter(textarea);

      function startDrag(e) {
        staticOffset = textarea.height() - e.pageY;
        textarea.css('opacity', 0.25);
        $(document).mousemove(performDrag).mouseup(endDrag);
        return false;
      }

      function performDrag(e) {
        textarea.height(Math.max(32, staticOffset + e.pageY) + 'px');
        return false;
      }

      function endDrag(e) {
        $(document).unbind('mousemove', performDrag).unbind('mouseup', endDrag);
        textarea.css('opacity', 1);
      }
    });
  }
};

})(jQuery);
;

(function ($) {

/**
 * Auto-hide summary textarea if empty and show hide and unhide links.
 */
Drupal.behaviors.textSummary = {
  attach: function (context, settings) {
    $('.text-summary', context).once('text-summary', function () {
      var $widget = $(this).closest('div.field-type-text-with-summary');
      var $summaries = $widget.find('div.text-summary-wrapper');

      $summaries.once('text-summary-wrapper').each(function(index) {
        var $summary = $(this);
        var $summaryLabel = $summary.find('label').first();
        var $full = $widget.find('.text-full').eq(index).closest('.form-item');
        var $fullLabel = $full.find('label').first();

        // Create a placeholder label when the field cardinality is
        // unlimited or greater than 1.
        if ($fullLabel.length == 0) {
          $fullLabel = $('<label></label>').prependTo($full);
        }

        // Setup the edit/hide summary link.
        var $link = $('<span class="field-edit-link">(<a class="link-edit-summary" href="#">' + Drupal.t('Hide summary') + '</a>)</span>');
        var $a = $link.find('a');
        var toggleClick = true;
        $link.bind('click', function (e) {
          if (toggleClick) {
            $summary.hide();
            $a.html(Drupal.t('Edit summary'));
            $link.appendTo($fullLabel);
          }
          else {
            $summary.show();
            $a.html(Drupal.t('Hide summary'));
            $link.appendTo($summaryLabel);
          }
          toggleClick = !toggleClick;
          return false;
        }).appendTo($summaryLabel);

        // If no summary is set, hide the summary field.
        if ($(this).find('.text-summary').val() == '') {
          $link.click();
        }
      });
    });
  }
};

})(jQuery);
;
(function ($) {

/**
 * Automatically display the guidelines of the selected text format.
 */
Drupal.behaviors.filterGuidelines = {
  attach: function (context) {
    $('.filter-guidelines', context).once('filter-guidelines')
      .find(':header').hide()
      .closest('.filter-wrapper').find('select.filter-list')
      .bind('change', function () {
        $(this).closest('.filter-wrapper')
          .find('.filter-guidelines-item').hide()
          .siblings('.filter-guidelines-' + this.value).show();
      })
      .change();
  }
};

})(jQuery);
;
/**
 * @file
 * Provides JavaScript additions to the managed file field type.
 *
 * This file provides progress bar support (if available), popup windows for
 * file previews, and disabling of other file fields during Ajax uploads (which
 * prevents separate file fields from accidentally uploading files).
 */

(function ($) {

/**
 * Attach behaviors to managed file element upload fields.
 */
Drupal.behaviors.fileValidateAutoAttach = {
  attach: function (context, settings) {
    if (settings.file && settings.file.elements) {
      $.each(settings.file.elements, function(selector) {
        var extensions = settings.file.elements[selector];
        $(selector, context).bind('change', {extensions: extensions}, Drupal.file.validateExtension);
      });
    }
  },
  detach: function (context, settings) {
    if (settings.file && settings.file.elements) {
      $.each(settings.file.elements, function(selector) {
        $(selector, context).unbind('change', Drupal.file.validateExtension);
      });
    }
  }
};

/**
 * Attach behaviors to the file upload and remove buttons.
 */
Drupal.behaviors.fileButtons = {
  attach: function (context) {
    $('input.form-submit', context).bind('mousedown', Drupal.file.disableFields);
    $('div.form-managed-file input.form-submit', context).bind('mousedown', Drupal.file.progressBar);
  },
  detach: function (context) {
    $('input.form-submit', context).unbind('mousedown', Drupal.file.disableFields);
    $('div.form-managed-file input.form-submit', context).unbind('mousedown', Drupal.file.progressBar);
  }
};

/**
 * Attach behaviors to links within managed file elements.
 */
Drupal.behaviors.filePreviewLinks = {
  attach: function (context) {
    $('div.form-managed-file .file a, .file-widget .file a', context).bind('click',Drupal.file.openInNewWindow);
  },
  detach: function (context){
    $('div.form-managed-file .file a, .file-widget .file a', context).unbind('click', Drupal.file.openInNewWindow);
  }
};

/**
 * File upload utility functions.
 */
Drupal.file = Drupal.file || {
  /**
   * Client-side file input validation of file extensions.
   */
  validateExtension: function (event) {
    // Remove any previous errors.
    $('.file-upload-js-error').remove();

    // Add client side validation for the input[type=file].
    var extensionPattern = event.data.extensions.replace(/,\s*/g, '|');
    if (extensionPattern.length > 1 && this.value.length > 0) {
      var acceptableMatch = new RegExp('\\.(' + extensionPattern + ')$', 'gi');
      if (!acceptableMatch.test(this.value)) {
        var error = Drupal.t("The selected file %filename cannot be uploaded. Only files with the following extensions are allowed: %extensions.", {
          // According to the specifications of HTML5, a file upload control
          // should not reveal the real local path to the file that a user
          // has selected. Some web browsers implement this restriction by
          // replacing the local path with "C:\fakepath\", which can cause
          // confusion by leaving the user thinking perhaps Drupal could not
          // find the file because it messed up the file path. To avoid this
          // confusion, therefore, we strip out the bogus fakepath string.
          '%filename': this.value.replace('C:\\fakepath\\', ''),
          '%extensions': extensionPattern.replace(/\|/g, ', ')
        });
        $(this).closest('div.form-managed-file').prepend('<div class="messages error file-upload-js-error" aria-live="polite">' + error + '</div>');
        this.value = '';
        return false;
      }
    }
  },
  /**
   * Prevent file uploads when using buttons not intended to upload.
   */
  disableFields: function (event){
    var clickedButton = this;

    // Only disable upload fields for Ajax buttons.
    if (!$(clickedButton).hasClass('ajax-processed')) {
      return;
    }

    // Check if we're working with an "Upload" button.
    var $enabledFields = [];
    if ($(this).closest('div.form-managed-file').length > 0) {
      $enabledFields = $(this).closest('div.form-managed-file').find('input.form-file');
    }

    // Temporarily disable upload fields other than the one we're currently
    // working with. Filter out fields that are already disabled so that they
    // do not get enabled when we re-enable these fields at the end of behavior
    // processing. Re-enable in a setTimeout set to a relatively short amount
    // of time (1 second). All the other mousedown handlers (like Drupal's Ajax
    // behaviors) are excuted before any timeout functions are called, so we
    // don't have to worry about the fields being re-enabled too soon.
    // @todo If the previous sentence is true, why not set the timeout to 0?
    var $fieldsToTemporarilyDisable = $('div.form-managed-file input.form-file').not($enabledFields).not(':disabled');
    $fieldsToTemporarilyDisable.attr('disabled', 'disabled');
    setTimeout(function (){
      $fieldsToTemporarilyDisable.attr('disabled', false);
    }, 1000);
  },
  /**
   * Add progress bar support if possible.
   */
  progressBar: function (event) {
    var clickedButton = this;
    var $progressId = $(clickedButton).closest('div.form-managed-file').find('input.file-progress');
    if ($progressId.length) {
      var originalName = $progressId.attr('name');

      // Replace the name with the required identifier.
      $progressId.attr('name', originalName.match(/APC_UPLOAD_PROGRESS|UPLOAD_IDENTIFIER/)[0]);

      // Restore the original name after the upload begins.
      setTimeout(function () {
        $progressId.attr('name', originalName);
      }, 1000);
    }
    // Show the progress bar if the upload takes longer than half a second.
    setTimeout(function () {
      $(clickedButton).closest('div.form-managed-file').find('div.ajax-progress-bar').slideDown();
    }, 500);
  },
  /**
   * Open links to files within forms in a new window.
   */
  openInNewWindow: function (event) {
    $(this).attr('target', '_blank');
    window.open(this.href, 'filePreview', 'toolbar=0,scrollbars=1,location=1,statusbar=1,menubar=0,resizable=1,width=500,height=550');
    return false;
  }
};

})(jQuery);
;
(function ($) {

/**
 * Toggle the visibility of a fieldset using smooth animations.
 */
Drupal.toggleFieldset = function (fieldset) {
  var $fieldset = $(fieldset);
  if ($fieldset.is('.collapsed')) {
    var $content = $('> .fieldset-wrapper', fieldset).hide();
    $fieldset
      .removeClass('collapsed')
      .trigger({ type: 'collapsed', value: false })
      .find('> legend span.fieldset-legend-prefix').html(Drupal.t('Hide'));
    $content.slideDown({
      duration: 'fast',
      easing: 'linear',
      complete: function () {
        Drupal.collapseScrollIntoView(fieldset);
        fieldset.animating = false;
      },
      step: function () {
        // Scroll the fieldset into view.
        Drupal.collapseScrollIntoView(fieldset);
      }
    });
  }
  else {
    $fieldset.trigger({ type: 'collapsed', value: true });
    $('> .fieldset-wrapper', fieldset).slideUp('fast', function () {
      $fieldset
        .addClass('collapsed')
        .find('> legend span.fieldset-legend-prefix').html(Drupal.t('Show'));
      fieldset.animating = false;
    });
  }
};

/**
 * Scroll a given fieldset into view as much as possible.
 */
Drupal.collapseScrollIntoView = function (node) {
  var h = document.documentElement.clientHeight || document.body.clientHeight || 0;
  var offset = document.documentElement.scrollTop || document.body.scrollTop || 0;
  var posY = $(node).offset().top;
  var fudge = 55;
  if (posY + node.offsetHeight + fudge > h + offset) {
    if (node.offsetHeight > h) {
      window.scrollTo(0, posY);
    }
    else {
      window.scrollTo(0, posY + node.offsetHeight - h + fudge);
    }
  }
};

Drupal.behaviors.collapse = {
  attach: function (context, settings) {
    $('fieldset.collapsible', context).once('collapse', function () {
      var $fieldset = $(this);
      // Expand fieldset if there are errors inside, or if it contains an
      // element that is targeted by the URI fragment identifier.
      var anchor = location.hash && location.hash != '#' ? ', ' + location.hash : '';
      if ($fieldset.find('.error' + anchor).length) {
        $fieldset.removeClass('collapsed');
      }

      var summary = $('<span class="summary"></span>');
      $fieldset.
        bind('summaryUpdated', function () {
          var text = $.trim($fieldset.drupalGetSummary());
          summary.html(text ? ' (' + text + ')' : '');
        })
        .trigger('summaryUpdated');

      // Turn the legend into a clickable link, but retain span.fieldset-legend
      // for CSS positioning.
      var $legend = $('> legend .fieldset-legend', this);

      $('<span class="fieldset-legend-prefix element-invisible"></span>')
        .append($fieldset.hasClass('collapsed') ? Drupal.t('Show') : Drupal.t('Hide'))
        .prependTo($legend)
        .after(' ');

      // .wrapInner() does not retain bound events.
      var $link = $('<a class="fieldset-title" href="#"></a>')
        .prepend($legend.contents())
        .appendTo($legend)
        .click(function () {
          var fieldset = $fieldset.get(0);
          // Don't animate multiple times.
          if (!fieldset.animating) {
            fieldset.animating = true;
            Drupal.toggleFieldset(fieldset);
          }
          return false;
        });

      $legend.append(summary);
    });
  }
};

})(jQuery);
;
(function ($) {

Drupal.behaviors.menuFieldsetSummaries = {
  attach: function (context) {
    $('fieldset.menu-link-form', context).drupalSetSummary(function (context) {
      if ($('.form-item-menu-enabled input', context).is(':checked')) {
        return Drupal.checkPlain($('.form-item-menu-link-title input', context).val());
      }
      else {
        return Drupal.t('Not in menu');
      }
    });
  }
};

/**
 * Automatically fill in a menu link title, if possible.
 */
Drupal.behaviors.menuLinkAutomaticTitle = {
  attach: function (context) {
    $('fieldset.menu-link-form', context).each(function () {
      // Try to find menu settings widget elements as well as a 'title' field in
      // the form, but play nicely with user permissions and form alterations.
      var $checkbox = $('.form-item-menu-enabled input', this);
      var $link_title = $('.form-item-menu-link-title input', context);
      var $title = $(this).closest('form').find('.form-item-title input');
      // Bail out if we do not have all required fields.
      if (!($checkbox.length && $link_title.length && $title.length)) {
        return;
      }
      // If there is a link title already, mark it as overridden. The user expects
      // that toggling the checkbox twice will take over the node's title.
      if ($checkbox.is(':checked') && $link_title.val().length) {
        $link_title.data('menuLinkAutomaticTitleOveridden', true);
      }
      // Whenever the value is changed manually, disable this behavior.
      $link_title.keyup(function () {
        $link_title.data('menuLinkAutomaticTitleOveridden', true);
      });
      // Global trigger on checkbox (do not fill-in a value when disabled).
      $checkbox.change(function () {
        if ($checkbox.is(':checked')) {
          if (!$link_title.data('menuLinkAutomaticTitleOveridden')) {
            $link_title.val($title.val());
          }
        }
        else {
          $link_title.val('');
          $link_title.removeData('menuLinkAutomaticTitleOveridden');
        }
        $checkbox.closest('fieldset.vertical-tabs-pane').trigger('summaryUpdated');
        $checkbox.trigger('formUpdated');
      });
      // Take over any title change.
      $title.keyup(function () {
        if (!$link_title.data('menuLinkAutomaticTitleOveridden') && $checkbox.is(':checked')) {
          $link_title.val($title.val());
          $link_title.val($title.val()).trigger('formUpdated');
        }
      });
    });
  }
};

})(jQuery);
;
(function ($) {

Drupal.behaviors.pathFieldsetSummaries = {
  attach: function (context) {
    $('fieldset.path-form', context).drupalSetSummary(function (context) {
      var path = $('.form-item-path-alias input').val();
      var automatic = $('.form-item-path-pathauto input').attr('checked');

      if (automatic) {
        return Drupal.t('Automatic alias');
      }
      if (path) {
        return Drupal.t('Alias: @alias', { '@alias': path });
      }
      else {
        return Drupal.t('No alias');
      }
    });
  }
};

})(jQuery);
;

(function ($) {

Drupal.behaviors.metatagFieldsetSummaries = {
  attach: function (context) {
    $('fieldset.metatags-form', context).drupalSetSummary(function (context) {
      var vals = [];
      $("input[type='text'], select, textarea", context).each(function() {
        var default_name = $(this).attr('name').replace(/\[value\]/, '[default]');
        var default_value = $("input[type='hidden'][name='" + default_name + "']", context);
        if (default_value.length && default_value.val() == $(this).val()) {
          // Meta tag has a default value and form value matches default value.
          return true;
        }
        else if (!default_value.length && !$(this).val().length) {
          // Meta tag has no default value and form value is empty.
          return true;
        }
        var label = $("label[for='" + $(this).attr('id') + "']").text();
        vals.push(Drupal.t('@label: @value', {
          '@label': $.trim(label),
          '@value': Drupal.truncate($(this).val(), 25) || Drupal.t('None')
        }));
      });
      if (vals.length === 0) {
        return Drupal.t('Using defaults');
      }
      else {
        return vals.join('<br />');
      }
    });
  }
};

/**
 * Encode special characters in a plain-text string for display as HTML.
 */
Drupal.truncate = function (str, limit) {
  if (str.length > limit) {
    return str.substr(0, limit) + '...';
  }
  else {
    return str;
  }
};

})(jQuery);
;
(function ($) {

/**
 * Attaches sticky table headers.
 */
Drupal.behaviors.tableHeader = {
  attach: function (context, settings) {
    if (!$.support.positionFixed) {
      return;
    }

    $('table.sticky-enabled', context).once('tableheader', function () {
      $(this).data("drupal-tableheader", new Drupal.tableHeader(this));
    });
  }
};

/**
 * Constructor for the tableHeader object. Provides sticky table headers.
 *
 * @param table
 *   DOM object for the table to add a sticky header to.
 */
Drupal.tableHeader = function (table) {
  var self = this;

  this.originalTable = $(table);
  this.originalHeader = $(table).children('thead');
  this.originalHeaderCells = this.originalHeader.find('> tr > th');
  this.displayWeight = null;

  // React to columns change to avoid making checks in the scroll callback.
  this.originalTable.bind('columnschange', function (e, display) {
    // This will force header size to be calculated on scroll.
    self.widthCalculated = (self.displayWeight !== null && self.displayWeight === display);
    self.displayWeight = display;
  });

  // Clone the table header so it inherits original jQuery properties. Hide
  // the table to avoid a flash of the header clone upon page load.
  this.stickyTable = $('<table class="sticky-header"/>')
    .insertBefore(this.originalTable)
    .css({ position: 'fixed', top: '0px' });
  this.stickyHeader = this.originalHeader.clone(true)
    .hide()
    .appendTo(this.stickyTable);
  this.stickyHeaderCells = this.stickyHeader.find('> tr > th');

  this.originalTable.addClass('sticky-table');
  $(window)
    .bind('scroll.drupal-tableheader', $.proxy(this, 'eventhandlerRecalculateStickyHeader'))
    .bind('resize.drupal-tableheader', { calculateWidth: true }, $.proxy(this, 'eventhandlerRecalculateStickyHeader'))
    // Make sure the anchor being scrolled into view is not hidden beneath the
    // sticky table header. Adjust the scrollTop if it does.
    .bind('drupalDisplaceAnchor.drupal-tableheader', function () {
      window.scrollBy(0, -self.stickyTable.outerHeight());
    })
    // Make sure the element being focused is not hidden beneath the sticky
    // table header. Adjust the scrollTop if it does.
    .bind('drupalDisplaceFocus.drupal-tableheader', function (event) {
      if (self.stickyVisible && event.clientY < (self.stickyOffsetTop + self.stickyTable.outerHeight()) && event.$target.closest('sticky-header').length === 0) {
        window.scrollBy(0, -self.stickyTable.outerHeight());
      }
    })
    .triggerHandler('resize.drupal-tableheader');

  // We hid the header to avoid it showing up erroneously on page load;
  // we need to unhide it now so that it will show up when expected.
  this.stickyHeader.show();
};

/**
 * Event handler: recalculates position of the sticky table header.
 *
 * @param event
 *   Event being triggered.
 */
Drupal.tableHeader.prototype.eventhandlerRecalculateStickyHeader = function (event) {
  var self = this;
  var calculateWidth = event.data && event.data.calculateWidth;

  // Reset top position of sticky table headers to the current top offset.
  this.stickyOffsetTop = Drupal.settings.tableHeaderOffset ? eval(Drupal.settings.tableHeaderOffset + '()') : 0;
  this.stickyTable.css('top', this.stickyOffsetTop + 'px');

  // Save positioning data.
  var viewHeight = document.documentElement.scrollHeight || document.body.scrollHeight;
  if (calculateWidth || this.viewHeight !== viewHeight) {
    this.viewHeight = viewHeight;
    this.vPosition = this.originalTable.offset().top - 4 - this.stickyOffsetTop;
    this.hPosition = this.originalTable.offset().left;
    this.vLength = this.originalTable[0].clientHeight - 100;
    calculateWidth = true;
  }

  // Track horizontal positioning relative to the viewport and set visibility.
  var hScroll = document.documentElement.scrollLeft || document.body.scrollLeft;
  var vOffset = (document.documentElement.scrollTop || document.body.scrollTop) - this.vPosition;
  this.stickyVisible = vOffset > 0 && vOffset < this.vLength;
  this.stickyTable.css({ left: (-hScroll + this.hPosition) + 'px', visibility: this.stickyVisible ? 'visible' : 'hidden' });

  // Only perform expensive calculations if the sticky header is actually
  // visible or when forced.
  if (this.stickyVisible && (calculateWidth || !this.widthCalculated)) {
    this.widthCalculated = true;
    var $that = null;
    var $stickyCell = null;
    var display = null;
    var cellWidth = null;
    // Resize header and its cell widths.
    // Only apply width to visible table cells. This prevents the header from
    // displaying incorrectly when the sticky header is no longer visible.
    for (var i = 0, il = this.originalHeaderCells.length; i < il; i += 1) {
      $that = $(this.originalHeaderCells[i]);
      $stickyCell = this.stickyHeaderCells.eq($that.index());
      display = $that.css('display');
      if (display !== 'none') {
        cellWidth = $that.css('width');
        // Exception for IE7.
        if (cellWidth === 'auto') {
          cellWidth = $that[0].clientWidth + 'px';
        }
        $stickyCell.css({'width': cellWidth, 'display': display});
      }
      else {
        $stickyCell.css('display', 'none');
      }
    }
    this.stickyTable.css('width', this.originalTable.outerWidth());
  }
};

})(jQuery);
;

(function ($) {

Drupal.behaviors.redirectFieldsetSummaries = {
  attach: function (context) {
    $('fieldset.redirect-list', context).drupalSetSummary(function (context) {
      if ($('table.redirect-list tbody td.empty', context).length) {
        return Drupal.t('No redirects');
      }
      else {
        var enabled_redirects = $('table.redirect-list tbody tr.redirect-enabled', context).length;
        var disabled_redirects = $('table.redirect-list tbody tr.redirect-disabled', context).length;
        var text = '';
        if (enabled_redirects > 0) {
          var text = Drupal.formatPlural(enabled_redirects, '1 enabled redirect', '@count enabled redirects');
        }
        if (disabled_redirects > 0) {
          if (text.length > 0) {
            text = text + '<br />';
          }
          text = text + Drupal.formatPlural(disabled_redirects, '1 disabled redirect', '@count disabled redirects');
        }
        return text;
      }
    });
  }
};

})(jQuery);
;
/**
 * @file
 * jQuery to provide summary information inside vertical tabs.
 */

(function ($) {

/**
 * Provide summary information for vertical tabs.
 */
Drupal.behaviors.scheduler_settings = {
  attach: function (context) {

    // Add the theme name as an additional class to the vertical-tabs div. This
    // can then be used in scheduler.css to rectify the style for collapsible
    // fieldsets where different themes need slightly different fixes. The theme
    // is available in ajaxPageState.
    var theme = Drupal.settings.ajaxPageState['theme'];
    $('div.vertical-tabs').addClass(theme);

    // Provide summary when editing a node.
    $('fieldset#edit-scheduler-settings', context).drupalSetSummary(function(context) {
      var vals = [];
      if ($('#edit-publish-on').val() || $('#edit-publish-on-datepicker-popup-0').val()) {
        vals.push(Drupal.t('Scheduled for publishing'));
      }
      if ($('#edit-unpublish-on').val() || $('#edit-unpublish-on-datepicker-popup-0').val()) {
        vals.push(Drupal.t('Scheduled for unpublishing'));
      }
      if (!vals.length) {
        vals.push(Drupal.t('Not scheduled'));
      }
      return vals.join('<br/>');
    });

    // Provide summary during content type configuration.
    $('fieldset#edit-scheduler', context).drupalSetSummary(function(context) {
      var vals = [];
      if ($('#edit-scheduler-publish-enable', context).is(':checked')) {
        vals.push(Drupal.t('Publishing enabled'));
      }
      if ($('#edit-scheduler-unpublish-enable', context).is(':checked')) {
        vals.push(Drupal.t('Unpublishing enabled'));
      }
      return vals.join('<br/>');
    });
  }
};

})(jQuery);
;

(function ($) {

Drupal.behaviors.nodeFieldsetSummaries = {
  attach: function (context) {
    $('fieldset.node-form-revision-information', context).drupalSetSummary(function (context) {
      var revisionCheckbox = $('.form-item-revision input', context);

      // Return 'New revision' if the 'Create new revision' checkbox is checked,
      // or if the checkbox doesn't exist, but the revision log does. For users
      // without the "Administer content" permission the checkbox won't appear,
      // but the revision log will if the content type is set to auto-revision.
      if (revisionCheckbox.is(':checked') || (!revisionCheckbox.length && $('.form-item-log textarea', context).length)) {
        return Drupal.t('New revision');
      }

      return Drupal.t('No revision');
    });

    $('fieldset.node-form-author', context).drupalSetSummary(function (context) {
      var name = $('.form-item-name input', context).val() || Drupal.settings.anonymous,
        date = $('.form-item-date input', context).val();
      return date ?
        Drupal.t('By @name on @date', { '@name': name, '@date': date }) :
        Drupal.t('By @name', { '@name': name });
    });

    $('fieldset.node-form-options', context).drupalSetSummary(function (context) {
      var vals = [];

      $('input:checked', context).parent().each(function () {
        vals.push(Drupal.checkPlain($.trim($(this).text())));
      });

      if (!$('.form-item-status input', context).is(':checked')) {
        vals.unshift(Drupal.t('Not published'));
      }
      return vals.join(', ');
    });
  }
};

})(jQuery);
;
/**
 * @file
 * Sets the summary for Workbench moderation on vertical tabs.
 */

(function ($) {

Drupal.behaviors.workbenchModerationSettingsSummary = {
  attach: function(context) {
    $('fieldset.node-form-options', context).drupalSetSummary(function (context) {
      var vals = [];

      $('input:checked', context).parent().each(function () {
        vals.push(Drupal.checkPlain($.trim($(this).text())));
      });

      if ($('select[name="workbench_moderation_state_new"]', context).val()) {
        vals.push(Drupal.checkPlain($('select[name="workbench_moderation_state_new"] option:selected').text()));
      }
      return vals.join(', ');
    });
  }
};

})(jQuery);
;
