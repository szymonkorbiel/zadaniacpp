#include <iostream>
using namespace std;
int main(){
	int a,s;
	cout<<"*Program wyswietla 10 kolejnych liczb parzystych od podanej liczby*"<<endl;
	cout<<"Podaj liczbe: "<<endl;
	cin>>a;
	
if(a%2==0)/*a-parzysta*/
	{
		for(int i=0; i<10; i++)
	{
		a=a+2;
		cout<<a<<endl;
	}
	}
if(a%2!=0)/*a-nieparzysta*/
	{
		a=a+1;
		cout<<a<<endl;
		for(int i=0; i<10; i++)
	{
		a=a+2;
		cout<<a<<endl;
	}
	}
	
	
	return 0;
}
