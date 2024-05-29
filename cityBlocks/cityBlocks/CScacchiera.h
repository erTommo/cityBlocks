#pragma once
#include "immediate2d.h"
#define MAX_RIGHE 5
#define MAX_COLONNE 5

class CScacchiera
{
private:
	int scacchiera[MAX_RIGHE][MAX_COLONNE];
public:
	CScacchiera();
	void inserisciElemento(int x, int y, int elemento);
	void drawScacchiera();
	void controllo(int x, int y, int layer);
};

