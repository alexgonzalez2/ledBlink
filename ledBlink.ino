int ledPin = 13;
int ledPin2 = 14;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  blinkLed();
}


void blinkLed() {

  digitalWrite(ledpin, HIGH);
  digitalWrite(ledpin2, HIGH);
  delay(500);

  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW);
  delay(500);
}