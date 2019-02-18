#include <iostream>
using namespace std;
int count = 0;
class test
{
	public:
		test()
		{
			count++;
			cout << "\n\nConstructor msg: Object Number: " << count << "created..";
		}
		~test()
		{
			cout << "\n\nDestructor msg: Object Number: " << count << "destroyed..";
			count--;
		}
};

int main()
{
	cout << "Inside the main block..";
	cout << "\n\nCreating first object T1..";
	test T1;
	{
		//block 1
		cout << "\n\nInside Block 1..";
		cout << "\n\nCreating two more objects T2 and T3..";
		test T2, T3;
		cout << "\n\nLeaving Block 1..";
	}
	cout << "\n\nBack inside the main block";
	return 0;
}
