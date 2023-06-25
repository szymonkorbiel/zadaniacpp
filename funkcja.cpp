#include <iostream>

using namespace std;

int obl(int x, int y, int z)
{
	return (x+(2*y)-z)/((0.5*x)-8);
}

int main()
{
	int x=4, y=5, z=-3;
	
	cout<<obl(x, y, z);

	return 0;
}
