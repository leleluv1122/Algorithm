#include <iostream>

using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	init();
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	int S = x1 * y2 + x2 * y3 + x3 * y1;
	S = S - y1 * x2 - y2 * x3 - y3 * x1;

	if (S > 0)
		cout << 1 << "\n";
	else if (S == 0)
		cout << 0 << "\n";
	else
		cout << -1 << "\n";
}