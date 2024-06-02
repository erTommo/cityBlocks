#include "CMazzo.h"
#include <string>
using namespace std;
CMazzo::CMazzo()
{
	srand(time(NULL));
	MaxValori = 1;
	for (int i = 0; i < MAX_MAZZO; i++)
	{
		mazzo[i] = 1;
	}
}

int CMazzo::prelevaElemento(int y)
{
	return mazzo[y];
}

void CMazzo::setNuovoElemento(int y)
{
	mazzo[y] = rand() % MaxValori+1;
	while (mazzo[y] == 0) {
		mazzo[y] = rand() % MaxValori + 1;
	};
}

void CMazzo::drawMazzo()
{
	for (int i = 0; i < MAX_MAZZO; i++)
	{
		DrawRectangle(800, (i * 100)+10, 95, 95, Yellow);
		DrawString(800, (i * 100) + 10, to_string(mazzo[i]).c_str(), "Arial", 70, Black);
	}
}

void CMazzo::setMaxValori(int num)
{
	MaxValori = num;
}
