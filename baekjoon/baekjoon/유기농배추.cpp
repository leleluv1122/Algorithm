//#include <iostream>
//#include <cstring>
//using namespace std;
//const int MAX = 50;
//int M, N, K;
//int arr[MAX][MAX];
//bool visited[MAX][MAX];
//int gogoX[4] = { 0,1,0,-1 };
//int gogoY[4] = { -1,0,1,0 };
//
//void baechu(int a, int b) {
//	if (visited[a][b])
//		return;
//	visited[a][b] = 1;
//
//	for (int i = 0; i < 4; i++) {
//		int nA = a + gogoX[i];
//		int nB = b + gogoY[i];
//
//		if (0 <= nA && nA < N && 0 <= nB && nB < M) {
//			if (arr[nA][nB])
//				baechu(nA, nB);
//		}
//		
//	}
//}
//int main()
//{
//	int T; cin >> T;
//	for (int t = 0; t < T; t++) {
//		memset(visited, 0, sizeof(visited));
//		memset(arr, 0, sizeof(arr));
//		cin >> M >> N >> K;
//		for (int i = 0; i < K; i++) {
//			int a, b; cin >> a >> b;
//			arr[b][a] = 1;
//		}
//
//		int cnt = 0;
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (arr[i][j] == 1 && visited[i][j] == 0) {
//					baechu(i, j);
//					cnt++;
//				}
//			}
//		}
//		cout << cnt << "\n";
//	}
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//int arr[51][51];
//int gogoX[4] = { 0,1,0,-1 };
//int gogoY[4] = { -1,0,1,0 };
//void baechu(int a, int b) {
//	if (arr[a][b] == 1) {
//		for (int i = 0; i < 4; i++) {
//			int c = a + gogoX[i], d = b + gogoY[i];
//			if (arr[c][d] == 1) {
//				baechu(c, d);
//				//arr[c][d] = 0;
//			}
//			else
//				continue;
//		}
//		cout << a << " " << b << endl;
//	}
//}
//int main() {
//	int T; cin >> T;
//	for (int t = 0; t < T; t++) {
//		int M, N, K;
//		cin >> M >> N >> K;
//		for (int i = 0; i < K; i++) {
//			int a, b; cin >> a >> b;
//			arr[a][b] = 1;
//		}
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				baechu(i, j);
//			}
//		}
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				cout << arr[i][j] << " ";
//			}
//			cout << endl;
//		}////
//
//
//		int cnt = 0;
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (arr[i][j] == 1)
//					cnt++;
//			}
//		}
//		cout << cnt << "\n";
//
//
//		for (int i = 0; i <= 50; i++) {
//			fill_n(arr[i], 50, 0);
//		}
//	}
//}