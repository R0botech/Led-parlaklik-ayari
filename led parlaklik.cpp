#define LED = 10 ;    
#define pot = A0 ;     

void setup(){
     Serial.begin(9600);
     pinMode(LED,OUTPUT) ;        
}

void loop(){
  int deger = analogRead(0);
  //deger = map(deger, 0, 1023, 0, 255);
 	deger = deger/4; //(0-1023)/4 = 0-255
  analogWrite(LED, deger);
  
}
