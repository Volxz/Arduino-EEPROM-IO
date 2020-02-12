// READS ARDUINO SERIAL FROM EEPROM
//
// reads the Serial of the Arduino from the
// first 6 bytes of the EEPROM

#include <EEPROM.h>
char sID[7]; // Ajust to be one greater than the serials length


void setup()
{
 Serial.begin(9600);
 for (int i=0; i<6; i++) { // Ajust I<6 to be equal to the length of the serial
   sID[i] = EEPROM.read(i);
 }
}

void loop() {
 Serial.println(sID);
}
