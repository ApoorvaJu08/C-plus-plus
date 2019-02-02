#include <iostream>

using namespace std;

class M 
{
	int x;
	int y;
	public:
		void setxy(int a, int b)
		{
			x = a;
			y = b;
		}
		friend int sum(M m);
};

int sum(M m)
{
	int M ::* px = &M :: x;
	int M ::* py = &M :: y;
	M *pm = &m;
	int S = m.*px + pm->*py;
	return S;
}

int main()
{
	M m;
	void (M :: *pf)(int, int) = &M :: setxy;
	(n.*pf)(10,20);
	cout << "Sum = " << sum(n) << '\n';

	M *op = &n;
	(op->*pf)(30,40);
	cout << "Sum = " << sum(n) << '\n';
	return 0;
}





