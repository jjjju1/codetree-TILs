#include <iostream>
#include <cmath>
using namespace std;

int main() {

	//input

	const int cmb_limits = 3;
	int cmb1[cmb_limits] = { 0 };
	int cmb2[cmb_limits] = { 0 };

	int n;
	cin >> n;

	for (int i = 0; i < cmb_limits; i++) {
		cin >> cmb1[i];
	}

	for (int i = 0; i < cmb_limits; i++) {
		cin >> cmb2[i];
	}

	//calculating ans
	int ans = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				bool isCmb1Satisfied = false;
				bool isCmb2Satisfied = false;
				if (
					(abs(cmb1[0] - i) <= 2 || abs(cmb1[0] - i) >= n - 2)
					&& (abs(cmb1[1] - j) <= 2 || abs(cmb1[1] - j) >= n - 2)
					&& (abs(cmb1[2] - k) <= 2 || abs(cmb1[2] - j) >= n - 2)
					) {
					ans++;
					isCmb1Satisfied = true;
				}

				if (
					(abs(cmb2[0] - i) <= 2 || abs(cmb2[0] - i) >= n - 2)
					&& (abs(cmb2[1] - j) <= 2 || abs(cmb2[1] - j) >= n - 2)
					&& (abs(cmb2[2] - k) <= 2 || abs(cmb2[2] - j) >= n - 2)
					) {
					ans++;
					isCmb2Satisfied = true;
				}

				if (isCmb1Satisfied && isCmb2Satisfied) {
					ans--;
				}
			}
		}
	}

	cout << ans << endl;

	return 0;
}