#include <iostream>
using namespace std;

#define MAX_N 100

int main() {
	int n;
	cin >> n;
	
	int arr[MAX_N] = { 0 };

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int ans = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int avr = (arr[i] + arr[j]) / (j - i + 1);
			for (int k = i; k < j; k++) {
				if (arr[k] == avr) {
					ans++; break;
				}
			}
		}
	}

	cout << ans << endl;

	return 0;
}