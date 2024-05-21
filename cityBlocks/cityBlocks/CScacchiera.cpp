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
