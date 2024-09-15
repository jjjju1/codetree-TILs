#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n >= 3000) {
		cout << "book";
	}
	else if (1000 <= n && n < 3000) {
		cout << "mask";
	}
	else {
		cout << "no";
	}
}