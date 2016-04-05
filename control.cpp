#include <iostream>
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

	cout << "\n";
}