#include <iostream>
#define SIZE 10
using namespace std;

char serial[SIZE] = {"First","Second","Third","Fourth","Fifth","Sixth","Seventh","Eighth","Ninth","tenth"};

class bank
{
	char name[40];
	int accnumber;
	char actype[20];
	float bal;
	public:
		void assign(void);
		void deposit(float b);
		void withdraw(float c);
		void displayon(void);
		void displayoff(void);
};

void bank :: assign(void)
{
	float initial;
	cout<<" You have to pay 500 TK to open your account \n"<<" You have to store at least 500 TK to keep your account active\n"<<"Would you want to open a account????\n"<<" If Yes press 1 \n"<<" If No press 0 : ";
	int test;
	cin >> test; 
	if(test == 1)
	{
		initial = 500;
		bal = initial;
		cout << "Enter the name, account type and account number to create account\n";
		cin >> name >> actype >> accnumber;
	}
	else
	;
	//return test;
}

void bank :: deposit(float b)
{
	bal += b;
}

void bank :: withdraw(float c)
{
	bal -= c;
	if(bal < 500)
	{
		cout<<" Sorry your balance is not sufficient to withdraw "<<c<<"TK\n"<<" You have to store at least 500 TK to keep your account active\n";
		bal += c; 
	}
}

void bank :: displayon(void)
{
	cout << "Name: " << name << '\n';
	cout << "Account Type: " << actype << '\n';
	cout << "Account Number: " << accnumber << '\n';
}

void bank :: displayoff(void)
{
	cout << "Account has not been created\n";
}

int main()
{
	bank account[SIZE];
	int t[10];
	for(int i = 0; i < SIZE; i++)
	{
		cout << "Enter details for " << serial[i] << " customer \n";
		t[i] = account[i].assign();
		if(t[i] == 1)
		{
			cout << "Would you like to deposit: " << '\n' << "If no press 0" << '\n' << "If yes enter deposit amount" << '\n';
			float dp;
			cin >> dp;
			account[i].deposit(dp);
			cout << "Do you want to withdraw?? " << '\n' << "If no press 0" << '\n' << "If yes enter withdrawal amount" << '\n';
			float wd;
			cin >> wd;
			account[i].withdraw(wd);
		}
		else if(t[i] == 0)
		{ cout << "Thank you, see you again" << '\n'; }
	
	}
	cout << "See details: \n";
	for(int i = 0; i < SIZE; i++)
	{
		if(t[i] == 1)
			account[i].displayon();
		else if(t[i] == 0)
			account[i].displayoff();
	}
	return 0;
}























