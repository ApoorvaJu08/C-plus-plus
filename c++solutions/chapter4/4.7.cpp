#include <iostream>
#include <math.h>

using namespace std;

double power(double, int);

double power(double, long int);

int main()
{
	double power1, m;
	int n;
	cout << "Enter the value of m and n: " << '\n';
	cin >> m >> n;
	power1 = power(m,n);
	power1 = power(m);
	cout << power1;
	return 0;
}

double power(double m, int n)
{
	double y;
	y = pow(m,n);
	return(y);
}

double power(double m, long int n = 2)
{
	double y;
	y = pow(m,n);
	return(y);
}
