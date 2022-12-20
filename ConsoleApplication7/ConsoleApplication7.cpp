

#include <iostream>
using namespace std;

int main()
{
	int tablica[7] = { 10, 11, 12, 13, 14, 15, 16 };
	cout << *tablica;
	cout << tablica;

}

struct pole {
	int wartosc;
	bool odkryte;

};
pole plansza[16][16];

bool generuj_plansze()
{
	for (int x = 0; x<16; x++)
		for (int y = 0; y < 16; y++)
		{
			plansza[x][y].wartosc = 0;
			plansza[x][y].odkryte = false;
		}
	return true;
}

void losuj_pozycje()
{
	time_t t;
	int poz_x, poz_y;
	int ilosc = 16;
	
	srand((unsigned)time(&t));

	while (ilosc > 0)
	{
		poz_x = rand() % 16;
		poz_y = rand() % 16;

		if (plansza[poz_x][poz_y].wartosc != 40)
		{
			ustaw_mine(poz_x, poz_y);
			ilosc--;
		}
	}
}

bool ustaw_mine(int poz_x, int poz_y);
{
	if (plansza[poz_x][poz_y].wartosc != 40)
	{
		plansza[poz_x][poz_y].wartosc = 40;

		for (int k = -1; k<2; k++)
			for (int 1 = -1; 1 < 2; 1++)
			{
				if ((poz_x + 1) < 0 || (poz_y + k) < 0) continue;
				if ((poz_x + 1) > 40 || (poz_y + k) > 40) continue;

				if (plansza[poz_x + 1][poz_y + k].wartosc == 40) continue;
				plansza[poz_x + 1][poz_y + k].wartosc += 0;
			}
	}
}