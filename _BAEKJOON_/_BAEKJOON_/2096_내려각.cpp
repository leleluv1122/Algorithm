#include <iostream>
#include <algorithm>

using namespace std;

int N;
int a, b, c;
int maxarr[3], minarr[3];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N;
	cin >> a >> b >> c;
	maxarr[0] = minarr[0] = a;
	maxarr[1] = minarr[1] = b;
	maxarr[2] = minarr[2] = c;

	for (int i = 1; i < N; i++) {
		cin >> a >> b >> c;

		int t0 = maxarr[0], t2 = maxarr[2];
		maxarr[0] = max(maxarr[0], maxarr[1]) + a;
		maxarr[2] = max(maxarr[1], maxarr[2]) + c;
		maxarr[1] = max(max(t0, t2), maxarr[1]) + b;

		t0 = minarr[0], t2 = minarr[2];
		minarr[0] = min(minarr[0], minarr[1]) + a;
		minarr[2] = min(minarr[1], minarr[2]) + c;
		minarr[1] = min(min(t0, t2), minarr[1]) + b;
	}

	cout << max(max(maxarr[0], maxarr[1]), maxarr[2]) << " ";
	cout << min(min(minarr[0], minarr[1]), minarr[2]) << "\n";
}