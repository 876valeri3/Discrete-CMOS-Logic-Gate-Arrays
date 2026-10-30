const int A = 11; 

void setup() {
  pinMode(A, OUTPUT);
}

void loop() {
  digitalWrite(A, HIGH); 
  delay(1000);                         
  
  digitalWrite(A, LOW);  
  delay(1000);                         
}
