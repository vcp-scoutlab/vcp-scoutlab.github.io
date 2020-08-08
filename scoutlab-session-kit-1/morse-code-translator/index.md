---
layout: multipage
title: Scoutlab Session Kit 1
category: Scoutlab Session Kit 1
nav: false
permalink: /scoutlab-session-kit-1/morse-code-translator/
---

### Verwandle einfachen Text in Morsezeichen und verwandle den Morsezeichen in einfachen Text mit diesem einfachen Werkzeug.

<div class="alert alert-info" role="alert">
Denkt daran, dass Umlaute wie ä,ü,ö in den Morsezeichen als ae, ue und oe geschrieben werden.
</div>

<html>
<label>Eingabe:</label>
<textarea rows="5" cols="50" id="msgInput" oninput="MorseTranslator()" placeholder="Gib hier deinen Text oder deine Morsezeichen ein." class="materialize-textarea" style="width:95%; font-size: 1.5em;"></textarea>

<label>Ausgabe:</label>
<textarea rows="5" cols="50" id="msgOutput" class="materialize-textarea" style="width:95%; font-size: 1.5em;">
</textarea>


<script type="text/javascript" src="script.js "></script>
<script type="text/javascript" src="morse.js"></script>

</html>
