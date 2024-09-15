#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	double sight;
	cin >> sight;
	if (sight >= 1.0) {
		cout << "High";
	}
	else if (0.5 <= sight && sight < 1.0) {
		cout << "Middle";
	}
	else {
		cout << "Low";
	}
}