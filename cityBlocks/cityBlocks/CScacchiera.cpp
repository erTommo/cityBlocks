#include "CScacchiera.h"
#include <string>
using namespace std;

CScacchiera::CScacchiera()
{
	for (int j = 0; j < MAX_RIGHE; j++)
	{
		for (int i = 0; i < MAX_COLONNE; i++)
		{
			
			scacchiera[j][i] = 0;
				
		}
	}
	inizializzaVetCasette();
	limite = 0;
}

void CScacchiera::inserisciElemento(int x, int y, int elemento)
{
	scacchiera[y / 100][x / 100] = elemento;
}

void CScacchiera::drawScacchiera()
{
	for (int j = 0; j < MAX_RIGHE; j++)
	{
		for (int i = 0; i < MAX_COLONNE; i++)
		{
			DrawRectangle((i * 100)+10, (j * 100)+10, 95, 95, Yellow);
			if (scacchiera[j][i]!=0)
				DrawString((i * 100) + 10, (j * 100) + 10, to_string(scacchiera[j][i]).c_str(), "Arial", 70, Black);
		}
	}
	
}

void CScacchiera::controllo(int x, int y, int layer)
{
	if (layer > 0 )
	{
		if ((scacchiera[y][x] == scacchiera[y][x + 1]) && (x + 1) <= MAX_RIGHE) {
			XCasette[limite] = x + 1;
			YCasette[limite] = y;
			limite++;
			controllo(x + 1, y, layer - 1);
			
		}
		if (scacchiera[y][x] == scacchiera[y + 1][x] && (y + 1) <= MAX_COLONNE) {
			XCasette[limite] = x;
			YCasette[limite] = y + 1;
			limite++;
			controllo(x, y + 1, layer - 1);
			
		}
		if (scacchiera[y][x] == scacchiera[y][x - 1] && (x - 1) <= MAX_RIGHE) {
			XCasette[limite] = x - 1;
			YCasette[limite] = y;
			limite++; 
			controllo(x - 1, y, layer - 1);
		}
		if (scacchiera[y][x] == scacchiera[y - 1][x] && (y - 1) <= MAX_COLONNE) {
			XCasette[limite] = x;
			YCasette[limite] = y - 1;
			limite++;
			controllo(x, y - 1, layer - 1);
			
		}
	}
}

void CScacchiera::sostituzioneCasette(int x, int y)
{
	if (limite > 2) {
		scacchiera[y][x]++;
		for (int i = 0; i < limite; i++)
		{
			if (YCasette[i] != y || XCasette[i] != x)
				scacchiera[YCasette[i]][XCasette[i]] = 0;
		}
		
	}
	inizializzaVetCasette();
	limite = 0;
}

void CScacchiera::inizializzaVetCasette()
{
	for (int i = 0; i < 8; i++)
	{
		XCasette[i]=0;
		YCasette[i]=0;
	}
}

int CScacchiera::getElemento(int x, int y)
{
	return scacchiera[y][x];
}


