#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int h, w;
	cin >> h >> w;
	int b = 0;

	b = 10000 * w / (h * h);
	cout << b << endl;
	if (b >= 25) {
		cout << "Obesity" << endl;
	}
}