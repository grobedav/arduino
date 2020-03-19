/*This program for ARDUINO UNO communicate with FM Receiver
modul through serial communication.
Open Serial monitor and type these commands:
Examples
AT+FRE=1011  -> set radio to FM 101.1 MHz
AT+VOL=30 -> set volume to 30
AT+RET -> recapitulation
*/
String code;
#include <SoftwareSerial.h>
SoftwareSerial gtSerial(8, 7);
void setup() {
Serial.begin(38400); // put your setup code here, to run once:
gtSerial.begin(38400);
Serial.flush();
gtSerial.flush();
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()){
    my_name = Serial.readStringUntil('\n');
    gtSerial.println(code);
}
if(gtSerial.available()){
  my_name = gtSerial.readStringUntil('\n');
  Serial.println(code);
}
delay(1000);
}
