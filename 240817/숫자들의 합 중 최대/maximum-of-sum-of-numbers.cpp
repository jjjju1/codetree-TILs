#include <iostream>
#include <algorithm>
using namespace std;

#include <climits>

int max_sum = INT_MIN;

int main() {
	int x, y;
	cin >> x >> y;

	
	for (int i = x; i <= y; i++) {
		int sumOfDigit = 0;
		int temp = i;
		while (temp != 0) {
			sumOfDigit += (temp % 10);
			temp /= 10;
		}
		
		max_sum = max(max_sum, sumOfDigit);
	}

	cout << max_sum << endl;
	
	return 0;
}