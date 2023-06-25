#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,suma=0,min=1000000,max=-1000000,licznik=0;
	float srednia;
	char znak;
	cout<<"Program liczy suma, srednia, min, max podanych liczb"<<endl;
	cout<<"PROGRAM KONCZY PRACE PO PODANIU CYFRY 0 I KLIKNIECIU ENTER"<<endl;
	do
	{
	cout<<"Podaj liczbe: "<<endl;
	cin>>n;
	if(n>max)
	{
		max=n;
	}
	if(n<min && n!=0)
	{
		min=n;
	}
	licznik++;
	suma=suma+n;
	
	cout<<"Czy koniec wprowadzania t(0)/nie(kolejna liczba)?"<<endl;
	} while(n!=0);
	licznik=licznik-1;
	srednia=suma/licznik;
	cout<<"Suma= "<<suma<<endl;
	cout<<"Srednia= "<<srednia<<".00"<<endl;
	cout<<"Max= "<<max<<endl;
	cout<<"Min= "<<min<<endl;
	return 0;
}
