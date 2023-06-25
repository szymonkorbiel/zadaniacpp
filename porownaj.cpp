#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int tab1[5];
	int tab2[5];
	cout<<"Zadeklaruj tablice 1"<<endl;
	for(int y=0;y<5;y++)
{
      cout << "Podaj element tablicy o indeksie "<< y <<endl;
      cin >>  tab1[y];
}
	cout<<"Zadeklaruj tablice 2"<<endl;
	for(int z=0;z<5;z++)
{
      cout << "Podaj element tablicy o indeksie "<< z <<endl;
      cin >>  tab1[z];
}
 if(tab1[0]==tab2[0]&&tab1[1]==tab2[1]&&tab1[2]==tab2[2]&&tab1[3]==tab2[3]&&tab1[4]==tab2[4]){
 	cout<<"Tablice sa takie same"<<endl;
 }
 if(tab1[0]!=tab2[0]||tab1[1]!=tab2[1]||tab1[2]!=tab2[2]||tab1[3]!=tab2[3]||tab1[4]!=tab2[4]){
 	cout<<"Tablice sa rozne"<<endl;
 }
 return 0;
}
