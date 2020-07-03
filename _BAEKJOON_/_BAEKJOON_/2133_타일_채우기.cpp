#include <iostream>
#include <cstring>

#define MAX 31
#define endl "\n"
using namespace std;

int N;
int dp[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int DP() {
	dp[0] = 1;
	dp[2] = 3;

	for (int i = 4; i <= N; i += 2) {
		for (int j = 2; j <= i; j += 2) {
			if (j == 2)
				dp[i] += 3 * dp[i - j];
			else
				dp[i] += 2 * dp[i - j];
		}
	}
	return dp[N];
}

int main() {
	init();
	cin >> N;

	cout << DP() << endl;
}