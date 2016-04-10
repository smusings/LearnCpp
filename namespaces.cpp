#include <iostream>
using namespace std;

int foo;

int some_function ()
{
	int bar;
	bar = 0;	// local variable only
	return bar;
}

int other_function()
{
	foo = 1;	//changes the global variable
	return foo;
}

namespace fo
{
	int value() { return 5; }
}

namespace bar
{
	const double pi = 3.1416;
	double value() { return 2* pi;}
}

namespace bar
{
	const double something = 1234.567;
}

int main()
{
	cout << some_function();
	cout << other_function();
	cout << foo << endl;

	int x = 10;
	int y = 20;
	{
		int x;
		x = 50;
		y = 50;
		cout << "inner block: \n";
		cout << "x: "<< x <<endl;
		cout << "y: "<< y <<endl;
	}
	cout << "outer block: \n";
	cout << "x: "<< x <<endl;
	cout << "y: "<< y <<endl;
	

	cout << fo::value() << endl;
	cout << bar::value() << endl;
	cout << bar::pi << endl;

	{
		using bar::pi;
		cout << pi <<endl;
	}

	return 0;
}