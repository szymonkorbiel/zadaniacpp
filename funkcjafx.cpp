#include <iostream>

using namespace std;

void mniej(int x, fx)
{
	if(x<0)
	{
		fx=6	
	}
	if(x>0)
	{
		fx=3
	}
	if(x<=1 && x>=0)
	{
		fx=-3*x+6
	}
}

int main()
{
	cout<<"Podaj x";
	cin>>x;
	
	cout<<mniej(x, fx);	
	
	return 0;
}
