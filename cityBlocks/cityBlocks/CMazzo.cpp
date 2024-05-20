#include "CMazzo.h"

CMazzo::CMazzo()
{
	srand(time(NULL));
	for (int i = 0; i < MAX_MAZZO; i++)
	{
		mazzo[i] = rand() % 1;
	}
}

int CMazzo::prelevaElemento(int y)
{
	return mazzo[y/100];
}

void CMazzo::drawMazzo()
{
	for (int i = 0; i < MAX_MAZZO; i++)
	{
		DrawRectangle(800, (i * 100)+10, 95, 95, Yellow);
		DrawString(800, (i * 100) + 10, "3", "Arial", 70, Black);
	}
}
