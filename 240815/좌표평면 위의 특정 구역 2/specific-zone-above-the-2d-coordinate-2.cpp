#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

#define MAX_N 100

int point[MAX_N][2];

int main() {

	// input

	int n; // number of points
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			std::cin >> point[i][j];
		}
	}

	int min_area = INT_MAX;

	for (int j = 0; j < n; j++) {

		int area = 0; // 한 텀이 돌 때마다 초기화, 최소 넓이 체크는 그 밑에서 할 것

		int min_x = 40001;
		int min_y = 40001;
		int max_x = -1;
		int max_y = -1;

		for (int k = 0; k < n; k++) { // j번째 점과 나머지 점으로 최소 넓이를 계산하기 위함
			if (j == k) { continue; } // 점 하나 제외하기

			min_x = min(min_x, point[k][0]);
			max_x = max(max_x, point[k][0]);
			min_y = min(min_y, point[k][1]);
			max_y = max(max_y, point[k][1]);
		}

		//std::cout << "max_x, min_x: " << max_x << ", " << min_x << endl;
		//std::cout << "max_y, min_y: " << max_y << ", " << min_y << endl;
		// 넓이 계산
		area = (max_x - min_x) * (max_y - min_y);
		min_area = min(min_area, area);

		//std::cout << "area: " << area << endl;
	}

	std::cout << min_area << endl;

	return 0;
}