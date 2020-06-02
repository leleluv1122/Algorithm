//#include <iostream>
//using namespace std;
//const int MAX = 100 + 1;
//const int INF = 987654321;
//int n, m;
//int arr[MAX][MAX];
//int mash[MAX][MAX];
//bool visited[MAX][MAX];
//
//int gogoA[4] = { 0,1,0,-1 };
//int gogoB[4] = { 1,0,-1,0 };
//
//void dfs(int d, int a, int b, int num) {
//	if (mash[a][b] <= num)
//		return;
//	else
//		mash[a][b] = num;
//
//	if (a == n - 1 && b == m - 1)
//		return;
//
//	for (int i = 0; i < 4; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//
//		if (A >= 0 && A < n && B >= 0 && B < m) {
//			if (!visited[A][B]) {
//				visited[A][B] = true;
//				dfs(d + 1, A, B, num + (arr[A][B] ? 1 : 0));
//				visited[A][B] = false;
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> m >> n;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf_s("%1d", &arr[i][j]);
//			mash[i][j] = INF;
//		}
//	}
//
//	visited[0][0] = 1;
//	dfs(0, 0, 0, 0);
//
//	cout << mash[n - 1][m - 1] << "\n";
//}