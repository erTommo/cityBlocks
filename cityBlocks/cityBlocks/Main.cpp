
#define IMM2D_WIDTH 1000
 #define IMM2D_HEIGHT 700
 #define IMM2D_SCALE 1

 #define IMM2D_IMPLEMENTATION
 #include "immediate2d.h"
#include "CGioco.h"
#include <iostream>

using namespace std;
CGioco gioco;
void run() {
	UseDoubleBuffering(true);
	
	while (true)
	{
		Present();
		gioco.draw();
		if (LeftMousePressed())
		{
			int x = MouseX();
			int y = MouseY();
			gioco.inserisciElementoTemp(x, y);
			gioco.inserisciElementoInScacchiera(x, y);
		}
	}
}