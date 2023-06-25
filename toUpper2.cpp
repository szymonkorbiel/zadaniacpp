// PROGRAM ZMIENIA MALE LITERY NA WIELKIE DO MOMENTU WCISNIECIA KROPKI.
#include <iostream>

using namespace std;


int main()
{
	string zdanie;
	int dlugosc;
	int elo=0;
	
	cout<<"Program zamienia male litery na duze. (PAMIETAJ O KROPCE)"<<endl<<endl;
	cout<<"Podaj zdanie: ";
	getline(cin, zdanie);
	
	
while(elo!=1)
{
cout<<endl;
dlugosc=zdanie.length();					

for(int i=0; i<dlugosc;i++)
{
	for(int j=97;j<=122;j++)
	{	
		if(zdanie[i]==(char)j)			//// konwersja liter z malych na duze
		{
		cout<<(char)(j-32);
    	}
    	
    	if(zdanie[i]==(char)(j-32))		//// duze litery pozostaja duzymi
		{
		cout<<(char)(j-32);
    	}
    }
    
   		if(zdanie[i]==' ')								//////// wyszukuje spacje
		{
		cout<<" ";
    	}	
    	if(zdanie[i]=='.')							//////// konczy program
		{
			elo=1;
			break;
    	}	
}
}

cout<<endl;
getchar();getchar();

	return 0;
}
