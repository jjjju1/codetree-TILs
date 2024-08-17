// 1 2 7 10
// min: 1, max: 10

#include <iostream>
#include <algorithm>

#define MAX_N 10000
using namespace std;

int arr[MAX_N];

int main() {
	int n;
	cin >> n;

	int sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	int aver = sum / n;

	int ans = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] < aver) {
			while (arr[i] != aver) {
				arr[i]++;
				ans++;
			}
		}
		else if (arr[i] > aver) {
			while (arr[i] != aver) {
				arr[i]--;
				ans++;
			}
		}
		else {
			continue;
		}
	}
	cout << ans / 2 << endl;

	return 0;

	
}