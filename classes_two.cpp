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
	static int n;
	Dummy () {n++;}
};

int Dummy::n=0;

class MyClass {
	int x;
public:
	MyClass(int val) : x(val) {}
	const int& get() const {return x;}
	int& get() {return x;}
};

// template
template <class T>
class temp {
	T a, b;
public:
	temp(T first, T second)
	{
		a = first;
		b = second;
	}
	T getmax();
};

template <class T>
T temp<T>::getmax()
{
	T retval;
	retval = a>b? a:b;
	return retval;
}

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
	cout << Dummy::n;
	delete c;

	MyClass m(10);
	const MyClass mc(20);  // cannot alter members outside the class
	m.get() = 15;
	cout << m.get() << endl;
	cout << mc.get() << endl;

	temp <int> myobject(100,7);
	cout << myobject.getmax();

	return 0;
}