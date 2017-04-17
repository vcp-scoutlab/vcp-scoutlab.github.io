import RPi.GPIO as GPIO #Import der notwendigen Bibliotheken
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False) #Warnungen abschalten
from time import sleep
from random import uniform #Import der Bibliothek für die Zufallszahlen

LED_Pin = 21 #LED ist am GPIO-Pin 21 angeschlossen
GPIO.setup(LED_Pin, GPIO.OUT) #Pin21 wird als Ausgabe definiert
TasterPin = 18
GPIO.setup(TasterPin, GPIO.IN, pull_up_down=GPIO.PUD_UP)

GPIO.output(LED_Pin, GPIO.HIGH) #LED ein schalten
sleep(uniform(5, 10)) #per Zufallszahl zwischen 5 und 10 sek warten
GPIO.output(LED_Pin, GPIO.LOW) #LED aus schalten
zeit = 0.1
while True: #Schleife (Wiederholung)
    if GPIO.input(TasterPin) == False:
        print("Ergebnis %.2f Sekunden." % (zeit))
        break
    else:
        zeit = zeit + 0.1
        sleep(0.1)
