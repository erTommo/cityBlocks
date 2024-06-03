#pragma once
#define MAX_MAZZO 3
#include <iostream>
#include "immediate2d.h"
#define MAX_CAMBI 5

class CMazzo
{
private:
	int mazzo[MAX_MAZZO];
	int livello;
public:
	CMazzo();
	int prelevaElemento(int y);
	void setLivello(int livello);
	void inserisciMazzo();
	int getLivello();
	void drawMazzo();
};

