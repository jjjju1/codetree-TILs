#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int max = -101;

	int a, b, c;
	cin >> a >> b >> c;

	if (a > max) {
		max = a;
	}
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}

	cout << max << endl;
}