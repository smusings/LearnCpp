#include <iostream>
using namespace std;


int main()
{
	int foo[5] = {1, 2, 4, 5, 5};
	cout << foo << endl;
	int bar[5] = {3, 2, 1};
	cout << bar << endl;
	int baz[5] = {};
	cout << baz << endl;

	int matrix[3][5];

	for (int n = 0; n<5; ++n)
	{
		matrix[0][n] = foo[n];
	}
	for(int n = 0; n<3; ++n)
	{
		matrix[n][0] = bar[n];
	}

	cout << matrix <<endl;



	return 0;
}