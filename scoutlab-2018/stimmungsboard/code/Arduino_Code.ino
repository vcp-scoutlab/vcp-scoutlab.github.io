#include<Wire.h>
#include<LiquidCrystal_I2C.h>

// HDI
const int LED = 13;         // LED
const int BT_I = 3;         // positiv
const int BT_II = 4;        // mittel
const int BT_III = 5;       // negativ
const int BT_IV = 6;        // Auslesen
const int LED_ON = 500;     // Delay nach auslösen der LED

// Statistik
long int pos = 0;      // positiv
long int meg = 0;      // mittel
long int neg = 0;      // negativ
double ins = 0;        // insgesammt
double val = 0;        // durschchintt

// Boolsche Variablen für Doppelt Click
bool BT_IV_Pressed = false;
bool BT_IV_double = false;

LiquidCrystal_I2C lcd(0x27,16,2);

// Funcktions

void Fled_output(double outp) {     // Gibt den Durchschnitt [outp] auf dem LCD Screen aus
  lcd.setCursor(4,0);
  lcd.print("Feedback");
  lcd.setCursor(0,1);
  lcd.print("AVR: " + String(outp));
}

void Fclean() {                     // Cleaner: Löscht Statistikvariablen und leert den LCD Screen
  // Reset Statistik
  pos = 0;
  meg = 0;
  neg = 0;
  ins = 0;
  val = 0;

  // Reset LCD Screen
  lcd.clear();

  // Reset Double Click Variables
  BT_IV_double = false;
  BT_IV_Pressed = false;
}

void Fapi() {                       //output für anderer Anwendungen
  Serial.println(String(pos)+"|"+String(meg)+"|"+String(neg)+"|"+String(val));
}

void Fled() {                       // LED nutzen
  digitalWrite(LED, HIGH);
  delay(LED_ON);
  digitalWrite(LED, LOW);
  }

// Eigentlcihes Programm

void setup() {
  // Pins declarieren
  pinMode(LED, OUTPUT);

  pinMode(BT_I, INPUT_PULLUP);
  pinMode(BT_II, INPUT_PULLUP);
  pinMode(BT_III, INPUT_PULLUP);
  pinMode(BT_IV, INPUT_PULLUP);

  // Init LCD Display
  lcd.init();
  lcd.backlight();
  Fclean();

  // API output
  Serial.begin(9600);
}
void loop() {
  // Decklare
  // Bouttons Readed
  bool P_BT_I = false;
  bool P_BT_II = false;
  bool P_BT_III = false;
  bool P_BT_IV = false;

  // Einlesen der Buttons
  if (digitalRead(BT_I) == LOW) {
    P_BT_I = true;
    BT_IV_Pressed = false;
  }
  if (digitalRead(BT_II) == LOW) {
    P_BT_II = true;
    BT_IV_Pressed = false;
  }
  if (digitalRead(BT_III) == LOW) {
    P_BT_III = true;
    BT_IV_Pressed = false;
  }
  if (digitalRead(BT_IV) == LOW) {
    P_BT_IV = true;
    if (BT_IV_Pressed) {
      BT_IV_double = true;
    }
    BT_IV_Pressed = true;
  }

  // Einbeziehen der gedrückten Buttons
  if (P_BT_I) {
    pos += 1;
  }
  if (P_BT_II) {
    meg += 1;
  }
  if (P_BT_III) {
    neg += 1;
  }

  if (P_BT_IV) {            // Statistische Ausgabe
    if (BT_IV_double) {     // Doppelcklick löscht
      Fclean();
    }
    else {
      ins = pos + meg +neg;
      val = (pos * 3 + meg * 2 + neg) / ins;
      Fapi();
      Fled_output(val);
    }
    delay (100);
  }

  // Fedback for Users
  if (P_BT_I || P_BT_II || P_BT_III || P_BT_IV) {
    Fled();
  }

  // Reset bool var
  P_BT_I = false;
  P_BT_II = false;
  P_BT_III = false;
  P_BT_IV = false;
}
