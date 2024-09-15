#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 0; i < 5; i++) {
		cout << n * (i + 1) << ' ';
	}
	
}