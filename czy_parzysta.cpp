#include <iostream>

using namespace std;

int main()
{
int suma=0;
int x;
int licznik=0;
do
{
cout<<"Podaj liczbe: "<<endl;
cin>>x;    
if(x%2==0)
suma=suma+x;
licznik++;
cout<<"Suma = "<<suma<<endl;
}
while(suma>=50 || licznik<=15);
  
    cout<<"Suma ="<<endl<<suma;
    
    
 return 0;   
}
