#include <iostream>

using namespace std;

class Fd
{
	long int pamount;
	int years;
	float rate;
	float rvalue;
	public:
		Fd() {};
		Fd(long int p, int y, float r = 0.12);
		Fd(long int p, int y, int r);
		void display(void);
};

Fd :: Fd(long int p, int y, float r)
{
	pamount = p;
	years = y;
	rate = r;
	rvalue = pamount;
	for(int i = 1; i <= y; i++)
		rvalue = rvalue * (1.0 + r);
}

Fd :: Fd(long int p, int y, int r)
{
	pamount = p;
	years = y;
	rate = r;
	rvalue = pamount;
	for(int i = 1; i <= y; i++)
		rvalue = rvalue * (1.0 + float(r)/100); 
}

void Fd :: display(void)
{
	cout << "\n" << "Principal amount = " << pamount << "\n" << "Return value = " << rvalue << "\n";  
}

int main()
{
	Fd fd1, fd2, fd3;
	long int p;
	int y;
	float r;
	int R;
	cout << "Enter amount, period, interest rate(in percent)\n";
	cin >> p >> y >> R;
	fd1 = Fd(p, y, R);
	cout << "Enter amount, period, interest rate(decimal form)\n";
	cin >> p >> y >> r;
	fd2 = Fd(p, y, r);
	cout << "Enter amount and period\n";
	cin >> p >> y;
	fd3 = Fd(p,y);	
	cout << "\nDeposit 1";
	fd1.display();
	cout << "\nDeposit 2";
	fd2.display();
	cout << "\nDeposit 3";
	fd3.display();

	return 0; 
}
