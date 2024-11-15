#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
   digitalWrite(LED_BUILTIN, HIGH);   // Turn the LED on
  delay(200);                   // Wait for 1 second (1000 milliseconds)
  digitalWrite(LED_BUILTIN, LOW);    // Turn the LED off
  delay(200);                   // Wait for 1 second (1000 milliseconds)
}