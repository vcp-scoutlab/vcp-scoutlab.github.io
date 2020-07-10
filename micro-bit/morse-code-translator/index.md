---
layout: multipage
title: micro:bit
category: microbit
nav: false
permalink: /micro-bit/morse-code-translator/index
subdir: micro-bit
---
> Verwandle einfachen Text in Morsezeichen und verwandle den Morsezeichen in einfachen Text mit diesem einfachen Werkzeug.


<html>
<label>Eingabe:</label>
<textarea rows="10" cols="50" id="msgInput" oninput="MorseTranslator()" placeholder="Gib hier deinen Text oder deine Morsezeichen ein." class="materialize-textarea" style="width:95%"></textarea>

<label>Ausgabe:</label>
<textarea rows="10" cols="50" id="msgOutput" class="materialize-textarea" style="width:95%">
</textarea>


<script type="text/javascript" src="script.js "></script>
<script type="text/javascript" src="morse.js"></script>

</html>
