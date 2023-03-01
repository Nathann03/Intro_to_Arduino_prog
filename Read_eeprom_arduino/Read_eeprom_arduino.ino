#include <EEPROM.h>
void setup() {
  Serial.begin(9600);
  int test2[5];

  Serial.println("Reading data from EEPROM...");
  for(int i = 0; i < 5; i++) {
    test2[i] = EEPROM.read(i);
    Serial.println(test2[i]);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
