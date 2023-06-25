#include <iostream>

using namespace std;

int main()
{
int wys;
int szer;
cout<<"Podaj 1.wysokosc i 2.szerokosc prostokata "<<endl;
cout<<"1. ";
cin>>wys;
cout<<endl<<"2. ";
cin>>szer;
if(wys<=0)
cout<<"Nie mozna utworzyc takiego prostokatu!!!"<<endl;
if(szer<=0)
cout<<"Nie mozna utworzyc takiego prostokatu!!!"<<endl;

for(int i=0; i<wys ;i++)
{
        for(int a=0; a<szer ;a++)
       { cout<<"#";
       }
cout<<endl;      
}

 return 0;   
}
