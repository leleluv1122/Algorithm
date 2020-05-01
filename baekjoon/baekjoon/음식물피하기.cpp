//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//const int MAX = 100 + 1;
//
//int M, N, K;
//int v[MAX][MAX];
//bool visited[MAX][MAX];
//int gogoX[4] = { 0,1,0,-1 };
//int gogoY[4] = { -1,0,1,0 };
//int dd = 0;
//void nofood(int a, int b) {
//	if (visited[a][b])
//		return;
//	visited[a][b] = 1;
//
//	for (int i = 0; i < 4; i++) {
//		int A = a + gogoX[i];
//		int B = b + gogoY[i];
//
//		if (A >= 0 && A < N && B >= 0 && B < M) {
//			if (v[A][B])
//				nofood(A, B);
//		}
//	}
//	dd++;
//}
//int main() {
//	cin >> N >> M >> K;
//
//	for (int i = 0; i < K; i++) {
//		int a, b; cin >> a >> b; a--; b--;
//		v[a][b] = 1;
//	}
//	int cnt = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (visited[i][j] == 0 && v[i][j]) {
//				dd = 0;
//				nofood(i, j);
//				cnt = max(cnt, dd);
//			}
//		}
//	}
//	cout << cnt << "\n";
//}