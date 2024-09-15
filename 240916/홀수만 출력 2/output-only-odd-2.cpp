#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
	int a, b;
	cin >> b >> a;

	for (int i = b; i >= a; i--) {
		if (i % 2 == 1) {
			cout << i << ' ';
		}
	}
}