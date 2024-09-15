#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int a;
	cin >> a;

	if (a == 5) {
		cout << 'A';
	}
	if (a % 2 == 0) {
		cout << 'B';
	}

	return 0;
}