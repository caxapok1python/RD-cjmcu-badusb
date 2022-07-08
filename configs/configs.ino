#include <Keyboard.h>
#define button1GND <BUTTON1_GND>
#define button1Pin <BUTTON1_IN>
#define button2GND <BUTTON2_GND>
#define button2Pin <BUTTON2_IN>

bool trigger = false;

bool buttonCheck(int pin){
    return !digitalRead(pin);
}

void program1(){
    //<DUCKY_SCRIPT1_THERE>
}

void program2(){
    //<DUCKY_SCRIPT2_THERE>
}

void program3(){
    //<DUCKY_SCRIPT3_THERE>
}

void setup() {
  Keyboard.begin();

  pinMode(button1GND, OUTPUT);
  digitalWrite(button1GND, LOW);
  pinMode(button2GND, OUTPUT);
  digitalWrite(button2GND, LOW);

  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
}

void loop() {
    if(trigger){
       continue
    }
  // fist program
  if (!buttonCheck(button1Pin) && buttonCheck(button2Pin)) {
    program1();
  }
  // second program
  else if (buttonCheck(button1Pin) && !buttonCheck(button2Pin)) {
     program2();
  }
  // third program
  else if (buttonCheck(button1Pin) && buttonCheck(button2Pin)) {
      program3();
  }
  delay(500);
}