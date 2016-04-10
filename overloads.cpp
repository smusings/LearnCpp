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

template <class T, class U>
bool are_equal(T a, U b)
{
	return a==b;
}

template <class T, int N>
T fixed_multiply(T val)
{
	return val * N;
}

int main()
{
	int x = 5, y = 2;
	double n = 5.0, m=2.0;
	cout << operate(x,y) << '\n';
	cout << operate(n,m) << '\n';
	cout << sum(10,20) << '\n';		// don't need to pass in class
	cout << sum(1.0, 1.5) << '\n';
	cout << are_equal(10, 10.0) << '\n';
	cout << fixed_multiply<int, 3>(10) << '\n';
	return 0;
}
