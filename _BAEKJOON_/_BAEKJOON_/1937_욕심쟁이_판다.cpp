#include <iostream>
#include <algorithm>

#define endl "\n"
#define MAX 501
using namespace std;

int N;
int arr[MAX][MAX];
int dp[MAX][MAX];
int gogoA[4] = { 1,0,-1,0 };
int gogoB[4] = { 0,1,0,-1 };

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}


int dfs(int a, int b) {
	if (dp[a][b])
		return dp[a][b];
	dp[a][b] = 1;

	for (int i = 0; i < 4; i++) {
		int A = a + gogoA[i];
		int B = b + gogoB[i];

		if (A >= 0 && A < N && B >= 0 && B < N) {
			if (arr[A][B] < arr[a][b])
				dp[a][b] = max(dp[a][b], dfs(A, B) + 1);
		}
	}

	return dp[a][b];
}

int main() {
	init();
	cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];

	int many = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			many = max(many, dfs(i, j));

	cout << many << endl;
}