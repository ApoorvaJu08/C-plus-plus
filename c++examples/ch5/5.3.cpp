#include <iostream>

using namespace std;

const m = 50;

class items
{
	int itemCode[m];
	float itemPrice[m];
	int count;

	public:
		void CNT(void) {count = 0;}
		void getitem(void);
		void displaySum(void);
		void remove(void);
		void displayItems(void);
};

void items :: getItem(void)
{
	cout << "Enter item code :";
	cin >> itemCode[count];

	cout << "Enter item cost: ";
	cin >> 
}
