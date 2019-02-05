#include <iostream>
using namespace std;

class matrix
{
	int **p; //pointer to matrix
	int d1, d2; // dimensions
	public:
		matrix(int x, int y);
		void getelement(int i, int j, int value)
		{ p[i][j] = value; }
		int & putelement(int i, int j)
		{ return p[i][j]; }
};

matrix :: matrix(int x, int y)
{
	d1 = x;
	d2 = y;
	p = new int *[d1];    //creates an array pointer
	for(int i = 0; i < d1; i++)
		p[i] = new int[d2];
}

int main()
{
	int m, n;
	cout << "Enter size of matrix: ";
	cin >> m >> n;
	matrix A(m, n);   //matrix object A constructed
	cout << "Enter matrix elements row by row \n";
	int i, j, value;
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
		{
			cin >> value;
			A.getelement(i, j, value);
		}
	cout << "\n";
	cout << A.putelement(1,2);
	return 0;
}






