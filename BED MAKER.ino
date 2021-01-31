#include <LiquidCrystal.h>
#include <Stepper.h>

main() {
  LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
  const int stepsPerRevolution = 200;
  int stepCount = 0;
}


void setup() {
  pinmode(LED_BULITIN, OUTPUT);
  lcd.begin(16, 2);
  lcd.print("Please Wait, Initialising Motors");
  lcd.setCursor(0,1);
  lcd.print("Please allow up to 30 Seconds :D");
  delay(1000);
}

void loop(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100); 

   int motorSpeed = map(sensorReading, 0, 1023, 0, 100);
  if (motorSpeed > 0) {
    myStepper.setSpeed(motorSpeed);
    myStepper.step(stepsPerRevolution / 100);
  }

  for(int PositionCount=0;PositionCount<20; PositionCount++)
  {
      digitalWrite(LED_BUILTIN, HIGH);
  delay(450);
  digitalWrite(LED_BUILTIN, LOW); 
  delay(450); 
  
    lcd.scrollDisplayLeft();
    delay(450);
  }
}