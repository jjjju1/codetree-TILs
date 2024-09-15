#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {

	int n;
	cin >> n;

	int i = 1;
	while (i <= n) {
		if (i % 3 == 0) {
			cout << i << ' ';
		}

		i += 1;
	}
}