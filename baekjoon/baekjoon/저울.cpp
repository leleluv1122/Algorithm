//#include <iostream>
//using namespace std;
//const int MAX = 100 + 1;
//int N, M;
//int juwul[MAX][MAX];
//
//void floyd() {
//	for (int i = 1; i <= N; i++) { // 중간
//		for (int j = 1; j <= N; j++) { // 처음
//			for (int k = 1; k <= N; k++) { // 끝
//				if (juwul[j][k] == 0) {
//					if (juwul[j][i] == 1 && juwul[i][k] == 1)
//						juwul[j][k] = 1;
//					else if (juwul[j][i] == -1 && juwul[i][k] == -1)
//						juwul[j][k] = -1;
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> N >> M;
//	
//	for (int i = 0; i < M; i++) {
//		int a, b;
//		cin >> a >> b;
//		juwul[a][b] = 1; // a > b
//		juwul[b][a] = -1; // b가 a보다 작음
//	}
//
//	floyd();
//
//	for (int i = 1; i <= N; i++) {
//		int cnt = 0;
//		for (int j = 1; j <= N; j++) {
//			if (i == j)
//				continue;
//			if (juwul[i][j] == 0)
//				cnt++;
//		}
//		cout << cnt << "\n";
//	}
//}