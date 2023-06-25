#include <iostream>

using namespace std;

int kalkulator(int a, int b, char c)
{
	if(c=='+')
	{
		return a+b;
	}
	if(c=='-')
	{
		return a-b;
	}
	if(c=='*')
	{
		return a*b;
	}
	if(c=='/')
	{
		if(a==0 || b==0)
		{
			cout<<"Nie dziel przez zero!";	
		}
		return a/b;
	}
}

int main()
{
	int a, b;
	char c;
	cout<<"Podaj 2 liczby i znak np(2+2) (+;-;*;/)"<<endl;
	cin>>a;
	cin>>c;
	cin>>b;
	
	cout<<"= "<<kalkulator(a, b, c);
	
	return 0;
}
