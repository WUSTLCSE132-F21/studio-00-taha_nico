
const int doPin = 13;
void setup() {
  Serial.begin(9600);
  pinMode(doPin, OUTPUT);
  delay(500);
}

void loop() {
  delay(500);
  int time = millis();
  Serial.print(time);
  Serial.println(" sec have elapsed");
  digitalWrite(doPin, HIGH);
  delay(500);
  digitalWrite(doPin,LOW);
}
