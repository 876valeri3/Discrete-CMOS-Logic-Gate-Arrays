const int A = 12;
const int B = 11;

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
}

void loop() {
  // Creates the 0, 0 
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  delay(1000);

  // Creates the 0, 1 input 
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  delay(1000);

  // Creates the 1, 0 input 
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  delay(1000);

  // Creates the 1, 1 input 
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  delay(1000);
}