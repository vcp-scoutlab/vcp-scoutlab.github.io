const int rot4 = 13;
const int rot3 = 12;
const int rot2 = 11;
const int rot1 = 10;
const int gruen4 = 5;
const int gruen3 = 4;
const int gruen2 = 3;
const int gruen1 = 2; //alle Pins für die roten und grünen LEDs

void setup()
{
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
pinMode(3, OUTPUT);
pinMode(2, OUTPUT); //Definiere eine Ausgabe für jeden Pin

randomSeed(analogRead(0)); //Generiere Zufälligkeit aus dem Rauschen des unbesetzten Pins 0

int an = random(10,14); //Generiere eine zufällige Startnummer für Spieler 1
digitalWrite(an, HIGH); //Schalte die Ziellampe für Spieler 1 an
delay(1000); //Warte eine Sekunde
digitalWrite(an, LOW); //Schalte die Ziellampe für Spieler 1 aus
delay(1000); //Warte eine Sekunde

int anan = random(10,14); //Generiere eine zufällige Startnummer für Spieler 2
while(anan==an) //Prüfe, ob die Startnummern gleich sind
{
  anan = random(10,14); //Falls dem so ist, generiere eine neue Startnummer für Spieler 2
}

digitalWrite(anan, HIGH); //Schalte die Ziellampe für Spieler 2 an
delay(1000); //Warte eine Sekunde
digitalWrite(anan, LOW); //Schalte die Ziellampe für Spieler 2 aus
delay(1000); //Warte eine Sekunde

digitalWrite(an-8, HIGH); //Schalte die grüne Lampe für Spieler 1 an
digitalWrite(anan-8, HIGH); //Schalte die grüne Lampe für Spieler 2 an
delay(1000000); //Zeit, die nun Zeit ist das Spiel zu spielen
//Wenn einer der Spieler mit Hilfe der Teile seine grüne Lampe anschließen kann, 
//leuchten alle grünen Lampen auf und das Spiel kann durch drücken des Reset Buttons erneut gespielt werden

digitalWrite(an-8, LOW); 
digitalWrite(anan-8, LOW);
delay(1000);
digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH); //Schalte die grünen Lampen ab und alle roten Lampen an: Unentschieden, falls niemand
//bis dahin noch nicht gewonnen hat
}

void loop()
{

}
