#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int devs[6];

int min_val = INT_MAX;

int main() {
	
	int sumOfTotal = 0;
	
	for (int i = 0; i < 6; i++) {
		cin >> devs[i];
		sumOfTotal += devs[i];
	}

	int temp = sumOfTotal;

	for (int i = 0; i < 6; i++) {
		for (int j = i+1; j < 6; j++) {
			for (int k = j+1; k < 6; k++) {
				int sumOfTeam = devs[i] + devs[j] + devs[k];
				int sumOfOtherTeam = sumOfTotal - sumOfTeam;

				if (abs(sumOfTeam - sumOfOtherTeam) < min_val) {
					min_val = abs(sumOfTeam - sumOfOtherTeam);
				}
			}
		}
	}
	cout << min_val << endl;
}