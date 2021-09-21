#!/usr/bin/env python

# Import some frameworks
import os
import time
import RPi.GPIO as GPIO
from datetime import datetime

d = datetime.now()
initYear = "%04d" % (d.year) 
initMonth = "%02d" % (d.month) 
initDate = "%02d" % (d.day)
initHour = "%02d" % (d.hour)
initMins = "%02d" % (d.minute)

# Define the location where you wish to save files. Set to HOME as default. 
# If you run a local web server on Apache you could set this to /var/www/ to make them 
# accessible via web browser.
folderToSave = "timelapse_" + str(initYear) + str(initMonth) + str(initDate) + str(initHour) + str(initMins)
os.mkdir(folderToSave)

# Set the initial serial for saved images to 1
fileSerial = 1

# Run a WHILE Loop of infinitely
while True:
    
    d = datetime.now()
    if d.hour > 2:
        
        # Set FileSerialNumber to 000X using four digits
        fileSerialNumber = "%04d" % (fileSerial)
        
        # Capture the CURRENT time (not start time as set above) to insert into each capture image filename
        hour = "%02d" % (d.hour)
        mins = "%02d" % (d.minute)
        
        # Define the size of the image you wish to capture. 
        imgWidth = 800   # Max = 2592 
        imgHeight = 600  # Max = 1944
                
# Capture the image using raspistill. Set to capture with added sharpening, auto white balance and average metering mode
# Change these settings where you see fit and to suit the conditions you are using the camera in
        os.system("raspistill -w " + str(imgWidth) + " -h " + str(imgHeight) + " -o " + str(folderToSave) + "/" + str(fileSerialNumber) + "_" + str(hour) + str(mins) +  ".jpg  -sh 40 -awb auto -mm average -v")

        # Increment the fileSerial
        fileSerial += 1
        
        # Wait 60 seconds (1 minute) before next capture
        time.sleep(60)