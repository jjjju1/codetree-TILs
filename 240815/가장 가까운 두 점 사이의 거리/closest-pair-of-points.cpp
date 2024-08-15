#include <cmath>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>

using namespace std;

#define MAX_N 100

int points[MAX_N][2];

int main() {
	//input
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> points[i][j];
		}
	}

	int min_dist = INT_MAX;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) { continue; }
			int dist = static_cast<int>(pow(abs(points[i][0] - points[j][0]), 2)
				+ pow(abs(points[i][1] - points[j][1]), 2));
			min_dist = min(min_dist, dist);
		}
	}

	cout << min_dist << endl;

	return 0;

}