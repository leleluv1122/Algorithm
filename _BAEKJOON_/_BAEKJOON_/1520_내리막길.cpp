#include <iostream>
#include <cstring>

#define endl "\n"
#define MAX 501
using namespace std;

int N, M;
int input[MAX][MAX];
int dp[MAX][MAX];
int gogoA[4] = { 0,1,0,-1 };
int gogoB[4] = { 1,0,-1,0 };

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int lazy_man(int a, int b) {
	if (dp[a][b] != -1)
		return dp[a][b];
	if (a < 0 || a >= N || b < 0 || b >= M)
		return 0;
	if (a == 0 && b == 0)
		return 1;

	dp[a][b] = 0;
	for (int i = 0; i < 4; i++) {
		int A = a + gogoA[i];
		int B = b + gogoB[i];

		if (input[A][B] > input[a][b])
			dp[a][b] += lazy_man(A, B);
	}

	return dp[a][b];
}

int main() {
	init();
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> input[i][j];
	memset(dp, -1, sizeof(dp));

	cout << lazy_man(N - 1, M - 1) << endl;
}



///// timeout
//#include <iostream>
//
//using namespace std;
//
//int N, M;
//int road[501][501];
//bool visited[501][501];
//int gogoA[4] = { 0,1,0,-1 };
//int gogoB[4] = { 1,0,-1,0 };
//int result = 0;
//
//void lazy_man(int a, int b) {
//	if (a == N - 1 && b == M - 1) {
//		result++;
//		return;
//	}
//
//	for (int i = 0; i < 4; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//
//		if (A >= 0 && A < N && B >= 0 && B < M) {
//			if (road[A][B] < road[a][b] && !visited[A][B]) {
//				visited[A][B] = true;
//				lazy_man(A, B);
//				visited[A][B] = false;
//			}
//		}
//	}
//}
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			cin >> road[i][j];
//
//	visited[0][0] = true;
//	lazy_man(0, 0);
//
//	cout << result << "\n";
//}