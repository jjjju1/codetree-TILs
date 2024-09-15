#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n < 0) {
		cout << "minus";
	}
	else {
		cout << n;
	}
}