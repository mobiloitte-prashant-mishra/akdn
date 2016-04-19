(function ($) {
if (typeof console == "undefined") {window.console = {log: function (m) {alert(m)}};} // Turn console.log into alert if unavailble

var players = []; // array to hold players

function onTemplateLoad (id) {
    // Add each player's id to the players array
    console.log(id + " loaded");
    players.push(id);
}

function onTemplateReady (event) {
    // Add a PLAY event handler to each player
    var player = brightcove.api.getExperience(event.target.experience.id);
    var videoPlayer = player.getModule(brightcove.api.modules.APIModules.VIDEO_PLAYER);
    videoPlayer.addEventListener(brightcove.api.events.MediaEvent.PLAY, function(event) {onPlay(event);});
}

function onPlay(event) {
    var id = event.target.experience.id;
    console.log ("Player " + idid + " playing");

    // Loop through the players array, and stop the others
    for (var i = 0; i < players.length; i++) {
        if (players[i] != id) {
            console.log ("Stopping player " + players[i]);
            var player = brightcove.api.getExperience(players[i]);
            var videoPlayer = player.getModule(brightcove.api.modules.APIModules.VIDEO_PLAYER);
            videoPlayer.pause(true);
        }
    }
}
    brightcove.createExperiences();
}(jQuery));