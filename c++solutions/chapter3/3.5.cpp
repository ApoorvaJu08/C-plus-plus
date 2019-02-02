#include <iostream>
using namespace std;

enum candidate
{c1 = 1, c2, c3, c4, c5};

int main()
{
	int count[5];
	int vote;
	int sp = 0;
	for(int i = 0; i < 5; i++)
	{
		count[i] = 0;
	}
	cout << "Enter your vote and for no vote enter number more than 5 and negative number for exit" << '\n';
	while(1)
	{
		cin >> vote;
		for(int i = c1; i <= c5; i++)
		{
			if(vote == i)
			{
				count[i-1]++;
			}		
		}
		if(vote < 0)
			break;
		else if(vote > 5)
			sp++;
	}
	for(int k=1;k<=5;k++)
	cout<<" candidate "<<k<<"   ";
	cout<<'\n';
	for(int k=0;k<5;k++)
	cout<<count[k]<<"   ";
	cout<<'\n';
	cout<<" spoilt_ballot "<<sp<< '\n';	
	return 0;
}
