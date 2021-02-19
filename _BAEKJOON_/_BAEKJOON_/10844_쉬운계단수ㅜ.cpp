#include <iostream>

#define MOD 1000000000
#define MAX 101
using namespace std;

int dp[MAX][10];
int N;

int main() {
	cin >> N;
	for (int i = 0; i < 10; i++)
		dp[1][i] = 1;
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0)
				dp[i][j] = dp[i - 1][j + 1] % MOD;
			else if (j == 9)
				dp[i][j] = dp[i - 1][j - 1] % MOD;
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
		}
	}
	int ans = 0;
	for (int i = 1; i < 10; i++)
		ans = (ans + dp[N][i]) % MOD;
	cout << ans;
}