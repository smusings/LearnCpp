#include <iostream>
using namespace std;


class CVector {
public:
	int x, y;
	CVector () {};
	CVector(int a, int b) : x(a), y(b) {}
	CVector operator + (const CVector&);
};

CVector CVector::operator+ (const CVector& param) {
	CVector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return temp;
}

class Dummy {
public:
	static int n
	Dummy () {n++;}
};

int Dummy::n=0;

class MyClass {
public:
	int x;
	MyClass(int val) : x(val) {}
	int get() {return x;}
};


int main()
{
	CVector foo (3,1);
	CVector bar (1,2);
	CVector result;
	result = foo + bar;
	cout << result.x << "," << result.y << '\n';

	Dummy a;
	Dummy b[5];
	cout << a.n << endl;
	Dummy * c = new Dummy;
	cout << Dummy::n<<end;
	delete c;

	const MyClass mc(10);  // cannot alter members outside the class
	cout << mc.x << '\n';
	return 0;

	return 0;