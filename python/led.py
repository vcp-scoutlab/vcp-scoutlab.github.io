import RPi.GPIO as GPIO #Import der notwendigen Bibliotheken
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False) #Warnungen abschalten
from time import sleep

LED_Pin = 21 #LED ist am GPIO-Pin 21 angeschlossen
GPIO.setup(LED_Pin, GPIO.OUT) #Pin21 wird als Ausgabe definiert

while True: #Schleife (Wiederholung)
    GPIO.output(LED_Pin, GPIO.HIGH) #LED ein schalten
    sleep(2) #2 sek warten
    GPIO.output(LED_Pin, GPIO.LOW) #LED aus schalten
    sleep(2) #2 sek warten
    #nun wird die LED nach 2 Sekunden wieder eingeschaltet...
