#include <iostream>
#include <cmath>
using namespace std;

int main() {

	//input

	int cmb1[3] = { 0 };
	int cmb2[3] = { 0 };

	int n;
	cin >> n;

	for (int i = 0; i < 3; i++) {
		cin >> cmb1[i];
	}

	for (int i = 0; i < 3; i++) {
		cin >> cmb2[i];
	}

	int ans = 0;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (
					(abs(cmb1[0] - i) <= 2 || abs(cmb1[0] - i) >= n - 2)
					&& (abs(cmb1[1] - j) <= 2 || abs(cmb1[1] - j) >= n - 2)
						&& (abs(cmb1[2] - k) <= 2 || abs(cmb1[2] - j) >= n - 2)
				) {
					ans++;
				}

				if (
					(abs(cmb2[0] - i) <= 2 || abs(cmb2[0] - i) >= n - 2)
					&& (abs(cmb2[1] - j) <= 2 || abs(cmb2[1] - j) >= n - 2)
					&& (abs(cmb2[2] - k) <= 2 || abs(cmb2[2] - j) >= n - 2)
					) {
					ans++;
				}
			}
		}
	}

	cout << --ans << endl;

	return 0;
}