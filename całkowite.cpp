#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"*Program wyswietla kolejne liczby calkowite do 100, ktore sa podzielne bez reszty przez liczbe ktora za chwile podasz*"<<endl;
	cout<<"Podaj liczbe: "<<endl;
	cin>>n;
	if(n>100)
	{
		cout<<"za duza liczba";
	}
	for(int i=1;i<=100;i++)
	{
		if(i%n==0)
		{
		cout<<i<<endl;	
		}
	}
	
	return 0;
}
