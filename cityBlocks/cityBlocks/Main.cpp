
#define IMM2D_WIDTH 1000
 #define IMM2D_HEIGHT 515
 #define IMM2D_SCALE 1

 #define IMM2D_IMPLEMENTATION
 #include "immediate2d.h"
#include "CGioco.h"

using namespace std;
CGioco gioco;
void run() {
	UseDoubleBuffering(true);
	
	while (gioco.fineGioco())
	{
		Present();
		gioco.draw();
		if (LeftMousePressed())
		{
			int x = MouseX();
			int y = MouseY();
			if (((x<505 && x >10) && (y < 505 && y >10)) || ((x < 895 && x >800)&& (y < 305 && y > 10)))
			{
				gioco.inserisciElementoTemp(x, y);
				gioco.inserisciElementoInScacchiera(x, y);
				gioco.inserimentoMazzo();
			}
		}
	}
	Clear();
	gioco.drawFine();
}