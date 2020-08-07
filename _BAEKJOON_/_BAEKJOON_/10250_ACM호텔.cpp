#include <iostream>

using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int T;
	cin >> T;
	
	while (T--) {
		int H, W, N;
		cin >> H >> W >> N;

		N--;
		int a = N % H + 1;
		int b = N / H + 1;

		cout << a;
		if (1 <= b && b <= 9)
			cout << 0 << b;
		else
			cout << b;

		cout << "\n";
	}
}