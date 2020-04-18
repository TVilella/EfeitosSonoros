#include <EfeitosSonoros.h>
#define pinBuzzer 8

EfeitosSonoros efeito(pinBuzzer);

void setup(){
	efeito.papararapa();
	delay(2000);
	efeito.vitoria();
	delay(2000);
	efeito.marchafunebre();
}

void loop() {
	
}