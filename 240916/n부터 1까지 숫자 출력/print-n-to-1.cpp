#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {

	int n;
	cin >> n;

	while (n >= 1) {
		cout << n-- << ' ';
	}
}