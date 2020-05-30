//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int MAX = 1000 + 1;
//int road[MAX][MAX];
//int N, M, X;
//
//void floyd() {
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (road[j][i] == 0)
//				continue;
//			for (int k = 1; k <= N; k++) {
//				if (road[i][k] == 0 || j == k)
//					continue;
//				if (road[j][k] == 0 || road[j][k] > road[j][i] + road[i][k]) {
//					road[j][k] = road[j][i] + road[i][k];
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> N >> M >> X;
//
//	for (int i = 0; i < M; i++) {
//		int start, end, time;
//		cin >> start >> end >> time;
//		road[start][end] = time;
//	}
//
//	floyd();
//	int longtime = 0;;
//	for (int i = 1; i <= N; i++) {
//		longtime = max(longtime, road[i][X] + road[X][i]);
//	}
//	cout << longtime << "\n";
//}