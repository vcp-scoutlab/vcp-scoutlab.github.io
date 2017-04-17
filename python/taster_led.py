import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)
from time import sleep

TasterPin = 18
LED_Pin = 21
GPIO.setup(TasterPin, GPIO.IN, pull_up_down=GPIO.PUD_UP)
GPIO.setup(LED_Pin, GPIO.OUT)

while True:
    if GPIO.input(TasterPin) == False:
        GPIO.output(LED_Pin, GPIO.HIGH)
    else:
        GPIO.output(LED_Pin, GPIO.LOW)

sleep(0.2)
