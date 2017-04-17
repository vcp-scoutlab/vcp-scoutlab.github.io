import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)
from time import sleep
import os #Gives Python access to Linux commands

TasterPin = 18
GPIO.setup(TasterPin, GPIO.IN, pull_up_down=GPIO.PUD_UP)

while True:
    if GPIO.input(TasterPin) == False:
        print('Taster gedrueckt')
        sleep(1)
    else:
        os.system('clear') # Bildschirmausgabe löschen

    sleep(0.2)

