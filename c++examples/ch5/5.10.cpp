#include <iostream>

using namespace std;

class c2;

class c1 
{
	int value1;
	public:
		void intdata(int a) { value1 = a; }
		void display(void) { cout << value1 << '\n'; }
		friend void exchange(c1 &, c2 &);
};

class c2 
{
	int value2;
	public:
		void intdata(int a) { value2 = a; }
		void display(void) { cout << value2 << '\n'; }
		friend void exchange(c1 &, c2 &);
};

void exchange(c1 & x, c2 & y)
{
	int temp = x.value1;
	x.value1 = y.value2;
	y.value2 = temp;
}

int main()
{
	c1 o1;
	c2 o2;
	
	o1.intdata(100);
	o2.intdata(200);
	
	cout << "Value before exchange" << "\n";
	o1.display();
	o2.display();
	
	exchange(o1, o2);

	cout << "Value before exchange" << "\n";
	o1.display();
	o2.display();
	return 0;
}













