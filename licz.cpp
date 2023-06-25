#include <iostream>

using namespace std;

int main()
{
int liczba;
int max=0;
int srednia=0;
int il_wsz=0;
int il_trzy=0;
int licznik=0;
int ilosc=0;
int suma_piec=0;
do
{
cout<<"Podaj dowolna liczbe: od100do1000 "<<endl;
cin>>liczba;
ilosc++;
il_wsz=il_wsz+liczba; 

if(liczba>99 && liczba<1000) 
il_trzy=il_trzy+liczba;


}while(liczba==0);
  

cout<<"Zero zostalo podane za- "<<ilosc<<" razem."<<endl;
cout<<"Najwieksza liczba: "<<max<<endl;
cout<<"Suma wszystkich liczb: "<<il_wsz<<endl;
cout<<"Suma trzycyfrowych liczb: "<<il_trzy<<endl;
cout<<"Srednia liczb podzielnych przez 5: "<<srednia<<endl;

    
 return 0;   
}
