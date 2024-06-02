#include "CGioco.h"

CGioco::CGioco()
{
	livelloMax = 1;
	elementoTemp = 0;
}

void CGioco::draw()
{
	scacchiera.drawScacchiera();
	mazzoNuoviElementi.drawMazzo();
}

void CGioco::inserisciElementoInScacchiera(int cX, int cY)
{
	int x = cX;
	int y = cY;
	if (((x <= 550 && x >= 10) && (y <= 550 && y >= 10))&&elementoTemp!=0) {
		scacchiera.inserisciElemento(x, y, elementoTemp);
		elementoTemp = 0;
		controllo(x, y);
		controllo(x, y);
	}

}

void CGioco::inserisciElementoTemp(int cX, int cY)
{
	int x = cX;
	int y = cY;
	if ((x <= 895 && x >= 800) && (y <= 310 && y >= 10))
	{
		elementoTemp = mazzoNuoviElementi.prelevaElemento(y / 100);
		mazzoNuoviElementi.setNuovoElemento(y / 100);
	}

}

void CGioco::controllo(int x, int y)
{
	scacchiera.controllo((x / 100), (y/100), 2);
	scacchiera.sostituzioneCasette((x / 100), (y / 100));
	mazzoNuoviElementi.setMaxValori(scacchiera.getElemento((x / 100), (y / 100)));
}
