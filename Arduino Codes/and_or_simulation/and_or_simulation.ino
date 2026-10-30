const int A = 12; 
const int B = 11;

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop() {
  digitalWrite(B, LOW); 
  delay(1000);                         
  
  digitalWrite(A, LOW);  
  delay(1000);      

  digitalWrite(B, HIGH); 
  delay(1000);                         
  
  digitalWrite(A, LOW);  
  delay(1000);   

  digitalWrite(B, LOW); 
  delay(1000);                         
  
  digitalWrite(A, HIGH);  
  delay(1000);            

  digitalWrite(B, HIGH); 
  delay(1000);                         
  
  digitalWrite(A, HIGH);  
  delay(1000);      
}
