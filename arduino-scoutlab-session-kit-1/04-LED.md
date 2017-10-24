---
layout: multipage
title: LED mit einem Programm schalten
category: Scoutlab Session Kit 1 für Arduino
permalink: /arduino-scoutlab-session-kit-1/programm
---
# LED mit einem Programm schalten
## Material
* 1x LED
* 1x 220 Ohm Widerstand
* 2x Kabel
* 1x Steckbrett

![Material: LED mit einem Programm schalten](images/material_led1_arduino.png)

<div style="page-break-after: always;"></div>

## Aufbau
![Aufbau: LED mit einem Programm schalten](images/led2_arduiono_Steckplatine.png)


>**Programm-Beispiel**: `led.ino`

<div style="page-break-after: always;"></div>

Nach der Installation der Entwicklungsumgebung aus dem [**Kapitel Vorbereitung**](/arduino-scoutlab-session-kit-1/vorbereitung) könnt ihr das Programm öffnen und das Programm-Beispiel in den Editor kopieren.

## Quell-Code

```c++
const int LED_Pin = 13;

void setup()
{
pinMode(LED_Pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_Pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_Pin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
```
Jetzt kann das Programm in ein maschinenlesbares Format übersetzt und an den Arduino übertragen werden. Hierzu drücke wir einfach auf Upload.

![Upload Windows](http://dev-blog.vcp.de/wp-content/uploads/2016/07/arduino_windows_blink_upload-250x300.png)

Upload Code. Unten kann man überprüfen, ob die Übertragung funktioniert.

Nach ein paar Sekunden sollte die LED beginnen zu blinken. Der Prozess kann im Bereich Statusmeldungen überprüft werden. Wenn etwas nicht funktioniert, reicht es in der Regel, wenn man die Fehlermeldung bei Google sucht. Irgendjemand hatte bestimmt schon mal das gleiche Problem.
