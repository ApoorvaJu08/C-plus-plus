#include <iostream>
using namespace std;

class swap1
{	
	public:
		int a;
		int b;
	public:
		void getData(void);
		void swapp(int &, int &);
};

void swap1 :: getData(void)
{
	cout << "Enter first number" << '\n';
	cin >> a;
	cout << "Enter second number" << '\n';
	cin >> b;
}

void swap1 :: swapp(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a: " << a << '\n';
	cout << "b: " << b << '\n';
}

int main()
{
	swap1 s;
	s.getData();
	s.swapp(s.a,s.b);
	return 0;
}
