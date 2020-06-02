#include <iostream>
#include <math.h>
#define accuracy 0.0001
#define pi 3.1416

using namespace std;

long int fac(int a)
{
	if(a <= 1)
		return 1;
	else 
		return a*fac(a-1);
}

int main()
{
	float d, y, y1, x, fx;
	int sign, m, n = 1;
	cout << "Enter the value of angle in terms of degree: ";
	cin >> x;
	d = x;
	sign = 1;
	if(x < 0)
	{
		x = x*(-1);
		sign = -1;
	}
	again:
		if(x > 90 && x <= 180)
		{
			x = 180 - x;
		}
		else if(x > 180 && x <= 270)
		{
			x = x -180;
			sign = -1;
		}
		else if(x > 270 && x <= 360)
		{
			x = 360 - x;
			sign = -1;
		}		
		else if(x > 360)
		{
			int m = int(x);
			float fractional = x - m;
			x = m % 360 + fractional;
			if(x > 90)
				goto again;
			else
				sign = 1;
		}
		x = (pi/180)*x;
		m = n+1;
		fx = 0;
		for(;;)
		{
			long int h = fac(n);
			y = pow(x,n);
			int factor = pow(-1,m);
			y1 = y*factor;
			fx += y1/h;
			n = n+2;
			m++;
			if(m<=accuracy)
				break;
		}
		cout << "cos(" << d <<< ") = " << fx*sign << '\n';
		return 0;
}


















