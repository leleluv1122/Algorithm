#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main() {
	vector<int> v;
	int n, m;
	cin >> n >> m;
	bool b = true;
	int first, sum = 0;
	for (int i = 1; i <= 100; i++) {
		int s = i * i;
		if (s >= n && s <= m) {
			if (b) {
				b = false;
				first = s;
			}
			sum += s;
		}
	}
	if (!sum) {
		cout << -1;
		exit(0);
	}

	cout << sum << "\n" << first;
}