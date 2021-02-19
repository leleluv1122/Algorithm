#include <iostream>
#include <algorithm>

using namespace std;

int arr[10001] = { 0 };
int dp[10001] = { 0 };

int main() {
	int N; cin >> N;
	int ans;
	for (int i = 1; i <= N; i++)
		cin >> arr[i];
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	if (N == 1)
		ans = dp[1];
	else if (N == 2)
		ans = dp[2];
	else {
		for (int i = 3; i <= N; i++)
			dp[i] = max(dp[i - 1], max(arr[i] + dp[i - 2], dp[i - 3] + arr[i - 1] + arr[i]));
		ans = dp[N];
	}
	cout << ans;
}