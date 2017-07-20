Link projeto github: https://github.com/mathoian/Semaforo_arduino/
Link projeto simulador https://circuits.io/circuits/3418203-semaforo-com-botao

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led_vermelho= 13; //define LED vermelho
int led_amarelo = 12; //define LED amarelo
int led_verde = 11; //define LED verde
int botao = 10; 
int estado_botao = 0; // botao ligado ou desligado (HIGH / LOW) 


// the setup routine runs once when you press reset:
void setup() {
    // initialize the digital pin as an output.
    pinMode(led_vermelho, OUTPUT);
    pinMode(led_amarelo, OUTPUT);
    pinMode(led_verde, OUTPUT);
    pinMode(botao, INPUT); // define o botao como entrada de dados
}

// the loop routine runs over and over again forever:
void loop(){
    
    
    while(digitalRead(botao)){
        if(estado_botao = HIGH){
            digitalWrite(led_amarelo, HIGH);   // turn the LED on (HIGH is the voltage level)
            delay(2000);
            digitalWrite(led_amarelo, LOW);

            digitalWrite(led_vermelho, HIGH);   // turn the LED on (HIGH is the voltage level)
            delay(2000);               // wait for a second
            digitalWrite(led_vermelho, LOW);
            
            // digitalWrite(led_vermelho, HIGH);   // turn the LED on (HIGH is the voltage level)
            // delay(250);
            // digitalWrite(led_vermelho, LOW);   // turn the LED on (HIGH is the voltage level)
            // delay(250);
            // digitalWrite(led_vermelho, HIGH);   // turn the LED on (HIGH is the voltage level)
            // delay(250);
            // digitalWrite(led_vermelho, LOW);   // turn the LED on (HIGH is the voltage level)
            // delay(250);
        }
        digitalWrite(led_verde, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(2000);               // wait for a second        
        digitalWrite(led_verde, LOW);    // turn the LED off by making the voltage LOW

        digitalWrite(led_amarelo, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(2000);
        digitalWrite(led_amarelo, LOW);    // turn the LED off by making the voltage LOW

        digitalWrite(led_vermelho, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(2000);               // tempo de espera        
        digitalWrite(led_vermelho, LOW);    // turn the LED off by making the voltage LOW
                
        digitalWrite(led_verde, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(2000);               // wait for a second
        digitalWrite(led_verde, LOW);    // turn the LED off by making the voltage LOW
    }
}
