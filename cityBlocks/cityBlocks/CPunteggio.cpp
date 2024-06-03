#include "CPunteggio.h"

CPunteggio::CPunteggio()
{
	punteggio = 0;
}
int CPunteggio::getPunteggio()
{
	return punteggio;
}

void CPunteggio::setPunteggio(int valore)
{
	punteggio += valore;
}

void CPunteggio::drawPunteggio()
{
	DrawString(650,350 , "score:", "Arial", 30, Yellow);
	DrawRectangle(650, 400, 450, 50, Black, Black);
	DrawString(650, 400, to_string(punteggio).c_str(), "Arial", 30, Yellow);
}
