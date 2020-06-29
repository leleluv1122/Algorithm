#include <iostream>

#define endl "\n"
#define MAX 201
#define MOD 1000000000
using namespace std;

int N, K;
long long dp[MAX][MAX];

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	init();
	cin >> N >> K;

	for (int i = 0; i <= N; i++)
		dp[1][i] = 1;

	for (int i = 2; i <= K; i++) {
		for (int j = 0; j <= N; j++) {
			for (int k = 0; k <= j; k++)
				dp[i][j] = dp[i][j] + dp[i - 1][k];
			dp[i][j] %= MOD;
		}
	}

	cout << dp[K][N] << endl;
}



//// 시간초과 ////
//#include <iostream>
//
//#define MOD 1000000000
//using namespace std;
//
//int N, K;
//int cnt;
//
//void init() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//}
//
//void hap(int a, int n) {
//	if (n == K) {
//		if (a == N)
//			cnt++;
//		return;
//	}
//
//	for (int i = 0; i <= N; i++) {
//		int next = a + i;
//		hap(next, n + 1);
//	}
//}
//
//int main() {
//	init();
//	cnt = 0;
//	cin >> N >> K;
//
//	for (int i = 0; i <= N; i++)
//		hap(i, 1);
//
//	cout << cnt % MOD << endl;
//}