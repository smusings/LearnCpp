#include <iostream>
#include <string>
using namespace std;

class Example {
public:
	int total;
	void accumulate (int x) {
		total += x;
	}
};

class Example2 {
public:
	int total;
	Example2(int initial_value) : total(initial_value) {};
	void accumulate (int x) { total += x};
};

class Example3 {
	string data;
public:
	Example3 (const string& str) : data(str) {}
	Example3() {}
	const string& content() const {return data;}
};

class Example4 {
	string* ptr;
public:
	// constructor
	Example4() : ptr(new string) {}
	Example4 (const string& str): ptr(new string(str)) {}
	// deconstructor
	~Example4 () {delete ptr;}
	//access content:
	const string& content() const {return *ptr;}
};

int main() {
	Example ex;
	Example2 ex2 (100);
	Example3 ex3;
	Example3 ex3b ("Example");

	Example4 foo;
	Example4 bar ("Example");

	cout << "Bar's content: " << bar.content << endl;



	return 0;
	// deconstructor called now
}