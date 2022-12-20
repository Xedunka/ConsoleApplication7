

#include <iostream>
using namespace std;

int main()
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