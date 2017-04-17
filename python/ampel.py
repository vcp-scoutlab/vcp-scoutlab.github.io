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
