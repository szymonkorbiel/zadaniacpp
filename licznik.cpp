#include <iostream>

using namespace std;

void licznik()
{
	for(int i=-9999; i<10000; i+=2)
	{
		if(i<-1000)
		{
			cout<<i<<endl;
		}
		if(i>1000)
		{
			cout<<i<<endl;	
		}
	}
}

int main()
{	
	licznik();
	
	return 0;
}
