#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int mt, ft;
	cin >> mt >> ft;

	int m = 0;

	if (mt >= 90) {
		if (ft >= 95) {
			m += 100000;
		}
		else if (ft >= 90) {
			m += 50000;
		}
	}

	cout << m;

}