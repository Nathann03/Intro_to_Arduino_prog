void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int section = 3;
  if (section == 1) { //Basics
    int x = 5;
    float y = 2.56;
    float sum = x+y;
    Serial.println(sum); //Prints a new line with sum result for each call
    delay(1000); // delay(ms) -> 1000ms = 1 sec
  }
  else if(section == 2) { // If & Loops
    int i;
    for (i = 0; i <= 20; i++){
      if (i == 15) {
        break;
      }
      Serial.print("currently on iteration:");
      Serial.println(i);
    }
    Serial.println("Finished woo!");
  }
  else { //Arrays & Strings
    String str_arr[4] = {"Hello", "World", "And", "Students"};
    for(int counter = 0; counter < (sizeof(str_arr)/sizeof(String)); counter++) {
      Serial.println(str_arr[counter]);
    }
    String done = "Done!Finished!";
    Serial.println(done.substring(0,4));
  };
}

void loop() {

};
