#include "CMazzo.h"
#include <string>
using namespace std;
CMazzo::CMazzo()
{
	srand(time(NULL));
	for (int i = 0; i < MAX_MAZZO; i++)
	{
		mazzo[i] = rand() % 2;
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
		DrawString(800, (i * 100) + 10, to_string(mazzo[i]).c_str(), "Arial", 70, Black);
	}
}
