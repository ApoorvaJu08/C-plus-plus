#include <iostream>
using namespace std;

class pyramid 
{
	public: 
		int a;
		void getData(void);
		void display(int &);
};

void pyramid :: getData(void)
{
	cout << "Enter the number" << '\n';
	cin >> a;
}

void pyramid :: display(int &a)
{
	int i, j;
	for(i = 1; i <= a; i++)
	{
		for(j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << '\n';
	}
}

int main()
{
	pyramid p;
	p.getData();
	p.display(p.a);
	return 0;
}
