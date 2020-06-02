#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float y, i;
	for(i = 0.0; i <= 9.0; i+= 1.0)
	{
		y = exp(-i);
		cout << y << '\n';
	}
	return 0;
}
