#include <iostream>
using namespace std;

int addition (int a, int b) {
	return a + b;
}

int subtraction(int a, int b) {
	return a - b;
}

int multiplication(int a, int b) {
	return a * b;
}

int division(int a, int b) {
	return a/b;
}

int main() {
	int w = addition(5,4);
	int x = subtraction(w,3);
	int y = multiplication(x,2);
	int z = division(y,3);
	cout << "The Addition is " << w <<endl;
	cout << "The Subtraction is " << x <<endl;
	cout << "The Multiplication is " << y <<endl;
	cout << "The Division is " << z <<endl;
}