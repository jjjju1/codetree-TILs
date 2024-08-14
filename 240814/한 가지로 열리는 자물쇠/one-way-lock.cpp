#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int ans = 0;

	int cmb[3] = { 0 };

	for (int i = 0; i < 3; i++) {
		cin >> cmb[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (abs(i - cmb[0]) <= 2 || abs(j - cmb[1]) <= 2 || abs(k - cmb[2]) <= 2) {
					ans++;
				}
			}
		}
	}

	cout << ans << endl;

	return 0;
}