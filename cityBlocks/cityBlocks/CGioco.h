#pragma once
#include "CScacchiera.h"
#include "immediate2d.h"
#include "CMazzo.h"

class CGioco
{
private:
	CScacchiera scacchiera;
	CMazzo mazzoNuoviElementi;
	int livelloMax;
	int elementoTemp;
public:
	CGioco();
	void draw();
	void inserisciElementoInScacchiera(int cX, int cY);
	void inserisciElementoTemp(int cX, int cY);
	void controllo(int x, int y);
	
};

