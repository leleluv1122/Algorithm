#include <iostream>
#include <algorithm>

using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int A, B;
	cin >> A >> B;

	int yaksu = 0;
	for (int i = 1; i <= min(A, B); i++) {
		if (A % i == 0 && B % i == 0)
			yaksu = i;
	}
	cout << yaksu << "\n";

	int baesu = 0;
	for (int i = max(A, B); i <= A * B; i++) {
		if (i % A == 0 && i % B == 0) {
			baesu = i;
			break;
		}
	}
	cout << baesu << "\n";
}