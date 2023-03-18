// Certifique-se de mudar o valor pino onde o LED e PUSHBUTTON estão conectados.

#define LED_1 6     // LED conectado ao pino 6 da placa arduino
#define BUTTON_1 3  // PUSHBUTTON conectado ao pino 3 da placa arduino  


void setup(){
  pinMode(LED_1, OUTPUT);           //Setando o LED como saida
  pinMode(BUTTON_1, INPUT_PULLUP);  //Setando o PUSHBUTTON como entrada
}


//    Função liga e desliga o LED caso o PUSHBUTTON seja pressionado.
void buttonOn(uint8_t button){
    if (digitalRead(button)== LOW){
      digitalWrite(LED_1, HIGH);
      delay(100);
      digitalWrite(LED_1, LOW);
    }
}

void loop() {
  buttonOn(BUTTON_1);
}
