//#include <iostream>
//using namespace std;
//int N, M;
//const int MAX = 500 + 1;
//int student[MAX][MAX];
//
//void floyd() {
//	for (int i = 1; i <= N; i++) { // 중간
//		for (int j = 1; j <= N; j++) { // 시작
//			for (int k = 1; k <= N; k++) { // 끝
//				if (student[j][k] == 0) {
//					if (student[j][i] == 1 && student[i][k] == 1) 
//						student[j][k] = 1;
//					
//					else if (student[j][i] == -1 && student[i][k] == -1) 
//						student[j][k] = -1;
//					
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
//		int a, b; cin >> a >> b;
//		student[a][b] = -1;
//		student[b][a] = 1;
//	}
//
//	floyd();
//	int cnt = 0;
//	for (int i = 1; i <= N; i++) {
//		int n = 0;
//		for (int j = 1; j <= N; j++) {
//			if (i == j)
//				continue;
//			if (student[i][j])
//				n++;
//		}
//		if (n == N - 1)
//			cnt++;
//	}
//	cout << cnt << "\n";
//}