#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;

#define MAX_N 100
int point[MAX_N][2]; // 0 = x, 1 = y

int main() {
	int n;
	cin >> n;

	bool isThereAnswer = false;

	int max_area = INT_MIN;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> point[i][j];
		}
	}

	// 모든 점 조사

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				bool isThereValidTriangle = false;
				// 같은 점은 조사 X
				if (i == j || j == k || k == i) { continue; }

				// 직각삼각형인지 여부 조사
				int xCount = 0;
				int yCount = 0;

				// x 또는 y 좌표가 모두 같은 세 점 제거
				if (point[i][0] == point[j][0] && point[j][0] == point[k][0]) { continue; }
				if (point[i][1] == point[j][1] && point[j][1] == point[k][1]) { continue; }

				// 다른 점이지만 좌표가 겹치는 점 제거
				if (point[i][0] == point[j][0] && point[i][1] == point[j][1]) { continue; }
				if (point[i][0] == point[k][0] && point[i][1] == point[k][1]) { continue; }
				if (point[j][0] == point[k][0] && point[j][1] == point[k][1]) { continue; }

				// 조건에 맞는지, 즉 직각삼각형인지 여부 조사
				int x_dist = -1;
				int y_dist = -1;

				// 높이 구하기
				if (point[i][0] == point[j][0]) { y_dist = abs(point[i][1] - point[j][1]); }
				if (point[j][0] == point[k][0]) { y_dist = abs(point[j][1] - point[k][1]); }
			 	if (point[i][0] == point[k][0]) { y_dist = abs(point[i][1] - point[k][1]); }
			
				// 밑변 구하기
				if (point[i][1] == point[j][1]) { x_dist = abs(point[i][0] - point[j][0]); }
				if (point[j][1] == point[k][1]) { x_dist = abs(point[j][0] - point[k][0]); }
				if (point[i][1] == point[k][1]) { x_dist = abs(point[i][0] - point[k][0]); }

				if (y_dist != -1 && x_dist != -1) { isThereValidTriangle = true; }

				if (isThereValidTriangle) {
					int area = x_dist * y_dist;

					max_area = max(max_area, area);

					isThereAnswer = true;
				}
			}
		}
	}

	// 조건에 맞는 삼각형이 없을 경우 0 출력 후 프로그램 종료
	if (!isThereAnswer) {
		cout << 0 << endl;
		return 0;
	}

	cout << max_area<< endl;
	return 0;
}