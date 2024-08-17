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
		while (arr[i] >= arr[i + 1]) {
			arr[i]--;
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}