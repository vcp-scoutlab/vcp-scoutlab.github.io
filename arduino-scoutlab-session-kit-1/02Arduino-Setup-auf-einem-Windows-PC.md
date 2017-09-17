---
layout: multipage
title: Arduino-Setup auf einem Windows-PC
category: Scoutlab Session Kit 1 für Arduino
permalink: /arduino-scoutlab-session-kit-1/Arduino-Setup-auf-einem-Windows-PC
---

# Arduino-Setup auf einem Windows-PC

Die Anleitung erklärt, wie du das Arduino-Board an den Computer anschließt.

## Du benötigst den Arduino und ein USB-Kabel

![arduino\_usb\_kabel](images/arduino_usb_kabel-300x200.jpg)

## Herunterladen und Installieren der Arduino Software

Lade die neueste Version der Entwicklungsumgebung von der [Download –
Seite](https://www.arduino.cc/en/Main/Software) herunter. Wir empfehlen
dir die .exe, die direkt alles installiert. Die benötigen die Arduino
Software und einschließlich der passenden Treiber.

![arduino\_windows\_select\_options](images/arduino_windows_select_options-300x207.png)

## Den Arduino mit dem Computer verbinden

Die USB-Verbindung mit dem PC ist notwendig, um die Karte zu programmieren & mit Strom zu versorgen.

![arduino\_uno\_angeschlossen\_neu](images/arduino_uno_angeschlossen_neu-300x245.png)

Wenn der Arduino mit dem Computer verbunden ist, dann leuchtet die
Power-LED auf dem Arduino.

## Kartentreiber werden automatisch installiert

Bei Windows – von XP bis zu 10 – installieren sich die Treiber
automatisch, sobald der Arduino zum ersten mal am Computer angeschlossen
wird. Bitte warte die Installationsprozess ab und mach erst dann weiter.

## Starte die Arduino Software

Starte die Sofware mit einem Doppelklick auf das Symbol auf dem Desktop.

![arduino\_windows\_icon\_desktop](images/arduino_windows_icon_desktop.png)

## Wähle das Board

Für die Übertragung muss zunächst der angeschlossenen Arduino ausgewählt
werden. Hierzu unter Tools -\> Board das verwendete Board auswählen.
(z.B. Arduino UNO)\
 Board auswählen. Der Boardname steht auf der Platine

![arduino\_windows\_selectboard](images/arduino_windows_selectboard-300x272.png)

## Wähle die Schnittstelle

Anschließend sucht ihr den Port, an dem der Arduino angeschlossen ist
aus.

![arduino\_windows\_selectport](images/arduino_windows_selectport-300x300.png)

## Erster Versuch mit dem Blink Beispiel

Öffne das LED – Blink Beispiel über Datei\> Beispiele\> 01.Basics\>
Blink.

Jetzt kann das Programm in ein maschinenlesbares Format übersetzt und an
den Arduino übertragen werden. Hierzu drücke wir einfach auf Upload.

![arduino\_windows\_blink\_upload](images/arduino_windows_blink_upload-250x300.png)

Nach ein paar Sekunden sollten die LED auf dem Arduino-Board beginnen zu
blinken. Der Prozess kann im Bereich Statusmeldungen überprüft werden.
Wenn etwas nicht funktioniert, reicht es in der Regel, wenn man die
Fehlermeldung bei Google sucht. Irgendjemand hatte bestimmt schon mal
das gleiche Problem.

![](images/arduino_uno_angeschlossen_blink.gif)
