#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int min = a;
	if (min > b) { min = b; }
	if (min > c) { min = c; }

	if (a == min) {
		cout << 1 << ' ';
	}
	else {
		cout << 0 << ' ';
	}
	
	if (a == b && b == c) {
		cout << 1 << endl;
	}
	else {
		cout << 0;
	}
}