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


	firstvalue = 5;
	secondvalue = 15;
	int * p1, * p2;

	p1 = &firstvalue;	// p1 = address of firstvalue
	p2 = &secondvalue;	//p2 = address of second value

	*p1 = 10;		// value pointed to by p1=10
	*p2 = *p1;		//value pointed by p2 = valye pointed to by p1
	p1 = p2;		// p1 = p2 (valyue of pointer is copied)
	*p1 = 20;		// valye pointed to by p1=20

	cout << "firstvalue is " << firstvalue <<endl;
	cout << "secondvalue is " << secondvalue <<endl;

	int myarray [5];
	int * arraypointer;

	arraypointer = myarray;

	* arraypointer = 10;
	arraypointer++;
	* arraypointer = 20;
	arraypointer = &myarray[2];
	* arraypointer = 30;
	arraypointer = myarray+3;
	* arraypointer = 40;
	arraypointer = myarray;
	* (arraypointer+4) = 50;

	for (int n = 0; n <5; n++)
	{
		cout << myarray[n] << ", ";
	}

	char a;
	char * b;
	char ** c;

	a = 'z';
	b = &a;
	c = &b;
	

	return 0;
}