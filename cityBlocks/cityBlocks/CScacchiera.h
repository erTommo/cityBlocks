#pragma once
#include "immediate2d.h"
#define MAX_RIGHE 5
#define MAX_COLONNE 5
#define MAX_ELL 20

#include "CPunteggio.h"

class CScacchiera
{
private:
	int scacchiera[MAX_RIGHE][MAX_COLONNE];
	int XCasette[MAX_ELL];
	int YCasette[MAX_ELL];
	CPunteggio punteggio;
	int limite;
public:
	CScacchiera();
	void inserisciElemento(int x, int y, int elemento);
	void drawScacchiera();
	void controllo(int x, int y, int layer);
	void sostituzioneCasette(int x, int y);
	void inizializzaVetCasette();
	int getElemento(int x, int y);
	int getPunteggio();
};

