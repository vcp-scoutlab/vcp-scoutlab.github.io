#include <IRremote.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "data.h"
#include <EEPROM.h>
//an beate.brandl@web.de
#define NO_TITLES 288  //<- anzahl gespeicherte Titel hier angeben

int del;
uint32_t timer;
LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display

struct song {
  char name[41];
  int page;
  int lenght_name;
} title;
int i;
String inputString = "";
int position;
byte ss[8] = {
  B01100,
  B10010,
  B10010,
  B10100,
  B10010,
  B10010,
  B11100,
  B10000,
};
#include <IRremote.h>
int RECV_PIN = 11;
IRrecv rec(RECV_PIN);

decode_results results;

#define CH1 0xFFA25D

#define CH 0xFF629D

#define CH2 0xFFE21D

#define PREV 0xFF22DD

#define NEXT 0xFF02FD

#define PLAYPAUSE 0xFFC23D

#define VOL1 0xFFE01F

#define VOL2 0xFFA857

#define EQ 0xFF906F

#define BUTON0 0xFF6897

#define BUTON100 0xFF9867

#define BUTON200 0xFFB04F

#define BUTON1 0xFF30CF

#define BUTON2 0xFF18E7

#define BUTON3 0xFF7A85

#define BUTON4 0xFF10EF

#define BUTON5 0xFF38C7

#define BUTON6 0xFF5AA5

#define BUTON7 0xFF42BD

#define BUTON8 0xFF4AB5

#define BUTON9 0xFF52AD


void setup()
{

  rec.enableIRIn();

  lcd.init();                      // initialize the lcd
  lcd.createChar(2, ss);
  lcd.backlight();
  Serial.begin(9600);
  randomSeed(analogRead(7) + EEPROM.read(1) + 1);

  print_song(random(1, NO_TITLES));
  EEPROM.write(1, (byte)random(1, 255));
  pinMode(7, INPUT_PULLUP);
  pinMode(8, OUTPUT);
  
}

void loop()
{
  if (rec.decode(&results))
  {
    Serial.println(results.value, 16);
    if (results.value == CH1)

    {

      Serial.println("CH-");
    }

    if (results.value == CH)

    {

      Serial.println("CH");
      print_song(random(1, NO_TITLES));
      print_title();
      del = 20;
      delay(del);
    }

    if (results.value == CH2)

    {

      Serial.println("CH+");

    }

    if (results.value == PREV)

    {

      Serial.println("PREV");

    }

    if (results.value == NEXT)

    {

      Serial.println("NEXT");

    }

    if (results.value == PLAYPAUSE)

    {

      Serial.println("PLAY/PAUSE");

    }

    if (results.value == VOL1)

    {

      Serial.println("VOL-");

    }

    if (results.value == VOL2)

    {
      Serial.println("VOL+");

    }

    if (results.value == EQ)

    {

      Serial.println("EQ");

    }

    if (results.value == BUTON0)

    {

      Serial.println("BUTON0");

    }

    if (results.value == BUTON100)

    {

      Serial.println("BUTON100+");

    }

    if (results.value == BUTON200)

    {

      Serial.println("BUTON200+");

    }

    if (results.value == BUTON1)

    {

      Serial.println("BUTON1");

    }

    if (results.value == BUTON2)
    {

      Serial.println("BUTON2");

    }

    if (results.value == BUTON3)
    {

      Serial.println("BUTON3");

    }

    if (results.value == BUTON4)

    {

      Serial.println("BUTON4");

    }

    if (results.value == BUTON5)

    {

      Serial.println("BUTON5");

    }

    if (results.value == BUTON6)

    {

      Serial.println("BUTON6");

    }

    if (results.value == BUTON7)

    {

      Serial.println("BUTON7");

    }

    if (results.value == BUTON8)

    {

      Serial.println("BUTON8");

    }
    if (results.value == BUTON9)

    {

      Serial.println("BUTON9");

    }
  }
  rec.resume();
  while (!digitalRead(7))
  {
    print_song(random(1, NO_TITLES));
    print_title();
    del = 20;
    delay(del);
    digitalWrite(8, !digitalRead(8));
  }
  while (del < 200)
  {

    print_song(random(1, NO_TITLES));
    print_title();
    delay(del);
    del += 20;
    digitalWrite(8, !digitalRead(8));
  }
  digitalWrite(8, HIGH);
  if (timer + del < millis())
  {
    print_title();
    timer = millis();
    lcd.noCursor();
    serialEvent();
  }
}
void serialEvent()
{
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    inputString += inChar;
    // if the incoming character is a newline, set a flag
    // so the main loop can do something about it:
    if (inChar == '\n') {
      print_song(random(1, NO_TITLES));
      print_title();
      del = 20;
      digitalWrite(8, !digitalRead(8));
    }
  }
}
void print_song(int number)
{

  int16_t sep_count = 0;
  int16_t array_ptr = 0;
  int8_t write_ptr = 0;
  char page_buffer[5];
  while (number  > sep_count)  //Lieder vor dem gesuchten überspringen
  {
    if (pgm_read_byte_near(music_data + array_ptr) == '|')
    {
      sep_count++;
    }
    array_ptr++;
  }
  for (int i = 0; i < 41; i++)
  {
    title.name[write_ptr] = 0;
  }
    lcd.home();
  while (pgm_read_byte_near(music_data + array_ptr) != ';') //Liedtitel kopieren
  {
    title.name[write_ptr] = pgm_read_byte_near(music_data + array_ptr);
  
     
    if (pgm_read_byte_near(music_data + array_ptr) == 195)
    {
      array_ptr++;
      switch (pgm_read_byte_near(music_data + array_ptr))
      {
        case 156:
        case  188:
          title.name[write_ptr] = (char(245));
          break;
        case 150:
        case  182:
          title.name[write_ptr] = (char(239));
          break;
        case 132:
        case  164:
          title.name[write_ptr] = 225;
          break;
        case 159://ß
          title.name[write_ptr] = (char(2));
          break;

        default:
          break;
      }
    }
    title.name[write_ptr + 1] = 0;
    array_ptr++;
    write_ptr++;
  }
  title.lenght_name = write_ptr + 1;
  write_ptr = 0;

  array_ptr++;
  while (pgm_read_byte_near(music_data + array_ptr) != '|') //Seitenzahl kopieren
  {
    page_buffer[write_ptr] = pgm_read_byte_near(music_data + array_ptr);
    page_buffer[write_ptr + 1] = 0;
    array_ptr++;
    write_ptr++;
  }
  title.page = atoi(page_buffer);
  lcd.home();
  //lcd.print(F("             "));
  lcd.setCursor(0, 1);
  lcd.print(F("Seite: "));
  lcd.print(title.page);
  lcd.print(F("            "));
  position = 0;
}

void print_title()
{
  lcd.home();
  if (title.lenght_name > 16)
  {
    if (position < 8)
    {
     
     lcd.print(title.name);
    }
    else
    {
     lcd.print(title.name + position - 8);
    }
    lcd.print(F("  "));
    if (position == title.lenght_name + 8)
    {
      position = 0;
    }

    position++;
  }
  else
  {
    lcd.print(title.name);
   lcd.print(F("             "));
  }
}


