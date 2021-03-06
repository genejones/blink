/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

 */

void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(13, OUTPUT); 
  Serial.begin(9600);
  Serial.print("Hello world. Time to Blink");    
}

void loop() {
  digitalWrite(13, HIGH);   // set the LED on
  delay(500);              // wait for a second
  digitalWrite(13, LOW);    // set the LED off
  Serial.print("Off");
  delay(500);              // wait for a second
  Serial.print("On");
}
