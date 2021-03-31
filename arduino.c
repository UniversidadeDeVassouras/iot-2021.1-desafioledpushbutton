#define LED 12
#define BOTAO 11

int aceso = 0;

bool isLedApagado(){
    return !aceso;
}

bool isBotaoPressionado(){
    return digitalRead(BOTAO) == HIGH;
}

void acenderLed(){
    digitalWrite(LED, HIGH);
    aceso = 1;
}

void apagarLed(){
    digitalWrite(LED, LOW);
    aceso = 0;
}

void aguardarDedo(){
    delay(1000);
}

void setup(){
    pinMode(LED, OUTPUT);
    pinMode(BOTAO, INPUT);
}

void loop(){
    if(isBotaoPressionado()) {
        if(isLedApagado()) {
            acenderLed();
        } else {
            apagarLed();
        }
        aguardarDedo();
    }
}

