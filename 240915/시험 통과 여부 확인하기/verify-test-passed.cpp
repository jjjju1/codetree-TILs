#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n >= 80) {
		cout << "pass";
	}
	else {
		cout << 80 - n << " more score";
	}
}