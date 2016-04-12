#include <iostream>
using namespace std;


void print_array(int arg[], int length)
{
	for (int n=0; n<length; ++n)
		cout << arg[n] << ' ';
	cout << endl;
}

void print_two_d_array(int arg[][5], int x, int y)
{
	for (int i=0; i<x; ++i)
		for(int j=0; j<y; ++j)
			cout<< arg[i][j] << ' ';
		cout << endl;
	cout << endl;
}

int main()
{
	int foo[5] = {1, 2, 4, 5, 5};
	print_array(foo, 5);
	int bar[5] = {3, 2, 1};
	print_array(bar, 5);
	int baz[5] = {};
	print_array(baz, 5);

	int matrix[3][5];

	for (int n = 0; n<5; ++n)
	{
		matrix[0][n] = foo[n];
	}
	for(int n = 0; n<3; ++n)
	{
		matrix[n][0] = bar[n];
	}
	print_two_d_array(matrix, 3, 5);



	return 0;
}