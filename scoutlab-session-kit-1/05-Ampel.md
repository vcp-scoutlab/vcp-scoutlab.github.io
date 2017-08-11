---
layout: multipage
title: Ampel
permalink: /scoutlab-session-kit-1/ampel
---
# Ampel
## Material
* 1x LED rot
* 1x LED gelb
* 1x LED grün
* 3x 220 Ohm Widerstand
* 4x Kabel
* 1x Steckbrett

![Material: Ampel](images/material_ampel.png)

<div style="page-break-after: always;"></div>

## Aufbau

![Aufbau  Ampel](images/led_ampel_Steckplatine_gpio.png)

>**Scratch**: `ampel.sb` in deinem Projekt-Ordner für Scratch.
>
>**Python**: `ampel.py` in deinem Projekt-Ordner für Python.

<div style="page-break-after: always;"></div>

## Scratch-Programm

![](images/ampel.png)

Am GPIO-Pin 16 ist die rote LED, am GPIO-Pin 20 ist die gelbe LED und am GPIO-Pin 21 die grüne LED, angeschlossen. Eine Schleife schaltet nun die Ampel. Frage: Kannst du im Programm ablesen, wie genau die Ampel geschaltet wird? Nutze dabei dein Wissen zur Steuerung von LEDs aus dem letzten Arbeitsblatt.

## Python-Programm

```python
import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False) #keine unnoetigen Warnungen
from time import sleep
rot = 16
gelb = 20
gruen = 21
GPIO.setup(rot, GPIO.OUT)
GPIO.setup(gelb, GPIO.OUT)
GPIO.setup(gruen, GPIO.OUT)
while True:
	GPIO.output(rot, GPIO.HIGH) #rot an
	sleep(2) #2 sek warten
	GPIO.output(gelb, GPIO.HIGH) #gelb an
	sleep(1.5) #1,5 sek warten
	GPIO.output(gruen, GPIO.HIGH) #gruen an
	GPIO.output(rot, GPIO.LOW) #rot aus
	GPIO.output(gelb, GPIO.LOW) #gelb aus
	sleep(2) #2 sek warten
	GPIO.output(gruen, GPIO.LOW) #gruen aus
	GPIO.output(gelb, GPIO.HIGH) #gelb an
	sleep(2) #2 sek warten
	GPIO.output(gelb, GPIO.LOW) #gelb aus
```
