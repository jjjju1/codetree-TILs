#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int am, ae;
	int bm, be;
	cin >> am >> ae >> bm >> be;

	if (am > bm) {
		cout << "A" << endl;
	}
	else if (am < bm) {
		cout << "B" << endl;
	}
	else {
		if (ae < be) {
			cout << "B";
		}
		else {
			cout << "A";
		}
	}

	
}