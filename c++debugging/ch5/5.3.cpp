#include <iostream>

using namespace std;

class Item 
{
	static int count;
	public:
		Item()
		{ count++; }
		int getCount()
		{ return count; }
		int* getCountAddress()
		{ return &count; }
};

int Item :: count = 0;

int main()
{
	Item objItem1;
	Item objItem2;

	cout << objItem1.getCount() << ' ';
	cout << objItem2.getCount() << ' ';

	cout << objItem1.getCountAddress() << ' ';
	cout << objItem2.getCountAddress() << ' ';
	return 0;
}
