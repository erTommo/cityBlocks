#pragma once

#include "immediate2d.h"
#include <string>
using namespace std;

class CPunteggio
{
private:
	int punteggio;
public:
	CPunteggio();
	int getPunteggio();
	void setPunteggio(int valore);
	void drawPunteggio();
};

