#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int min = a;
	if (min > b) { min = b; }
	if (min > c) { min = c; }

	cout << min << endl;
}