#include <iostream>

using namespace std;

int f(int x)
{
	if(x<0)
	{
		return 6;
			
	}
	if(x>1)
	{
		return 3;
	}
	if(x>=1 && x<=0)
	{
		return x=(-3*x)+6;
	}
}


int main()
{
	int x;
	cout<<"Podaj x"<<endl;
	cin>>x;
	cout<<"Wartosc funkcji wynosi: "<<f(x);	

	
	return 0;
}
