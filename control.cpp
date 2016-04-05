#include <iostream>
#include <string>
using namespace std;

int main () {
	int x;
	cin >> x;
	if (x == 100)
	{
		cout << "X is 100" << endl;
	}
	else if (x < 100)
	{
		cout << "X is less than 100: " << x << endl;
	}
	else
	{
		cout << "X is :" << x << endl;
	}

	int n = 10;

	while (n>0) {
		cout << n;
		if (n != 1)
		{
			cout << ",";
		}
		--n;
	}

	string strz;
	do {
		cout << "Enter text: ";
		getline (cin, strz);
		cout << "You entered: " << strz << "\n";
	} while (strz != "goodbye");
	
	cout << "\n";

	for (int n = 10; n>0; n--) {
		cout << n << ", ";
	}
	cout << "\n";

	for ( n = 100, int i = 100; n!=i; ++n, --n)
	{
		cout << n << ","<<i endl;
	}
}