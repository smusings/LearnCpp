#include <iostream>
using namespace std;

int main()
{
	/*
	int myvar = 25;			//assigns 25 to memory
	int * foo = &myvar;			// assigns the location if memory of myvar to foo
	int bar = myvar;		// assigns 25 to bar
	int * baz = foo;			// points to the memrory of myvar
	baz = *foo;			// the value 25
	*/



	int firstvalue, secondvalue;

	int * mypointer;

	mypointer = &firstvalue;
	*mypointer = 10;
	mypointer = &secondvalue;
	*mypointer = 20;
	cout << "firstvalue is " << firstvalue <<endl;
	cout << "secondvalue is " << secondvalue <<endl;

	return 0;
}