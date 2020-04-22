#include <EfeitosSonoros.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "Arduino.h"

EfeitosSonoros::EfeitosSonoros(byte pino){
	pinMode(pino, OUTPUT);
	pinBuzzer = pino;
}

void EfeitosSonoros::papararapa() {
		melodia[0] = C4; melodia[1] = G3; melodia[2] = G3;melodia[3] = A3; melodia[4] = G3;melodia[5] = 0;melodia[6] = B3; melodia[7] = B4;
		tempo[0] = 4; tempo[1] = 8; tempo[2] = 8; tempo[3] = 4; tempo[4] = 4; tempo[5] = 4; tempo[6] = 4; tempo[7] = 4;
		tocaefeito(8);
}



void EfeitosSonoros::vitoria() {
		melodia[0] = E4; melodia[1] = E4; melodia[2] = D4;melodia[3] = 0; melodia[4] = D4; melodia[5] = D4; melodia[6] = C4; melodia[7] = 0; melodia[8] = E4; melodia[9] = E4; melodia[10] = D4; melodia[11] = 0; melodia[12] = D4; melodia[13] = D4; melodia[14] = C4;
		tempo[0] = 12; tempo[1] = 12; tempo[2] = 1; tempo[3] = 2; tempo[4] = 12; tempo[5] = 12; tempo[6] = 1; tempo[7] = 1; tempo[8] = 12; tempo[9] = 12; tempo[10] = 1; tempo[11] = 2; tempo[12] = 12; tempo[13] = 12; tempo[14] = 1;
		tocaefeito(15);
}



void EfeitosSonoros::marchafunebre() {
		melodia[0] = D4; melodia[1] = D4; melodia[2] = D4;melodia[3] = D4; melodia[4] = 0; melodia[5] = F4; melodia[6] = E4; melodia[7] = E4; melodia[8] = D4; melodia[9] = D4; melodia[10] = C4; melodia[11] = D4;
		tempo[0] = 2; tempo[1] = 2; tempo[2] = 6; tempo[3] = 1; tempo[4] = 3; tempo[5] = 2; tempo[6] = 6; tempo[7] = 3; tempo[8] = 6; tempo[9] = 3; tempo[10] = 3; tempo[11] = 2;
		tocaefeito(12);
}


void EfeitosSonoros::tocaefeito(int numerodenotas) {
	
	for (int nota = 0; nota < numerodenotas; nota++) { // para calcular a duracao da nota, pegue um segundo e divida-o pelo tipo dela. 1000 milésimos eh igual a 1 segundo. ex.: um quarto de nota = 1000 / 4, um oitavo de nota = 1000/8, etc.
		int tempo_nota = 1000 / tempo[nota];
		tone(pinBuzzer, melodia[nota],tempo_nota); // para distinguir as notas, ajuste um tempo minimo entre elas. a duracao da nota + 30% funcionara bem:
		int intervalo = tempo_nota * 1.30;
		delay(intervalo);
	}
	
	noTone(pinBuzzer);	
}

