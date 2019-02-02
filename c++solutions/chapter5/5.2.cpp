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

void vectors :: multiply(float b)
{
	for(int i = 0; i < size; i++)
		p[i] = p[i]*b;
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

void vectors :: modify(void)
{
	cout << "To edit a particular element, enter the position: \n ";
	int i;
	cin >> i;
	i--;
	cout << "Enter the new value for " << i+1 << "position\n";
	float a;
	cin >> a;
	p[i] = a;
	cout << "Now new contents are: \n";
	display();

	cout << "To delete an element enter position of the element: \n";
	int j;
	cin >> j;
	j--;
	for(int k = j; j < size; j++)
		p[k] = p[k+1];
	size--;
	cout << "New contents are: \n";
	display();
}

int main()
{
	vectors vector;
	cout << "Enter the size of the vector: \n";
	int s;
	cin >> s;
	vector.create(s);
	cout << "Enter the values for the vector: \n";
	for(int i = 0; i < s; i++)
	{
		float v;
		cin >> v;
		vector.setelement(i, v);	
	}	
	cout << "The vector is: \n";
	vector.display();
	cout << "To multiply the vector by a scalar value enter the scalar value: \n";
	float scalar;
	cin >> scalar;
	vector.multiply(scalar);
	cout << "Now the vector is as follows: \n";
	vector.display();
	vector.modify();
	return 0;
}

















