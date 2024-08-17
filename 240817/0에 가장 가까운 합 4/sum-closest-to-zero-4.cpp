#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>

using namespace std;

#define MAX_N 5000

int arr[MAX_N];
int min_diff = INT_MAX;

int main() {
	// input
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// calculating

	int fir{ 0 };
	int sec{ 0 };
	int thi{ 0 };
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (i == j || j == k || k == i) { continue; }
				int sum = 0;
				sum += (arr[i] + arr[j] + arr[k]);

				int diff = abs(sum);
				int temp = min_diff;
				min_diff = min(min_diff, diff);

				if (temp != min_diff) {
					fir = i;
					sec = j;
					thi = k;
				}
			}
		}
	}

	cout << arr[fir] << ' ' << arr[sec] << ' ' << arr[thi] << endl;

	return 0;
}