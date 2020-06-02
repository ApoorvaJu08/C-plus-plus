#include <iostream>
#include <math.h>

using namespace std;

float area(int, int);

float area(float);

int main()
{
	int a,b;
	float r;
	cout << "Enter length and breadth of height: " << '\n';
	cin >> a >> b;
	cout << "\n Area of triangle is: " << area(a,b);

	cout << "\n Enter radius of circle: " << '\n';
	cin >> r;
	cout << "\n Area of circle is: " << area(r);
}

float area(int a, int b)
{
	float y;
	y = (a*b)/2;
	return(y);
}

float area(float r)
{
	return(3.14*r*r);
}
