#include <iostream>
#include <algorithm>

using namespace std;

int dp[5001];

int main() {
	int N; cin >> N;
	int ans;

	for (int i = 0; i <= N; i++)
		dp[i] = 9999;
	dp[3] = 1, dp[5] = 1;
	for (int i = 6; i <= N; i++)
		dp[i] = min(dp[i - 3], dp[i - 5]) + 1;
	if (dp[N] == 10000 || dp[N] == 9999)
		ans = -1;
	else
		ans = dp[N];
	cout << ans;
}