#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int a, b;
	cin >> a;

	if (a % 3 == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	if (a % 5 == 0) {
		cout << "YES" << endl;
	}
	else { cout << "NO" << endl; }

	return 0;
}