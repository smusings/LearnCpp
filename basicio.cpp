#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// cin = standard input stream
// cout = standard output stream
// cerr = standard error (output stream)
// clog = standard logging (output) stream

int main ()
{

	int age;
	cin >> age;		// sets age
	cout << "This "<<"is a "<<"single C++ statement" <<endl;
	cout << "I am " << age << " years old!" <<endl;

	string mystr ("1204");
	int myint;
	stringstream(mystr) >> myint;
	cout << myint;
}