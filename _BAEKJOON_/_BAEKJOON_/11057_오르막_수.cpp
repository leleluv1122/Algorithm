#include <iostream>

#define endl "\n"
#define MAX 1001
#define MOD 10007
using namespace std;

int N;
int dp[MAX][10];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N;

	for (int i = 0; i < 10; i++)
		dp[1][i] = 1;

	for (int i = 2; i <= N; i++) {
		dp[i][0] = 1;
		for (int j = 1; j < 10; j++)
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
	}

	int result = 0;
	for (int i = 0; i < 10; i++)
		result += dp[N][i];

	result %= MOD;
	cout << result << endl;
}