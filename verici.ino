#include <nRF24L01.h>
#include <RF24.h>
#include <RF24_config.h>

#include <RF24.h>
#include <SPI.h>
#define CSN 7
#define SE 8

RF24 verici(CSN,CE);





void setup() {
 Serial.begin(9600);
 SPI.begin();
 SPI.setBitOrder(MSBFIRST);
 verici.Channel(90);
 verici.Txaddress("elektronik");
 verici.init();
 
}

void loop() {
  verici.TxPL("ad soyad"),

  boolean durum = verici.send(SLOW);
  if durum(durum= true ){
    Serial.println("basarılı");
    
  }
  else{
    serial.println("hotel");
  }

}
