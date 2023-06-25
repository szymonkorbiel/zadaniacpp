#include <iostream>

using namespace std;

float waluty(float zl, char znak)
{
	if(znak=='$')
	{
		return zl/3.74;
	}
	if(znak=='E')
	{
		return zl/4.17;
	}
	if(znak=='F')
	{
		return zl/3.83;
	}
		
}


int main()
{
	float zl;
	char znak;
	cout<<"Podaj kwote w zl: ";
	cin>>zl;
	cout<<"Podaj znaczek waluty na ktora chcesz zmienic ($;E;F): ";
	cin>>znak;
	
	cout<<waluty(zl, znak);
	
	return 0;
}
