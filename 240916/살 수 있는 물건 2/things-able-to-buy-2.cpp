#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int m;
	cin >> m;

	if (m >= 3000) {
		cout << "book";
	}
	else if (m >= 1000) {
		cout << "mask";
	}
	else if (m >= 500) {
		cout << "pen";
	}
	else {
		cout << "no";
	}
}