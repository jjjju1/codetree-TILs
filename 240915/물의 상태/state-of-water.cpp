#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;

	if (n >= 100) { cout << "vapor"; }
	else if (n < 0) { cout << "ice"; }
	else {
		cout << "water";
	}
}