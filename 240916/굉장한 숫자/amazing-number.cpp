#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;

	cout << (((a % 2 == 1 && a % 3 == 0) || (a % 2 == 0 && a % 5 == 0)) ? "true" : "false");
}