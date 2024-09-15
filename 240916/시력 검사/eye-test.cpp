#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	double ls, rs;
	cin >> ls >> rs;
	
	if (ls >= 1.0 && rs >= 1.0) {
		cout << "High" << endl;
	}
	else if (ls >= 0.5 && rs >= 0.5) {
		cout << "Middle" << endl;
	}
	else {
		cout << "Low";
	}
}