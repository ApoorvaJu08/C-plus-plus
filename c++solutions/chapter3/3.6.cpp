#include <iostream>
using namespace std;

int main()
{
	cout << "How many players would you insert? " << '\n';
	int n;
	cin >> n;
	char name[100][40];
	int *run = new int[n];
	int *innings = new int[n];
	int *tno = new int[n];

	for(int i = 0; i < n; i++)
	{
		cout << "\n Input details of player " << i+1;
		cout << "\n Name: " << '\n';
		cin >> name[i];
		cout << "\n Runs: " << '\n';
		cin >> run[i];
		cout << "\n Innings: " << '\n';
		cin >> innings[i];
		cout << "\n Times not out: " << '\n';
		cin >> tno[i]; 
	}	

	return 0;
}

#incomplete
