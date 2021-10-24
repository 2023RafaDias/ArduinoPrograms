#define PinButton 8 
#define ledPin 7

void setup() {
  pinMode(PinButton, INPUT); 
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600); 
  delay(100);
}

int value1 = digitalRead(PinButton);
int value2 = digitalRead(PinButton);
int difference = 0;
int light = -1;

void loop() 
{
  difference = value2 - value1;
  if (difference >= 1) {
    light++;
  }
  if (light%2 == 0){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
  
  value1 = value2;
  value2 = digitalRead(PinButton);
  
} 
