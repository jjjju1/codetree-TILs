#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v;

	for (int i = 0; i < n; i++) {
		string comm;
		cin >> comm;

		if (comm == "push_back") {
			int push_n;
			cin >> push_n;

			v.push_back(push_n);
		}
		else if (comm == "get") {
			int get_n;
			cin >> get_n;

			cout << v[get_n - 1] << endl;
		}
		else if (comm == "size") {
			cout << v.size() << endl;
		}
		else if (comm == "pop_back") {
			v.pop_back();
		}
		else {
			return 0;
		}
	}

	return 0;
}