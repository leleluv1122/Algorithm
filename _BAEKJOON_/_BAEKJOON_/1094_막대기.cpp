#include <iostream>

using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int x; cin >> x;

	int cnt = 0;
	int idx = 64;
	int rst = 0;
	while (1) {
		if (rst == x)
			break;

		if (idx > x - rst)
			idx /= 2;
		else {
			rst += idx;
			idx /= 2;
			cnt++;
		}
	}
	cout << cnt << "\n";
}