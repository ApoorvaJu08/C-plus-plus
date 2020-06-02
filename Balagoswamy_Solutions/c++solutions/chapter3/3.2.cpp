#include <iostream>
using namespace std;

int main()
{
	int m;
	cout << "Enter vector size: " << '\n';
	cin >> m;
	int *v = new int[m];
	cout << "to check your performance enter " << m << "integer value" << '\n';
	int i;
	for(i = 0; i < m; i++)
	{
		cin >> v[i];	
	}
	cout << "Inetger values are: " << '\n';
	for (i = 0; i < m; i++)
	{
		if(i == m-1)
			cout << v[i];
		else 
			cout << v[i] << ",";
	}
	return 0;
}
