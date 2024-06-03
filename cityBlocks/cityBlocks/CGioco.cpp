#include "CGioco.h"

CGioco::CGioco()
{
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
		mazzoNuoviElementi.inserisciMazzo();
		for (int i = 0; i < MAX_CAMBI; i++)
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
	}

}

void CGioco::controllo(int x, int y)
{
	scacchiera.controllo((x / 100), (y/100), 2);
	scacchiera.sostituzioneCasette((x / 100), (y / 100));
}

void CGioco::inserimentoMazzo()
{
	int numMagg = 1;
	for (int y = 0; y < MAX_RIGHE; y++)
		for (int x = 0; x < MAX_COLONNE; x++)
			if (numMagg < scacchiera.getElemento(x, y))
				numMagg = scacchiera.getElemento(x, y);
	if (numMagg > mazzoNuoviElementi.getLivello())
		mazzoNuoviElementi.setLivello(numMagg);
		

}

bool CGioco::fineGioco()
{
	for (int y = 0; y < MAX_RIGHE; y++)
	{
		for (int x = 0; x < MAX_COLONNE; x++)
		{
			if (scacchiera.getElemento(x, y) == 0)
				return true;
		}
	}
	return false;
}