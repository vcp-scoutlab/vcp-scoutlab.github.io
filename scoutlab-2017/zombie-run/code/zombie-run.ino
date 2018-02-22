/***********************************************************************
Project ZombieRun
Erstellt zum ScoutLab 2017
Von: Julian( VCP Seattle),Kathrin (Hochschule München), Elisabeth
(Hochschule München)
Michael (Hochschule München), Döner (VCP Heinrich Zille)
Datum: 2017-10-22
*/
//Hier werden die Zurodung der Tasten festgelegt
const int gruen = 10;
//Grüne LED
const int rot = 11;
//Rote LED
const int TasterPin = A2;
//Taster zum Abschlagen Oder Kontakt
//( hier mit Kupferstreifen und Schwamm gebastelt)
const int Lichtsensor = A3;
//Lichtsensor für das Erlösen des Zombie
//Konfiguration
const long interval = 200;
const long Lichtelevel = 400;
// Mensch wird
// Variabel fuer den Spielablauf
int lebensstatus = 0;
int ledState = LOW;
unsigned long previousMillis = 0;
//Intervall)
int sensorValue = 0;
//Legt das Blinkintervall fest
//Ab welchem Lichtwert der Zombie zum
//Mensch oder Zombie
//Fuer den Blinkablauf (Status der LED)
//Fuer den Blinkablauf (Für den
//Liest den Wert des Lichtsensors ein
//Routine fuer die Vorbereitung
void setup() {
//Legt die Eingaenge fest
pinMode(gruen, OUTPUT);
pinMode(rot, OUTPUT);
pinMode(TasterPin, INPUT_PULLUP);
// Startet die Serielle Ausgabe an den Rechner fuer die Fehlersuche
Serial.begin(9600);
}
//Haupt Routine die sich staendig wiederholt
void loop() {
// Einlesen des Lichtsensors und Ausgabe des Wertes an den Rechner
sensorValue = analogRead(Lichtsensor);
Serial.print("sensor = ");
Serial.println(sensorValue);
//Abfrage des aktuellen Zeitpunktes der Laufzeit des Programmes
unsigned long currentMillis = millis();
//Dieser Abschnitt fragt ab ob diese Person geheilt wird, also angeleuchtet
//wird.
// also vom Zombie zum Menschif (sensorValue > Lichtelevel )
lebensstatus = 0;
//Hier wird der Mensch zum Zombie wenn der Taster oder Kontakt betaetigt
//wurde
if (digitalRead(TasterPin) == LOW) {
if (lebensstatus == 0)
{
lebensstatus = 1;
}
}
//BlinkRoutine für den Menschen
if ( lebensstatus == 0) {
digitalWrite(rot, HIGH);
//Zombie LED wird ausgeschalten
//Routine fuer das Blinken
if (currentMillis - previousMillis >= interval) {
previousMillis = currentMillis;
if (ledState == LOW) {
ledState = HIGH;
} else {
ledState = LOW;
}
digitalWrite(gruen, ledState);
}
}
//BlinkRoutine für den Zobmbie
if ( lebensstatus == 1) {
digitalWrite(gruen, HIGH); //Mensch LED wird ausgeschalten
//Routine fuer das Blinken
if (currentMillis - previousMillis >= interval) {
previousMillis = currentMillis;
if (ledState == LOW) {
ledState = HIGH;
} else {
ledState = LOW;
}
digitalWrite(rot, ledState);
}
}
}
