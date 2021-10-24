void setup() {
  pinMode(8, INPUT);
  pinMode(7, OUTPUT);

}
int count = 0;
void loop() {
  
  if (digitalRead(7)==1){
    count++;
  }

  if (count%2 == 0){
    digitalWrite(8,LOW);
  }
  else{
    digitalWrite(8,HIGH);
  }

}
