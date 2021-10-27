#include <LiquidCrystal.h> 

LiquidCrystal lcd(12, 13, 2, 3, 4, 11); 

int contador = 0;

void setup() {
lcd.begin(16, 2); 
delay(500);
}

void loop() {
lcd.clear(); 
lcd.setCursor(0, 0);
lcd.print("Exemplo LCD !"); 
lcd.setCursor(1, 1); 
lcd.print(contador); 
contador++;

if (contador == 60) {
 contador = 0; 
}
delay(1000);
}
