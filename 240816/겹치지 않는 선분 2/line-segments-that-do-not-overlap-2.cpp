#include <iostream>
using namespace std;

constexpr auto MAX_N = 100;

int x_1[MAX_N];
int x_2[MAX_N];

int y_1[MAX_N];
int y_2[MAX_N];
int main() {
	int n;
	cin >> n; // 선분의 개수

	for (int i = 0; i < n; i++) {
		cin >> x_1[i] >> x_2[i];
		y_1[i] = i % 2; // y_1 = 0
		y_2[i] = (i + 1) % 2; // y2 = 1
	}

	int ans = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (x_2[i] > x_2[j]) {
				if (ans == 0) { ans += 2; }
				else { ans += 1; }
			}
		}
	}

	cout << n - ans << endl;

	return 0;
}