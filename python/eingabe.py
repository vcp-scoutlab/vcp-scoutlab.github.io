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

print("Welche LED soll blinken? (Wähle 1-3)")
print("1: Rot")
print("2: Gelb")
print("3: Grün")

# Gibt die Eingabe aus und wartet bis der Benutzer was eingegegben hat
led_wahl = input("Deine Wahl: ")
anzahl = input("Wie oft soll die LED blinken?: ")

# wandlet die Benutzer-Eingabe von einem string (text) in einen integer um
led_wahl = int(led_wahl)
anzahl = int(anzahl)

if led_wahl == 1:
    print("Du hast die rote LED gewählt")
    LED_Pin = rot
if led_wahl == 2:
    print("Du hast die gelbe LED gewählt")
    LED_Pin = gelb
if led_wahl == 3:
    print("Du hast die grüne LED gewählt")
    LED_Pin = gruen

# wenn alles korrekt ist, blinkt die LED
if LED_Pin > 0:
    while anzahl > 0:
        GPIO.output(LED_Pin, GPIO.HIGH)
        sleep(1)
        GPIO.output(LED_Pin, GPIO.LOW)
        sleep(1)
        anzahl = anzahl - 1
#alle Pins zurücksetzen
GPIO.cleanup()
