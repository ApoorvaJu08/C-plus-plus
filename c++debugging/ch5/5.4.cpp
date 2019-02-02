#include <iostream>

using namespace std;

class staticFunction
{
	static int count;
	public:
		static void setCount()
		{ count++; }
		void displayCount()
		{ cout << count; }
};

int staticFunction :: count = 10;

int main()
{
	staticFunction obj1;
	obj1.setCount();
	staticFunction :: setCount();
	obj1.displayCount();
	return 0;
}
