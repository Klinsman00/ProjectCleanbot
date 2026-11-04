#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);
const int ledPin = 16;
const int 
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  int result = myFunction(2, 3);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  printf("on\n");
  delay(1000);
  digitalWrite(ledPin, LOW);
  printf("off\n");
  delay(1000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}