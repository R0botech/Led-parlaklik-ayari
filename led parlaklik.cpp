const int ledPin = 10 ;    
const int pot = 0 ;     

void setup(){
     Serial.begin(9600);
     pinMode(ledPin,OUTPUT) ;        //setting pin 2 as output
}

void loop(){
  
     int pot  = analogRead(0) ;  
     pot = map(pot, 0, 1023, 0, 255); 
     int dutyCycle = map(pot,0, 255, 0, 100);
     analogWrite(ledPin,pot) ;
     Serial.print(dutyCycle);
     Serial.println(" %");
     delay(2000);
}
