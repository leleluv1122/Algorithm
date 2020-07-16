#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	vector<int> v(3);

	while (1) {
		cin >> v[0] >> v[1] >> v[2];
		if (v[0] == 0 && v[1] == 0 && v[2] == 0)
			break;
		sort(v.begin(), v.end());

		int a = pow(v[0], 2);
		int b = pow(v[1], 2);
		int c = pow(v[2], 2);

		if (c == a + b)
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
}