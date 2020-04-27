#ifndef EfeitosSonoros_h
#define EfeitosSonoros_h

#include "Arduino.h"
#include "notas.h"

#define NUMERO_NOTAS 20

class EfeitosSonoros {
	
public:
EfeitosSonoros(byte pino);

void setDigitalStop(byte pino, bool pullup = true);
void setAnalogStop(byte pino, int valor, bool maior = true);

void papararapa();
void vitoria();
void marchafunebre();
void sirene(int periodo = 10, int primeira = 100);


private:
void tocaefeito(int numerodenotas);
bool delayEfeito(unsigned long tempoDelay);

int melodia[NUMERO_NOTAS];
int tempo[NUMERO_NOTAS];

byte pinBuzzer;
byte pinStop = 255;

byte tipoStop = 255;
int valStop = 0;
};

#endif