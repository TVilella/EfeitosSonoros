#ifndef EfeitosSonoros_h
#define EfeitosSonoros_h

#include "Arduino.h"
#include "notas.h"

#ifndef NUMERO_NOTAS
	#define NUMERO_NOTAS 20
#endif

class EfeitosSonoros {
public:
EfeitosSonoros(byte pino);

void papararapa();
void vitoria();
void marchafunebre();
void sirene(int periodo = 10, int primeira = 100);

private:
void tocaefeito(int numerodenotas);

int melodia[NUMERO_NOTAS];
int tempo[NUMERO_NOTAS];

byte pinBuzzer;
};

#endif