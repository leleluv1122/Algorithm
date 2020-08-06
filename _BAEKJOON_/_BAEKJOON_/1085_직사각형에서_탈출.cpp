#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
int x, y, w, h;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int Mini() {
	int a = 0;

	a = min(w - x, x);
	a = min(a, min(h - y, y));
	return a;
}

int main() {
	init();
	cin >> x >> y >> w >> h;

	cout << Mini() << "\n";
}