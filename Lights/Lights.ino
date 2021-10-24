// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(2, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
}

// the loop function runs over and over again forever
void loop() {

  Serial.println(digitalRead(2));
//  if (digitalRead(3) == 1) {
 //   digitalWrite(6, HIGH);
//  }

 // digitalWrite(6, LOW);

  delay(1000);
                       // wait for a second
}
