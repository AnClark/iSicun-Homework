/*! Video.js v4.3.0 Copyright 2013 Brightcove, Inc. https://github.com/videojs/video.js/blob/master/LICENSE */ (function() {var b=void 0,f=!0,h=null,l=!1;function m(){return function(){}}function p(a){return function(){return this[a]}}function s(a){return function(){return a}}var t;document.createElement("video");document.createElement("audio");document.createElement("track");function u(a,c,d){if("string"===typeof a){0===a.indexOf("#")&&(a=a.slice(1));if(u.xa[a])return u.xa[a];a=u.w(a)}if(!a||!a.nodeName)throw new TypeError("The element or ID supplied is not valid. (videojs)");return a.player||new u.s(a,c,d)}var v=u;