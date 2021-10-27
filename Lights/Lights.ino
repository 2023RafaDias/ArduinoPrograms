#include <math.h>
#include <stdio.h>

int startingValues[] = {0,0,0,0,0,0};
int differences[] = {0,0,0};
int lights[] = {0,0,0};
int values[] = {1,2,4};
char enter = "Y";

void setup() {
  pinMode(8, INPUT); 
  pinMode(9, INPUT); 
  pinMode(10, INPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT); 
  Serial.begin(9600); 
  delay(100);
}

void loop() 
{
  int total = 0;
  int count = 0;
  for (int i = 0; i <6; i+=2){
    differences[count] = startingValues[1+i]-startingValues[i];
    count++;
  }

  for (int i = 0;i <3; i++){
    if (differences[i] >= 1) {
      lights[i]++;
    }
  
  if (lights[i]%2 != 0){
    digitalWrite(i+8, HIGH);
    total += values[i];
  }
  else{
    digitalWrite(i+8,LOW);
  }  
  
  }

  
 // int digit[] = {0,0,0};
 // int number = Serial.read();

  //for (int i = 1; i<4; i++){
   // digit[-i] = number%2;
   // if (number%2 == 1){
    //  digitalWrite(i+7,HIGH);
    //number = (number-(number%2))/2;
   // }
 // }
    

  

  Serial.println(total);
  int x = 5;
  for (int i = 0;i <6; i+=2){
    startingValues[i] = startingValues[i+1];
    startingValues[i+1] = digitalRead(x);
    x++;
  }
  
  
} 
