/*
 Bluetooh 2 bit decimal to binary program with arduino
 
 The circuit:
 * RX is digital pin 10 (connect to TX of other device)
 * TX is digital pin 11 (connect to RX of other device)
 */
#include <SoftwareSerial.h>
#define LED1 6
#define LED2 7
int value;

SoftwareSerial hc_05(10, 11); // RX, TX

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  
  Serial.begin(9600);
  hc_05.begin(9600);
}
void led_write_binary(){
  
}
void loop() {
  if (hc_05.available()) {
    
    value = hc_05.read();
    switch(value){
      case '1':
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, HIGH);
        break;
      case '2':
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2, LOW);
        break;
      case '3':
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2, HIGH);
        break;
      default:
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        break;
    }
    
  }

}


