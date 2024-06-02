#pragma once
#define MAX_MAZZO 3
#include <iostream>
#include "immediate2d.h"

class CMazzo
{
private:
	int mazzo[MAX_MAZZO];
	int MaxValori;
public:
	CMazzo();
	int prelevaElemento(int y);
	void setNuovoElemento(int y);
	void setMaxValori(int num);
	void drawMazzo();
};

