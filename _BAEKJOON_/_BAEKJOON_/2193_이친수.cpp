#include <iostream>

using namespace std;

long long dp[91][2];

long long echinsu(int idx, int pre) {
	if (idx == 0)
		return 1;
	if (pre == 1)
		return dp[idx][pre] = echinsu(idx - 1, 0);
	return dp[idx][pre] = echinsu(idx - 1, 0) + echinsu(idx - 1, 1);
}

int main() {
	int N;
	cin >> N;

	cout << echinsu(N - 1, 1);
}