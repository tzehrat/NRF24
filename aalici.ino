#include <SPI.h>
#include <nRF24L01p.h>
 
nRF24L01p alici(7,8);//CSN,CE
String mesaj;

void setup(){
delay(150);
Serial.begin(9600);
SPI.begin();
SPI.setBitOrder(MSBFIRST);
alici.channel(90);
alici.RXaddress("elektronik");
alici.init();
}
 

 
void loop(){
if(alici.available()){
alici.read();
alici.rxPL(mesaj);
Serial.println(mesaj);

}
}
