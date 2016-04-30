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


int main() {
	Example ex;
	Example2 ex2 (100);
	Example3 ex3;
	Example3 ex3b ("Example");

	return 0;
}