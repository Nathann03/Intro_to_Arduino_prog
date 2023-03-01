#include <EEPROM.h>
void setup() {
  Serial.begin(9600);
  Serial.println("Storing data in EEPROM...");
  int test[] = {10, 20, 30, 40, 50};
  for(int i = 0; i < 5; i++) {
    EEPROM.write(i, test[i]);
  }
  Serial.println("Data written to EEPROM");

}

void loop() {
  // put your main code here, to run repeatedly:

}
