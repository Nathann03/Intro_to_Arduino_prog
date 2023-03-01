void setup() {
  Serial.begin(9600);
  int fact, value;

  fact = factorial(5);
  Serial.print("The factorial of 5 is ");
  Serial.println(fact);

  fact = factorial(7);
  Serial.print("The factorial of 7 is ");
  Serial.println(fact);
}

void loop() {
}

int factorial(int x) {
  int result;
  if (x == 1) {
    return 1;
  } else {
    result = x * factorial(x - 1);
    return result;
  }
}
