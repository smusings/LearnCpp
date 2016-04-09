#include <iostream>
using namespace std;

//example of two overloaded functions
int operate(int a, int b)
{
	return a*b;
}

double operate(double a, double b)
{
	return a/b;
}

template <class T>
T sum(T a, T b)
{
	T result;
	result = a+b;
	return result;
}

int main()
{
	int x = 5, y = 2;
	double n = 5.0, m=2.0;
	cout << operate(x,y) << '\n';
	cout << operate(n,m) << '\n';
	cout << sum<int>(10,20) << '\n';
	cout << sum<double>(1.0, 1.5) << '\n';
	return 0;
}
