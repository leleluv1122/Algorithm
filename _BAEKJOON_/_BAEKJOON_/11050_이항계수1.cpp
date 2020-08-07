#include <iostream>

using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int fac(int a) {
	if (a == 0)
		return 1;
	int result = 1;

	for (int i = a; i >= 1; i--)
		result *= i;
	return result;
}

int main() {
	init();
	int N, K;
	cin >> N >> K;

	// 이항계수 : n! / k!(n-k)!
	cout << fac(N) / (fac(K) * fac(N - K)) << "\n";
}