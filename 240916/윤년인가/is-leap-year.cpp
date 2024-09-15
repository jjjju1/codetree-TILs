#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int year;
	cin >> year;

	bool isYoonYear = false;

	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				isYoonYear = true;
			}
		}
		else {
			isYoonYear = true;
		}
	}

	cout << (isYoonYear ? "true" : "false");
}