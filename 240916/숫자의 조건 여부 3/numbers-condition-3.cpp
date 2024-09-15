#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;

	cout << ((a % 13 == 0 || a % 19 == 0) ? "True" : "False");
}