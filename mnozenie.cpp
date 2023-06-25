#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a;
	int tab2[7];
	int tab1[7];
	for(int b=0;b<7;b++){
	cout << "Podaj element tablicy o indeksie "<< b <<endl;
      cin >>  tab1[b];}
      cout<<"Podaj liczbe przez ktora bedziesz mnozyl "<<endl;
      cin>>a;
tab2[0]=tab1[0]*a;
tab2[1]=tab1[1]*a;
tab2[2]=tab1[2]*a;
tab2[3]=tab1[3]*a;
tab2[4]=tab1[4]*a;
tab2[5]=tab1[5]*a;
tab2[6]=tab1[6]*a;

cout<<tab2[0]<<" ";
cout<<tab2[1]<<" ";
cout<<tab2[2]<<" ";
cout<<tab2[3]<<" ";
cout<<tab2[4]<<" ";
cout<<tab2[5]<<" ";
cout<<tab2[6]<<" ";
return 0;
}

