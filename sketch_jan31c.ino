#include <LiquidCrystal.h>//Library for LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);//LCD pins at which it is attached to the Arudino

void setup()//method used to run the code for once 
{
  pinMode(LED_BUILTIN, OUTPUT);
  lcd.begin(16, 2);//LCD order
  lcd.print("Please Wait, Initialising Motors");//prints on LCD
  lcd.setCursor(0,1);//Setting the cursor on LCD
  lcd.print("Maximum 30 Seconds Required :D");//prints on LCD
  delay(1000);//delay of 1 second
}

void loop() //used to run the code repeatedly
{ 
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(100); 
  for(int PositionCount=0;PositionCount<20; PositionCount++)//loop for scrolling the LCD text
  {
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(450);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(450); 
  
    lcd.scrollDisplayLeft();//builtin command to scroll left the text
    delay(450);// delay of 150 msec
  }}
