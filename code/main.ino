#include <LiquidCrystal.h>

// LCD Pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

// Relay Pins
const int HIGH_PRIORITY = 2;
const int MEDIUM_PRIORITY = 3;
const int LOW_PRIORITY = 4;

// Voltage Sensor Pin
const int voltageSensor = A0;

// Voltage Threshold
int threshold = 500;

void setup() {

  // Relay Pins Output
  pinMode(HIGH_PRIORITY, OUTPUT);
  pinMode(MEDIUM_PRIORITY, OUTPUT);
  pinMode(LOW_PRIORITY, OUTPUT);

  // LCD Begin
  lcd.begin(16, 2);

  // Initial Display
  lcd.setCursor(0, 0);
  lcd.print("LOAD MGMT SYS");

  lcd.setCursor(0, 1);
  lcd.print("INITIALIZING");

  delay(3000);

  lcd.clear();

  // Initially All Loads ON
  digitalWrite(HIGH_PRIORITY, HIGH);
  digitalWrite(MEDIUM_PRIORITY, HIGH);
  digitalWrite(LOW_PRIORITY, HIGH);
}

void loop() {

  // Read Voltage Sensor
  int sensorValue = analogRead(voltageSensor);

  lcd.clear();

  // NORMAL CONDITION
  if (sensorValue < threshold) {

    digitalWrite(HIGH_PRIORITY, HIGH);
    digitalWrite(MEDIUM_PRIORITY, HIGH);
    digitalWrite(LOW_PRIORITY, HIGH);

    lcd.setCursor(0, 0);
    lcd.print("NORMAL LOAD");

    lcd.setCursor(0, 1);
    lcd.print("ALL LOADS ON");

    delay(2000);
  }

  // OVERLOAD CONDITION
  else {

    // LOW Priority OFF
    digitalWrite(LOW_PRIORITY, LOW);

    lcd.setCursor(0, 0);
    lcd.print("OVERLOAD");

    lcd.setCursor(0, 1);
    lcd.print("LOW LOAD OFF");

    delay(3000);

    // If Still High Load
    sensorValue = analogRead(voltageSensor);

    if (sensorValue > threshold) {

      // MEDIUM Priority OFF
      digitalWrite(MEDIUM_PRIORITY, LOW);

      lcd.clear();

      lcd.setCursor(0, 0);
      lcd.print("HIGH OVERLOAD");

      lcd.setCursor(0, 1);
      lcd.print("MED LOAD OFF");

      delay(3000);
    }

    // High Priority Always ON
    digitalWrite(HIGH_PRIORITY, HIGH);
  }
}
