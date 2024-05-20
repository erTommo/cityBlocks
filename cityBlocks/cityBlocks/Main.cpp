
#define IMM2D_WIDTH 1080
 #define IMM2D_HEIGHT 720
 #define IMM2D_SCALE 2

 #define IMM2D_IMPLEMENTATION
 #include "immediate2d.h"
#include "CGioco.h"
#include <iostream>

using namespace std;


void run() {
	CGioco gioco;
	gioco.draw();
	if (LeftMousePressed())
	{
		gioco.inserisciElementoTemp(850,300);
		gioco.inserisciElementoInScacchiera(300, 300);
	}

}