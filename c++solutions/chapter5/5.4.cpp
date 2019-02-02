#include <iostream>
using namespace std;

class vectors
{
	float *p;
	int size;
	public:
		void create(int a);
		void setelement(int a, float value);
		void modify(void);
		void multiply(float b);
		void display(void);
		void add(vectors , vectors);
};

void vectors :: create(int a)
{
	size = a;
	p = new float[size];
}

void vectors :: setelement(int a, float value)
{
	p[a] = value;
}

void vectors :: display(void)
{
	cout << "p[" << size << "] = (";
	for(int i = 0; i < size; i++)
	{
		if(i == size - 1)
			cout << p[i];
		else 
			cout << p[i] << ",";
	}
	cout << ")\n";
}

void add(vectors v1, vectors v2)
{
	float *sum;
	cout << "sum[" << size << "] = (";
	sum = new float[size];
	for(int i = 0; i < size; i++)
	{
		sum[i] = v1.p[i] + v2.p[i];
		if(i == size - 1)
			cout << sum[i];
		else
			cout << sum[i] << ",";
	}
	cout << ")\n";
}

int main()
{
	vectors x1, x2, x3;
	cout << "Enter the size of the vectors: \n";
	int s;
	cin >> s;
	x1.create(s);
	x2.create(s);
	x3.create(s);
	cout << "Enter the values for the vector1: \n";
	for(int i = 0; i < s; i++)
	{
		float v;
		cin >> v;
		x1.setelement(i, v);	
	}
	cout << "Enter the values for the vector2: \n";
	for(int i = 0; i < s; i++)
	{
		float v;
		cin >> v;
		x2.setelement(i, v);	
	}
	cout << "Enter the values for the vector3: \n";
	for(int i = 0; i < s; i++)
	{
		float v;
		cin >> v;
		x3.setelement(i, v);	
	}	
	cout << "The vector1 is: \n";
	x1.display();
	cout << "The vector2 is: \n";
	x2.display();
	cout << "The vector3 is: \n";
	x3.display();
	add(x1, x2);
	return 0;
}

















