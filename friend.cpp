#include <iostream>
using namespace std;

class Mother {
public:
	Mother ()
	{cout << "Mother: no parameters\n";}
	Mother (int a)
	{cout << "Mother: int parameters\n";}
};

class Daughter: public Mother {
public:
	Daughter (int a)
	{
		cout << "Daughter: int paramater\n\n";
	}
};

class Son: public Mother {
public:
	Son(int a):Mother(a)
	{
		cout << "Son: int parameter\n\n";
	}
};

int main() {
	Daughter Anna(0);
	Son Eugene(0);

	return 0;
}