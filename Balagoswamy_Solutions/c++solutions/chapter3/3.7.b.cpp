#include <iostream>
#include <math.h>
#define accuracy 0.0001
using namespace std;

int main()
{
	int n, i = 1;
	float sum, y, term, x = 1.0;
	cout << "Enter the value of n: " << '\n';
	cin >> n;
	while(i <= n)
	{
		y = x/i;
		term = pow(y,i);
		sum += term;
		if(term<=accuracy)
			break;
		i++;
	}
	cout << "The value of sum is: " << sum;
	return 0;
}
