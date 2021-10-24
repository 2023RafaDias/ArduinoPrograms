#define PinButton 8 
#define ledPin 7

void setup() {
  pinMode(PinButton, INPUT); 
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600); 
  delay(100);
}

void loop() 
{
  if ( digitalRead(PinButton) == HIGH) // se chave = nivel alto 
  {
    digitalWrite(ledPin, HIGH); 
    Serial.print("Acendendo Led");
  }
  else 
  {
    digitalWrite(ledPin, LOW); 
    Serial.print("Desligando led");
  } 
  delay(100);
} 
