#include <iostream>
using namespace std;
int main(){
    int suma=0;
    float srednia;
    int max;
    int min;
    int tab[5];
    int numer;
    for(int i=0;i<5;i++){
    cout<<"podaj wartosc tablicy"<<" "<<i<<" ";
    cin>>tab[i];
    }
    cout<<"Podaj numer dzialania:"<<endl;
    cout<<"suma-1,srednia-2,max-3,min-4"<<endl;
    cin>>numer;
     
    switch(numer)
    {
                 case 1:
                      for(int i=0;i<5;i++)
                      suma=suma+tab[i];
                      cout<<"suma="<<suma;
                      break;
                 
                 case 2:
                      for(int i=0;i<5;i++)
                      suma=suma+tab[i];
                      srednia=(float)suma/5;
                      cout<<"srednia="<<srednia;
                      break;
                 case 3:
                      max=tab[0];
                      for (int i=1; i<5; i++)
                      if(tab[i]>max)
                      max=tab[i];
                      cout<<"max wynosi="<<max;
                      break;
                 case 4:
                      min=tab[0];
                      for(int i=0; i<5;i++)
                      if(tab[i]<min)
                      cout<<"min wynosi="<<min;
                      break;
                      
                      
    }
                 
                           
system("pause");
return 0;
}
