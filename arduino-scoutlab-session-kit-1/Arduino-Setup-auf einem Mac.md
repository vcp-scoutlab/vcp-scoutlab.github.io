---
layout: multipage
title: Arduino-Setup auf einem Mac
category: Scoutlab Session Kit 1 für Arduino
permalink: /arduino-scoutlab-session-kit-1/Arduino-Setup-auf-einem-Mac
section_start: true
---

# Arduino-Setup auf einem Mac

Die Anleitung erklärt, wie du das Arduino-Board an den Computer anschließt.

## Du benötigst den Arduino und ein USB-Kabel

![arduino\_usb\_kabel](images/arduino_usb_kabel-300x200.jpg)

## Herunterladen und Installieren der Arduino Software

Lade die neueste Version von der [Download – Seite](https://www.arduino.cc/en/Main/Software).
 Wenn der Download abgeschlossen ist, mach einen Doppelklick auf die zip-Datei.
 Damit wird die Datei entpackt.

Um die Arduino-Software zu Installieren kopiere die Arduino-Anwendung in den Programme-Ordner.

## Den Arduino mit dem Computer verbinden

Die USB-Verbindung mit dem PC ist notwendig, um die Karte zu programmieren & mit Strom zu versorgen.

![arduino\_uno\_angeschlossen\_neu](images/arduino_uno_angeschlossen_neu-300x245.png)

Wenn der Arduino mit dem Computer verbunden ist, dann leuchtet die Power-LED auf dem Arduino.

## Wähle das Board

Für die Übertragung muss zunächst der angeschlossenen Arduino ausgewählt werden. Hierzu unter Tools -\> Board das verwendete Board auswählen. (z.B. Arduino UNO)
 Board auswählen. Der Boardname steht auf der Platine

![selectboard](images/selectboard-300x122.png)

## Wähle die Schnittstelle

Anschließend sucht ihr den Port, an dem der Arduino angeschlossen ist aus.

![selectport](images/selectport-300x101.png)

## Erster Versuch mit dem Blink Beispiel

Öffne das LED – Blink Beispiel über Datei\> Beispiele\> 01.Basics\> Blink.

Jetzt kann das Programm in ein maschinenlesbares Format übersetzt und an den Arduino übertragen werden. Hierzu drücke wir einfach auf Upload.

![upload](images/upload-252x300.png)

Nach ein paar Sekunden sollten die LED auf dem Arduino-Board beginnen zu blinken. Der Prozess kann im Bereich Statusmeldungen überprüft werden. Wenn etwas nicht funktioniert, reicht es in der Regel, wenn man die Fehlermeldung bei Google sucht. Irgendjemand hatte bestimmt schon mal das gleiche Problem.

![](images/arduino_uno_angeschlossen_blink.gif)
