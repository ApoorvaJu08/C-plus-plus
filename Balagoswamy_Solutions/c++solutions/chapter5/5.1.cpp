#include <iostream>
using namespace std;

class bankAccount
{
	char name[40], acctype[20];
	int accnumber;
	double balamount;
	public:
		int assign(void);
		void deposit(float b);
		void withdraw(float c);
		void display(void);
};

int bankAccount :: assign(void)
{
	float initial;
	cout<<" You have to pay 500 TK to open your account \n"<<" You have to store at least 500 TK to keep your account active\n"<<"Would you want to open a account????\n"<<" If Yes press 1 \n"<<" If No press 0 : ";
	int test;
	cin>>test;
	if(test==1)
	{
		initial = 500;
		balamount = initial;
		cout<<" Enter name ,account number & account type to creat account : \n";
		cin>>name>>accnumber>>acctype;
	}
	else
	;
	return test;
}

void bankAccount :: deposit(float b)
{
	balamount += b;
}

void bankAccount :: withdraw(float c)
{
	balamount -= c;
	if(balamount < 500)
	{
		cout<<" Sorry your balance is not sufficient to withdraw "<<c<<"TK\n"<<" You have to store at least 500 TK to keep your account active\n"; 
		balamount += c;
	}
}

void bankAccount :: display(void)
{
	cout << "Name: " << name << '\n';
	cout << "Type of account: " << acctype << '\n';
	cout << "Account Number: " << accnumber << '\n';
	cout << "Balance: " << balamount << '\n';
}

int main()
{
	bankAccount account;
	int t = account.assign();
	if(t == 1)
	{
		cout << "Would you like to deposit: " << '\n' << "If no press 0" << '\n' << "If yes enter deposit amount" << '\n';
	float dp;
	cin >> dp;
	account.deposit(dp);
	cout << "Do you want to withdraw?? " << '\n' << "If no press 0" << '\n' << "If yes enter withdrawal amount" << '\n';
	float wd;
	cin >> wd;
	account.withdraw(wd);
	cout << "See details: " << '\n';
	account.display();
	}
	else if(t == 0)
	{ cout << "Thank you, see you again" << '\n'; }
	return 0;
}


