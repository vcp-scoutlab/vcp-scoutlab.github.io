---
layout: multipage
title: Arduino-Setup auf einem Linux-PC
category: Scoutlab Session Kit 1 für Arduino
permalink: /arduino-scoutlab-session-kit-1/Arduino-Setup-auf-einem-Linux-PC
---

# Arduino-Setup auf einem Linux-PC

Die Anleitung erklärt, wie du das Arduino-Board an den Computer anschließt.

## Du benötigst den Arduino und ein USB-Kabel

![arduino\_usb\_kabel](images/arduino_usb_kabel-300x200.jpg)

## Herunterladen und Entpacken der Arduino Software

Lade die neueste Version von der [Download – Seite](https://www.arduino.cc/en/Main/Software). Wähle das 32- oder 64 – Bit – Paket passend zu deiner Linux – Version. Wenn der Download abgeschlossen ist, entpacke das Arduino tar.xz Paket in einen Ordner, in dem die Arduino Software später ausgeführt werden soll.

![arduino\_linux\_entpacken](images/arduino_linux_entpacken-300x143.png)

## Installieren der Software

Ruf die Konsole auf und wechsle in den gerade angelegten Arduino-Ordner und starte die install.sh – Datei.
 Der Installationsprozess wird relativ schnell ausgeführt. Nach Abschluss erscheint das Arduino-Icon auf dem Desktop.

Damit später die Arduino-Software auch den USB-Port nutzen darf musst du noch folgenden Befehl im Terminal ausführen (ersetze dabei \<username\> durch deinen Benutzernamen):

`sudo usermod -a -G dialout <username>`

z.B. dein Benutzername ist „scoutlab“, dann lautet der passende Befehl:

`sudo usermod -a -G dialout scoutlab`

Damit die Änderung aktiv wird, melde dich komplett am System ab und direkt wieder an. Sonst wird die Änderung nicht aktiv und die weiteren Schritte können nicht ausgeführt werden.

## Den Arduino mit dem Computer verbinden

Die USB-Verbindung mit dem PC ist notwendig, um die Karte zu programmieren & mit Strom zu versorgen.

![arduino\_uno\_angeschlossen\_neu](images/arduino_uno_angeschlossen_neu-300x245.png)

Wenn der Arduino mit dem Computer verbunden ist, dann leuchtet die Power-LED auf dem Arduino.

## Starte die Arduino Software

Starte die Software mit einem Doppelklick auf das Symbol auf dem Desktop.

![arduino\_linux\_icon\_desktop](images/arduino_linux_icon_desktop.png)

## Wähle das Board

Für die Übertragung muss zunächst der angeschlossenen Arduino ausgewählt werden. Hierzu unter Tools -\> Board das verwendete Board auswählen. (z.B. Arduino UNO)
 Board auswählen. Der Boardname steht auf der Platine

![arduino\_linux\_selectboard](images/arduino_linux_selectboard-300x180.png)

## Wähle die Schnittstelle

Anschließend sucht ihr den Port, an dem der Arduino angeschlossen ist aus.

![arduino\_linux\_selectport](images/arduino_linux_selectport-300x181.png)

## Erster Versuch mit dem Blink Beispiel

Öffne das LED – Blink Beispiel über Datei\> Beispiele\> 01.Basics\> Blink.

![](images/arduino_linux_blink-300x180.png)

Jetzt kann das Programm in ein maschinenlesbares Format übersetzt und an den Arduino übertragen werden. Hierzu drücke wir einfach auf Upload.

![arduino\_linux\_blink](images/arduino_linux_blink_upload-300x180.png)

Nach ein paar Sekunden sollten die LED auf dem Arduino-Board beginnen zu blinken. Der Prozess kann im Bereich Statusmeldungen überprüft werden. Wenn etwas nicht funktioniert, reicht es in der Regel, wenn man die Fehlermeldung bei Google sucht. Irgendjemand hatte bestimmt schon mal das gleiche Problem.

![](images/arduino_uno_angeschlossen_blink.gif)
