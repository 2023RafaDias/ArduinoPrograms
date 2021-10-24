#define PinButton 8 
#define ledPin 7
int count = 0;

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
    count = count%2;
    Serial.println(count);
    if (count = 0){
       digitalWrite(ledPin, HIGH); 
       Serial.println("Acendendo Led");
       count ++;
    }
    else {
      digitalWrite(ledPin, LOW); 
      Serial.println("Desligando Led");
      count++;
    }
  
  }
  delay(1000);
  
} 
