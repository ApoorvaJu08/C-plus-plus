#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout << "How many numbers? " << '\n';
	int n, i, j;
	cin >> n;
	float *a = new float[n];
	float b, c, d, e;
	float sum, mean;
	sum = 0.0;
	cout << "Enter " << n << "numbers: " << '\n';
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	} 
	mean = sum/n;
	for(j = 0; j < n; j++)
	{
		b = a[j] - mean;
		c += pow(b,2); 
	}
	d = c/n;
	e = sqrt(d);
	cout << "Variance is: " << d << '\n';
	cout << "Standard deviation is: " << e << '\n';
	return 0;
}
