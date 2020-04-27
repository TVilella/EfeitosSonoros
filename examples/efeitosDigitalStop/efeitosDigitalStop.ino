#include <EfeitosSonoros.h>
#define pinBuzzer 8
#define pinBot 4

EfeitosSonoros efeito(pinBuzzer);

void setup(){
	efeito.setDigitalStop(pinBot);
}

void loop() {
	efeito.papararapa();
	delay(2000);
	efeito.vitoria();
	delay(2000);
	efeito.marchafunebre();
	delay(2000);
	efeito.sirene();
	delay(2000);
}