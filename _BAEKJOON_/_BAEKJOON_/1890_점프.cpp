#include <iostream>
#include <algorithm>

typedef long long ll;
#define endl "\n"
#define MAX 101
using namespace std;

int N;
int cnt;
int arr[MAX][MAX];
ll dp[MAX][MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	init();

	cnt = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];
	dp[0][0] = 1;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (dp[i][j] == 0 || (i == N - 1 && j == N - 1))
				continue;
			int val = arr[i][j];
			int down = val + i;
			int right = val + j;

			if (down < N)
				dp[down][j] = dp[down][j] + dp[i][j];
			if (right < N)
				dp[i][right] = dp[i][right] + dp[i][j];
		}
	}
	cout << dp[N - 1][N - 1] << endl;
}