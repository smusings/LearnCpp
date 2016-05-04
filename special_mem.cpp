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

class Example5& operator= (const Example5& x) {
	delete ptr;
	ptr = new string (x.content());
	return *this;
}

class Example6 {
	string* ptr;
public:
	Example6 (const string& str) : ptr(new string(str)) {}
	~Example6 () {delete ptr;}
	Example6 (Example6&& x): prr(x.ptr) {x.ptr=nullptr;}
	Example6& operator = (Example6&& x) {
		delete ptr;
		ptr = x.ptr;
		x.ptr = nullptr;
		return *this;
	}
	const string& content() const {return *ptr;}
	Example6 operator+(const Example6& rhs) {
		return Example6(content()+rhs.content());
	}
};

class Rectangle {
    int width, height;
  public:
    Rectangle (int x, int y) : width(x), height(y) {}
    Rectangle() = default;
    Rectangle (const Rectangle& other) = delete;
    int area() {return width*height;}
};



int main() {
	Example ex;
	Example2 ex2 (100);
	Example3 ex3;
	Example3 ex3b ("Example");

	Example4 foo;
	Example4 bar ("Example");

	cout << "Bar's content: " << bar.content << endl;

	Example5 ex5a ("SKreee");
	Example5 ex5b = ex5a;

	cout << "ex5b content: " << ex5b.content() << endl;

	Rectangle foo;
  	Rectangle bar (10,20);

  	cout << "bar's area: " << bar.area() << endl;	

	return 0;
	// deconstructor called now
}