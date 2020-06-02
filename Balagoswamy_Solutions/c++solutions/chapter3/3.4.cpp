#include <iostream>
using namespace std;

int main()
{
	int n = 10, i;
	float p = 1000;
	float r = 0.10;
	float v;
	for(i = 1; i <= 10; i++)
	{
		v = (p * (1+r));
		cout << v << '\n';
		p += 1000;
		r += 0.01;
	}
	return 0;
}
