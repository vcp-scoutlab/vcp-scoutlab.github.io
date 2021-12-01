---
layout: multipage
title: Digitaler Würfel mit Zahlen dem micro:bit
navtitle: Digitaler Würfel Zahlen&nbsp;<img src="/micro-bit/images/vcp-meet.png" title="Dieses Angebot kann auch über VCP-Meet genutzt werden.">
category: micro:bit
permalink: /micro-bit/Wuerfel
---

# Digitaler Würfel mit Zahlen

![](images/20211115_110359.jpg)

<div style="page-break-after: always;"></div>

## Material:

mirco:bit

## Editor:

[https://makecode.microbit.org/](https://makecode.microbit.org/)

## Funktion:

Durch Schütteln des mirco:bit wird in ein Zufallszahl (zwischen 1 und 6) generiert.
Das Ergebnis wird als "Zahlen" auf einem Würfel angezeigt.

<div style="page-break-after: always;"></div>

![](images/micro-bit-Screenshot_wuzerfel_zahlen.png)

<div style="page-break-after: always;"></div>

### So funktioniert das Programm
Der neue Würfel zeigt das Ergebnis nicht direkt als Zahl an, sondern soll je nach gewürfeltem Wert eines von sechs Bildern anzeigen. Die zufällig ermittelte Zahl wird diesmal nicht sofort angezeigt, sondern zunächst in der **Variable wuerfel** gespeichert.

<div class="alert alert-info" role="alert">
<b>Variablen:</b> Variablen sind kleine Speicherplätze, in denen man sich während eines Programms eine Zahl oder irgendetwas anders merken kann. Wenn das Programm beendet wird, werden diese Variablenspeicher automatisch wieder geleert. Variablen müssen im Makecode-Editor erst einmal auf der Blockpalette Variablen mit dem <b><i>Button Make a Variable</i></b> angelegt werden, bevor man diese benutzen kann.
</div>

#### Variablen im Makecode-Editor
Variablen sind kleine Speicherplätze, in denen man sich während eines Programms eine Zahl oder irgendetwas anders merken kann. Wenn das Programm beendet wird, werden diese Variablenspeicher automatisch wieder geleert. Variablen müssen im Makecode-Editor erst einmal auf der Blockpalette Variablen mit dem **Button Make a Variable** angelegt werden, bevor man diese benutzen kann. Anschließend kannst du das Symbol der neu angelegten Variablen in ein dafür vorgesehenes Feld eines Blocks im Programm ziehen. In der Gruppe Variablen stehen zusätzlich zwei verschiedene Blöcke zum Verändern der Variablen zur Verfügung, die leicht zu verwechseln sind, aber unterschiedliche Funktionen haben.
+ ändere Variable auf ... setzt die Variable auf einen bestimmten Wert.
+ ändere Variable um ... erhöht die Variable um einen bestimmten Wert.

Im Programm folgen sechs verschiedene **wenn ... dann ...-Abfragen aus der Gruppe Logik**. Die Blöcke innerhalb der Klammer dieser Abfrage werden immer dann ausgeführt, wenn die Bedingung in der Abfrage wahr ist.

Alle diese Abfragen verwenden den Block **... = ... aus der Gruppe Logik**, um zu prüfen, ob der Wert der **Variable wuerfel** einer der sechs möglichen Zahlen entspricht. Ist das der Fall, wird das entsprechende Würfelmuster auf der LED-Matrix angezeigt. Dazu wird der Block zeige LEDs aus der Gruppe Grundlagen verwendet. Hier kannst du durch Anklicken das gewünschte LED-Muster festlegen.

#### Blöcke duplizieren
Ähnliche Programmblöcke, wie hier die sechs** wenn ... dann ... Abfragen**, brauchen nicht jedes Mal komplett neu zusammengebaut zu werden. Klicke mit der rechten Maustaste auf einen Block und wähle im Kontextmenü Duplizieren. Automatisch wird eine Kopie des Blocks und aller ineinander verschachtelten Blöcke angelegt, die du an die gewünschte Position im Programm ziehen und weiter bearbeiten könnt.

## Programmbeispiel
[microbit-wuerfel_zahlen_schuettel.hex](appendix/microbit-wuerfel_zahlen_schuettel.hex)
