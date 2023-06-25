#include <iostream>
#include <cstdio>

using namespace std;

class ulamek
{
	int licznik;
	int mianownik;
	
	public:
		void zapisz(int l, int m); // deklaracja konstruktora
		void wypisz()
		{
			cout<<licznik<<"/"<<mianownik;
		}
}; // definicja metody klasy

	void ulamek::zapisz(int l, int m) // definicja
	{
		licznik = l;
		if(m != 0)mianownik = m;
		else
		{
			cout<<"Nie moze byc 0! ";
			getchar();
		}
	}

int main()
{
	ulamek ul1;
	ulamek ul2;
	
	ul1.zapisz(4,5);
	ul2.zapisz(1,7);
	
	ul1.wypisz();
	cout<<endl;
	ul2.wypisz();
	
	return 0;
}
