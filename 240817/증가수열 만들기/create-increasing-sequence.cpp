#include <iostream>
using namespace std;

#define MAX_N 100

int arr[MAX_N];

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int ans = 0;

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			while (arr[j] >= arr[j + 1]) {
				arr[j]--;
				ans++;
			}

			if (arr[j + 1] <= arr[j]) {
				break;
			}
		}
	}

	cout << ans << endl;

	return 0;
}