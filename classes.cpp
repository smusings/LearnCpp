#include <iostream>
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle();
	Rectangle(int, int);
	int area (void) {return width*height;}
};

class Circle {
	double radius;
public:
	Circle();
	Circle(double r) { radius = r;}
	double circum() {return 2*radius*3.14159265;}
};

class Cylinder {
	Circle base;
	double height;
public:
	Cylinder(double r, double h) : base(r), height(h) {}
	double volume() {return base.circum() * height;}
};

Rectangle::Rectangle() {
	width = 5;
	height = 5;
}

Rectangle::Rectangle(int a, int b) {
	width = a;
	height = b;
}

int main() {
	Rectangle rect (3, 4);
	Rectangle rectb;
	cout << "Area: " << rect.area() << endl;
	cout << "Area: " << rectb.area() << endl;

	Circle foo (10.0);
	Circle bar = 20.0;

	cout << "foo's circum: "<< foo.circum() << endl;
	cout << "bar's circum: "<< bar.circum() << endl;

	Cylinder cyl (10, 20);

	cout << "Foo's volume: " << cyl.volume() << endl;

	Rectangle *rec;
	rec = &rect;
	cout << "Pointer: " << rec->area() <<endl;
	delete rec;
	cout << rec<<endl;

	return 0;
}