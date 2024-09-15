#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {

	int a, b;
	cin >> a >> b;

	for (int i = a; i <= b; i++) {
		if (i % 2 == 1) { cout << i << ' '; }
	}
}