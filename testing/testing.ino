void setup() {
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  pinMode(5, INPUT);
  Serial.begin(9600);
  delay(100);
  // put your setup code here, to run once:

}

void loop() {
  Serial.println(digitalRead(7));
  Serial.println(digitalRead(6));
  Serial.println(digitalRead(5));
  delay(100);
}
