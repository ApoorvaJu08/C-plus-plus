#include <iostream>

using namespace std;

class Length
{
	int feet;
	float inches;
	public:
		Length()
		{
			feet = 5;
			inches = 6.0;
		}
		Length(int f, float in)
		{
			feet = f;
			inches = in;	
		}
		Length addLength(Length l)
		{
			l.inches += this->inches;
			l.feet += this->feet;
			if(l.inches>12)
			{
				l.inches-=12;
				l.feet++;
			}		
			//return 1;	
		}
		int getFeet()
		{ return feet; }	
		float getInches()
		{ return inches; }
};

int main()
{
	Length objLength1;
	Length objLength2(5,6.5);
	objLength1 = objLength1.addLength(objLength2);
	cout << objLength1.getFeet() << ' ';
	cout << objLength1.getInches() << ' ';
	return 0;
}








