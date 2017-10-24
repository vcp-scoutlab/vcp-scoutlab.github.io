const int rot4 = 13;
const int rot3 = 12;
const int rot2 = 11;
const int rot1 = 10;
const int gruen4 = 5;
const int gruen3 = 4;
const int gruen2 = 3;
const int gruen1 = 2; //all pins used for the red and green lamps

void setup()
{
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
pinMode(3, OUTPUT);
pinMode(2, OUTPUT); //define output for the pins used

randomSeed(analogRead(0)); //generate randomness from the noise on an empty pin

int an = random(10,14); //generate a random start number for player 1
digitalWrite(an, HIGH); //turn on target lamp for player 1
delay(1000); //wait a second
digitalWrite(an, LOW); //turn off target lamp for player 1
delay(1000); //wait a second 

int anan = random(10,14); //generate a random start number for player 2
while(anan==an) //check that both players dont have the same number
{
  anan = random(10,14); //if so asign player 2 a new random number
}

digitalWrite(anan, HIGH); //turn on target lamp for player 2
delay(1000); //wait a second
digitalWrite(anan, LOW); //turn off target lamp for player 2
delay(1000); //wait a second

digitalWrite(an-8, HIGH); //turn on the green lamp for player 1
digitalWrite(anan-8, HIGH); //turn on the green lamp for player 2 
delay(1000000); //time you have to play the game

digitalWrite(an-8, LOW); 
digitalWrite(anan-8, LOW);
delay(1000);
digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH); //turn off the green lamps and turn on all red lamps: stall
}

void loop()
{

}
