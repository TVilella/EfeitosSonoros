#include <EfeitosSonoros.h>

EfeitosSonoros efeito (8);
 
void setup(){
	for (int vez = 0; vez < 6; vez++) {
efeito.sirene(5);
	}
	efeito.sirene();
	efeito.sirene(20);
	
}

void loop() {
}
