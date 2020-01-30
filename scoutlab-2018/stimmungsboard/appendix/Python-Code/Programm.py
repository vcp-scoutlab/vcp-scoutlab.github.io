from serial import Serial, SerialException
from requests import Session, get
from hashlib import md5

pwd = "1234"

try:
    with Serial("COM7", 9600) as ser:
        while True:
            (plus, mitte, minus, avr) = str(ser.readline(), "utf-8").replace("\n","").replace("\r","").split("|")

            timestamp = ""
            with get("http://127.0.0.1:8080/Stimmungsboard/GetData.php") as req:
                timestamp = req.text.replace("\n","")

            string = ""
            string=string.join(pwd+timestamp+";"+plus+";"+mitte+";"+minus+";"+avr)

            hashed= md5(str.encode(string)).hexdigest()
            path = "http://127.0.0.1:8080/Stimmungsboard/GetData.php?plus="+plus+"&mitte="+mitte+"&minus="+minus+"&avr="+avr+"&hash="+hashed

            with Session() as session:
                print("Starting sending data...")
                session.get(path)

except SerialException:
    print("Ich kann mich nicht mit dem Stimmungsboard verbinden.")