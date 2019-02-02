#include<iostream>
#define size 8

using namespace std;

class vector
{
	float *p;
		
 	public:
 		void creat_vector(void);
 		void set_element(int i,float value);
 		friend void add(vector v1,vector v2);

};

void vector::creat_vector(void)
{
	p=new float[size];
}

void vector::set_element(int i,float value)
{
	p[i]=value;
}

void add(vector v1,vector v2)
{
	float *sum;
 	cout<<"sum["<<size<<"] = (";
	sum= new float[size];

 	for(int i=0;i<size;i++)
 	{
		sum[i]=v1.p[i]+v2.p[i];
		if(i==size-1)
			cout<<sum[i];

		else
			cout<<sum[i]<<" , ";
	}
	cout<<")\n";
}

int main()
{
	vector x1,x2,x3;
	x1.creat_vector();
 	x2.creat_vector();
 	x3.creat_vector();
 	cout<<" Enter "<<size<<" elements of FIRST vector : ";
 	for(int i=0;i<size;i++)
 	{
		float v;
		cin>>v;
		x1.set_element(i,v);
 	}
 	cout<<" Enter "<<size<<" elements of SECOND vector : ";
 	for(i=0;i<size;i++)
 	{
		float v;
		cin>>v;
		x2.set_element(i,v);
 	}
 	add(x1,x2);

 	return 0;
}

