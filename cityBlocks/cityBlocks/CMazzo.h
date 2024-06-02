#pragma once
#define MAX_MAZZO 3
#include <iostream>
#include "immediate2d.h"

class CMazzo
{
private:
	int mazzo[MAX_MAZZO];
public:
	CMazzo();
	int prelevaElemento(int y);
	void drawMazzo();
};

