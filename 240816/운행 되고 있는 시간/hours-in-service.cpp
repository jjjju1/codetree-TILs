#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

#define MAX_N 100
#define MAX_TIME 1000

class Devs {
public:
	int begin_t, end_t;
	Devs() : begin_t(0), end_t(0) {}
	~Devs() {}
};

int max_running_time = INT_MIN;
int max_overlap_time = INT_MIN;

int main() {
	int n;
	cin >> n;


	Devs work_t[MAX_N];

	for (int i = 0; i < n; i++) {
		cin >> work_t[i].begin_t >> work_t[i].end_t;
	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {
			if (i == j) { continue; }
			int running_time = work_t[i].end_t - work_t[i].begin_t;
			running_time += (work_t[j].end_t - work_t[j].begin_t);

			// 중복 체크

			if (work_t[j].end_t > work_t[i].begin_t) {
				running_time -= abs(work_t[i].begin_t - work_t[j].end_t);
			}
			if (work_t[i].end_t < work_t[j].begin_t) {
				running_time -= abs(work_t[j].begin_t - work_t[i].end_t);
			}
			max_running_time = max(max_running_time, running_time);
		}

	}

	cout << max_running_time << endl;
	return 0;

}