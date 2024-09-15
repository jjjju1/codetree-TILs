#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	cout << fixed << setprecision(2);
	cout << (a + b) / (a - b);
}