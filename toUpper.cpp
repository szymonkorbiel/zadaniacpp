#include <iostream>

using namespace std;
int zamieniamalenaduze(int dlugosc,string zdanie)
{
for(int i=0;i!='.';i++)
{
	if(zdanie[i]=='a')
	{
	cout<<"A";
    }
   	if(zdanie[i]=='b')
	{
	cout<<"B";
    }
    	if(zdanie[i]=='c')
	{
	cout<<"C";
    }
    	if(zdanie[i]=='d')
	{
	cout<<"D";
    }
    	if(zdanie[i]=='e')
	{
	cout<<"E";
    }
		if(zdanie[i]=='f')
	{
	cout<<"F";
    }	if(zdanie[i]=='g')
	{
	cout<<"G";
    }	if(zdanie[i]=='h')
	{
	cout<<"H";
    }	if(zdanie[i]=='i')
	{
	cout<<"I";
    }	if(zdanie[i]=='j')
	{
	cout<<"J";
    }	if(zdanie[i]=='k')
	{
	cout<<"K";
    }	if(zdanie[i]=='l')
	{
	cout<<"L";
    }	if(zdanie[i]=='m')
	{
	cout<<"M";
    }
    	if(zdanie[i]=='n')
	{
	cout<<"N";
    }
    	if(zdanie[i]=='o')
	{
	cout<<"O";
    }
    	if(zdanie[i]=='p')
	{
	cout<<"P";
    }
    	if(zdanie[i]=='r')
	{
	cout<<"R";
    }
    	if(zdanie[i]=='s')
	{
	cout<<"S";
    }
    	if(zdanie[i]=='t')
	{
	cout<<"T";
    }
    	if(zdanie[i]=='u')
	{
	cout<<"U";
    }
    	if(zdanie[i]=='w')
	{
	cout<<"W";
    }
        	if(zdanie[i]=='x')
	{
	cout<<"X";
    }
        	if(zdanie[i]=='y')
	{
	cout<<"Y";
    }
        	if(zdanie[i]=='z')
	{
	cout<<"Z";
    }
   	if(zdanie[i]==' ')
	{
	cout<<" ";
    }
       	if(zdanie[i]=='A')
	{
	cout<<"A";
    }
   		if(zdanie[i]=='B')
	{
	cout<<"B";
    }
    	if(zdanie[i]=='C')
	{
	cout<<"C";
    }
    	if(zdanie[i]=='D')
	{
	cout<<"D";
    }
    	if(zdanie[i]=='E')
	{
	cout<<"E";
    }
		if(zdanie[i]=='F')
	{
	cout<<"F";
    }	if(zdanie[i]=='G')
	{
	cout<<"G";
    }	if(zdanie[i]=='H')
	{
	cout<<"H";
    }	if(zdanie[i]=='I')
	{
	cout<<"I";
    }	if(zdanie[i]=='J')
	{
	cout<<"J";
    }	if(zdanie[i]=='K')
	{
	cout<<"K";
    }	if(zdanie[i]=='L')
	{
	cout<<"L";
    }	if(zdanie[i]=='M')
	{
	cout<<"M";
    }
    	if(zdanie[i]=='N')
	{
	cout<<"N";
    }
    	if(zdanie[i]=='O')
	{
	cout<<"O";
    }
    	if(zdanie[i]=='P')
	{
	cout<<"P";
    }
    	if(zdanie[i]=='R')
	{
	cout<<"R";
    }
    	if(zdanie[i]=='S')
	{
	cout<<"S";
    }
    	if(zdanie[i]=='T')
	{
	cout<<"T";
    }
    	if(zdanie[i]=='U')
	{
	cout<<"U";
    }
    	if(zdanie[i]=='W')
	{
	cout<<"W";
    }
       	if(zdanie[i]=='X')
	{
	cout<<"X";
    }
       	if(zdanie[i]=='Y')
	{
	cout<<"Y";
    }
       	if(zdanie[i]=='Z')
	{
	cout<<"Z";
    }
       	if(zdanie[i]=='.')
	{
	break;
    }
        
    	
}

}


string zdanie;
int dlugosc;
int main()
{
	cout<<"program zamienia wszystkie litery w zdaniu na duze do podania kropki podaj swoje zdanie"<<endl;
	getline(cin,zdanie);
	cout<<endl;
	dlugosc=zdanie.length();
	zamieniamalenaduze(dlugosc,zdanie);
	cout<<endl;

	return 0;
	
	
	
}
