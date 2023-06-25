/****************************************
program: zarobki w wojewodztwie malopolskim
ver: 1.001
data: 28.05.2018r.
autor: Szymon Korbiel
klasa: 2G
****************************************/

#include <iostream>
#include <fstream> 
#include <string>
#include <cmath>
using namespace std;

int zad2 (int liczba1 , int liczba2 ,int  liczba3){
	float srednia=0;
	srednia=(liczba1+liczba2+liczba3)/3;
	return srednia;
}

string zad3( string w){
	string lustrzane;
	int rozmiar=w.size();
		for(int i=rozmiar-1;i>=0;i--){
			lustrzane=lustrzane+w[i];
		}
	return lustrzane;
}

int main()
{

	ifstream Korbiel_dane;
	ofstream z1("Korbiel_srednia.txt");
	ofstream z2("Korbiel_lustrzane.txt");
	ofstream z3("Korbiel_statystyki.txt");
	string w;
	int liczba1 , liczba2 , liczba3 , a=0 , b=0 , c=0;
	cout<<"podpunkt a)"<<endl;
	Korbiel_dane.open("Korbiel_dane.txt");
		if(Korbiel_dane.good()){
			for(int i=1; !Korbiel_dane.eof(); i++){
				Korbiel_dane>>w>>liczba1>>liczba2>>liczba3;
				cout<<w <<" "<< liczba1 <<" "<< liczba2 <<" "<< liczba3 <<endl;
				z1<<" srednia wojewodztwo " << w <<" wynosi "<<zad2(liczba1 , liczba2 , liczba3)<<endl;
				z2<<" lustrzane odbicie "<< w <<" to "<<zad3(w)<<endl;
				a=a+liczba1;
				b=b+liczba2;
				c=c+liczba3;
			}
	}
	z3<<"Srednia rok 2015 " << "to " << a/3<<endl;
	z3<<"Srednia rok 2016 " << "to " << b/3<<endl;
	z3<<"Srednia rok 2017 " << "to " << c/3<<endl;
    cout<<"Po poprawnym skompilowaniu sie kodu powinny utworzyc sie 3 pliki Korbiel_srednia, lustrzane, statystyki, ktore odpowiednio sa przypisane do podpunktow b), c), d)"<<endl;
	system("PAUSE");
    return 0;
}

