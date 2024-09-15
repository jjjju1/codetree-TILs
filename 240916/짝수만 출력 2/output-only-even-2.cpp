#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {

	int a, b;
	cin >> b >> a;

	while (b >= a) {
		cout << b << ' ';
		b -= 2;
	}
}