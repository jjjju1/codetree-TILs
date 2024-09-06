#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 1000
constexpr auto MAX_B = 1000;

int main() {
	int stu[MAX_N];
	int n, b;
	cin >> n >> b;

	for (int i = 0; i < n; i++) {
		cin >> stu[i];
	}

	int available_max = INT_MIN;

	int temp[MAX_N];

	for (int i = 0; i < n; i++) {
		temp[i] = stu[i];
	}

	int result = INT_MIN;
	int available_stu = 0;

	for (int i = 0; i < n; i++) {
		available_stu = 0;
		int sum = stu[i] / 2;
		for (int j = 0; j < n; j++) {

			if (i == j) { continue; }
			for (int k = 0; k < n; k++) {
				temp[k] = stu[k];
			}
			sum += stu[j];
			available_stu++;
			if (sum > b) { continue; }
		}
		result = max(available_stu, result);
	}

	cout << result << endl;

}