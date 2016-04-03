#include <iostream>
#include <string>
using namespace std;


#define PI 3.14159
#define NEWLINE '\n'

const double pi = 3.141459;
const char newline = '\n';


int main()
{
	int a,b,result;

	a = 5;
	b = 2;
	a = a + 1;
	result = a - b;
	cout << result <<endl;		//endl = end the line

	string mystring;
	mystring = "This is a string";
	cout << mystring <<endl;

	double r = 5.0;
	double circle;

	circle = 2 * pi * r;
	cout << circle;
	cout << newline;

	circle = 2 * PI * r;
	cout << circle;
	cout << NEWLINE;

	return 0; //terminates the program
}