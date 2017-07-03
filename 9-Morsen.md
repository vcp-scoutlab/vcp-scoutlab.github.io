---
layout: page
title: Morsen
permalink: /morsen
---
# Morsen
# Morsegerät bauen
## Material
* 1x Steckbrett
* 1x Buzzer
* 1x Taster
* 4x Kabel

![](images/material_morsen.png)
<div style="page-break-after: always;"></div>
## Aufbau
Wir erweitern die Schaltung aus dem Schritt "Taster auslesen" um einen Buzzer. Bitte beachte, dass du den Buzzer richtig anschließt. Stecke den Pin mit "-" in die obere Leiste auf deinem Breadboard. In der Zeichnung ist dieser Pin schwarz markiert.

![](images/button_buzzer_Steckplatine_gpio.png)


>**Scratch**: `morsen.sb` in deinem Projekt-Ordner für Scratch.
>
>**Python**: `morsen.py` in deinem Projekt-Ordner für Python.
<div style="page-break-after: always;"></div>
## Scratch-Programm

![](images/morsen.png)

Mit **config18in** wird der GPIO-Pin für den Taster als Eingang, mit **config21out** der GPIO-Pin 21für den Buzzer als Ausgang definiert. Eine Schleife prüft, ob der Taster (**Wert von Sensor gpio18=0**) gedrückt wird. Wenn die Bedingung erfüllt ist, wird der Programmblock beep aufgerufen. Sonst schaltet wird der Buzzer aus geschaltet.

<div class="alert alert-info" role="alert" style="margin-top:1.2em">
Eine Buzzer (Piezo-Lautsprecher) kann technisch nur einen kurzen Ton abgeben und ist für das Morsen ungeeignet. Um das auszugleichen hab wir einen eigene Funktion, oder Programmblock "beep" erstellt. Der Programmblock schaltet in einer Endlosschleife den Buzzer für eine 1/100 Sekunde ein, schaltet den Buzzer wieder für 1/100 Sekunde wieder an.
Für das menschliche Ohr hört sich das nach einem Dauerton an. Damit ist das Summen jetzt so lange, wie der Taster gedrückt wird. Damit können beliebige Morse-Codes gesendet werden.</div>
<div style="page-break-after: always;"></div>

## Python-Programm

```python
import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)
from time import sleep
TasterPin = 18
BuzzerPin = 21
GPIO.setup(BuzzerPin, GPIO.OUT)
GPIO.output(BuzzerPin, GPIO.LOW)
GPIO.setup(TasterPin, GPIO.IN, pull_up_down=GPIO.PUD_UP)
def beep():
        GPIO.output(BuzzerPin,GPIO.HIGH)
        sleep(0.01)
        GPIO.output(BuzzerPin,GPIO.LOW)
        sleep(0.01)
while True:
    if GPIO.input(TasterPin) == False:
        beep()
    else:
        GPIO.output(BuzzerPin,GPIO.LOW)
sleep(0.2)
```


Buchstabe | Morse-Code
----------|-----------
A         | **· −**
B         | **− · · ·**
C         | **− · − ·**
D         | **− · ·**
E         | **·**
F         | **· · − ·**
G         | **− − ·**
H         | **· · · ·**
I         | **· ·**
J         | **· − − −**
K         | **− · −**
L         | **· − · ·**
M         | **− −**
N         | **− ·**
O         | **− − −**
P         | **· − − ·**
Q         | **− − · −**
R         | **· − ·**
S         | **· · ·**
T         | **−**
U         | **· · −**
V         | **· · · −**
W         | **· − −**
X         | **− · · −**
Y         | **− · − −**
Z         | **− − · ·**
{: class="table table-striped table-hover"}


Zahl   | Morse-Code
-------|-----------
1      | **· − − − −**
2      | **· · − − −**
3      | **· · · − −**
4      | **· · · · −**
5      | **· · · · ·**
6      | **− · · · ·**
7      | **− − · · ·**
8      | **− − − · ·**
9      | **− − − − ·**
0      | **− − − − −**
{: class="table table-striped table-hover"}
