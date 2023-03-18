// Testando o LED da placa arduino

void setup() {
  // Setando o LED como output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// Acende e apaga LED
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1000);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(1000);                      
}
