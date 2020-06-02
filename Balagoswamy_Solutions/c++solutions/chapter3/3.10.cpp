#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n, i;
	char name[40];
	int *b = new int[n];
	cout << "Enter the number of users: " << '\n';
	cin >> n;
	cout << "Enter the names of the " << n << " users and units consumed: " << '\n';
	for(i = 0; i < n; i++)
	{
		cin >> name >> b[i];
	}
	return 0;
}
