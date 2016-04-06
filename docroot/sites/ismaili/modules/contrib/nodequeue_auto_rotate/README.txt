README.txt
==========

A module for autorotating nodequeues on a schedule. Enabling this module adds a
date popup field to the edit nodequeue form. Administrtators can choose a date 
to start rotating, and a frequency of how often to rotate. When cron runs, the
module checks the last time the queue was rotated, and compares against the
frequency. When the queue is rotated, the last node in the queue is moved
position 1, and all other nodes are moved down one. This is ideal in a situation when, for
instance, Views is being used to display a queue, and the view is only displaying
the first few nodes. A queue with 50 nodes loaded displaying the top
5 with a frequency of 5 days can rotate for 50 days before repeating itself.


AUTHOR/MAINTAINER
======================
-sean montague <couloir007 at gmail DOT com>
