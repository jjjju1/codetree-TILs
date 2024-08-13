#include <iostream>
using namespace std;

#define MAX_N 100

int main() {
	int n;
	cin >> n;
	
	double arr[MAX_N] = { 0 };

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int ans = 0;

	for (int i = 0; i < n; i++) {
		ans++;
		for (int j = i+1; j < n; j++) {
			//cout << i << ' ' << j << endl;
			double avr = 0;
			double sum_val = 0;
			for (int k = i; k <= j; k++) {
				sum_val += arr[k];
			}
			avr = static_cast<double>(sum_val) / (j - i + 1);
			//cout << "sum_val: " << sum_val << endl;
			//cout << "avr: " << avr << endl;
			for (int k = i; k <= j; k++) {
				//cout << avr << " == " << arr[k] << endl;
				if (avr == arr[k]) { ans++; break; }
			}
		}
	}

	cout << ans << endl;

	return 0;
}