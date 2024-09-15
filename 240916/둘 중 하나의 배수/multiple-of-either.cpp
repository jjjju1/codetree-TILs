#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;

	cout << ((a % 3 == 0 || a % 5 == 0) ? 1 : 0);
}