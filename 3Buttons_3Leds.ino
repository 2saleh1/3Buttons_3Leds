/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground through 220 ohm resistor
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/digital/Button/
*/
const int buttonPin1 = 2;  
const int buttonPin2 = 8;  
const int buttonPin3 = 10;  
const int ledPin1 = 5;    
const int ledPin2 = 9;     
const int ledPin3 = 11;     

void setup() {
  
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);

  
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);
  int buttonState3 = digitalRead(buttonPin3);

 
  if (buttonState1 == HIGH) {
    digitalWrite(ledPin1, HIGH);  
  } else {
    digitalWrite(ledPin1, LOW);   
  }


  if (buttonState2 == HIGH) {
    digitalWrite(ledPin2, HIGH);  
  } else {
    digitalWrite(ledPin2, LOW);   
  }


  if (buttonState3 == HIGH) {
    digitalWrite(ledPin3, HIGH); 
  } else {
    digitalWrite(ledPin3, LOW); 
  }
}