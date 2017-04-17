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
