#include <iostream>
#include <cmath>
using namespace std;

#define MAX_N 100

class LineSegment {
public:
	double x_1, x_2;
	double y_1, y_2;
	long double slope;
	bool isOverlapped;

	LineSegment() {
		isOverlapped = false;
		x_1 = 0;
		x_2 = 0;
		y_1 = 0;
		y_2 = 1;
		slope = 0;
	}
	~LineSegment() {}
};

int main() {
	
	// input
	
	int n;
	cin >> n;

	LineSegment line[MAX_N];

	for (int i = 0; i < n; i++) {
		cin >> line[i].x_1 >> line[i].x_2;
		line[i].y_1 = 0;
		line[i].y_2 = 1;
		line[i].slope = (line[i].y_1 - line[i].y_2) / (line[i].x_1 - line[i].x_2);
		//std::cout << "line[" << i << "].slope: " << line[i].slope << endl;
	}
	
	// calculating ans

	int ans = n; // n: number of lines

	// i번째 라인을 기준으로 j번째 라인을 순회하면서 완전탐색

	int overlapped_line = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (line[i].slope * line[j].slope < 0) { // 두 선분의 기울기가 다를 때
				if (line[i].slope > 0 && line[j].slope < 0) {
					if (line[i].x_2 > line[j].x_2) {
						line[i].isOverlapped = true;
						line[j].isOverlapped = true;
					}
				}
				
				if (line[i].slope < 0 && line[j].slope > 0) {
					if (line[i].x_2 < line[j].x_2) {
						line[i].isOverlapped = true;
						line[j].isOverlapped = true;
					}
				}
			}
			else if (line[i].slope * line[j].slope > 0) { // 두 선분의 기울기가 같을 때

				if (line[i].slope > 0 && line[j].slope > 0) {
					if (line[i].x_2 > line[j].x_2) {
						line[i].isOverlapped = true;
						line[j].isOverlapped = true;
					}
				}
				
				if (line[i].slope < 0 && line[j].slope < 0) {
					if (line[i].x_2 < line[j].x_2) {
						line[i].isOverlapped = true;
						line[j].isOverlapped = true;
					}
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		if (line[i].isOverlapped == true) { overlapped_line++; }
	}

	ans -= overlapped_line;

	std::cout << ans << endl;

	return 0;
}