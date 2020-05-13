//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//const int MAX = 100 + 1;
//int M, N, H;
//
//int arr[MAX][MAX][MAX]; // 높이 세로 가로
//int visited[MAX][MAX][MAX]; // 높이 세로 가로
//vector<pair<pair<int, int>, int>> v; //가로 세로 높이
//
//int gogoA[6] = { 1,-1,0,0,0,0 }; // 높이
//int gogoB[6] = {0,0,1,0,-1,0};  // 세로
//int gogoC[6] = { 0,0,0,1,0,-1 }; //가로
//
//void tomato() {
//	queue<pair<pair<int, int>, int>> q;
//	for (int i = 0; i < v.size(); i++) {
//		q.push(make_pair(make_pair(v[i].first.first,v[i].first.second),v[i].second)); //토마토가 잇는부분 q에 넣기
//		visited[v[i].second][v[i].first.second][v[i].first.first] = 1;
//	}
//
//	while (!q.empty()) {
//		pair<pair<int, int>, int> t = q.front();
//		q.pop();
//
//		for (int i = 0; i < 6; i++) {
//			int A = t.second + gogoA[i]; //높이
//			int B = t.first.second + gogoB[i]; //세로
//			int C = t.first.first + gogoC[i]; //가로
//
//			if (A >= 0 && A < H && B >= 0 && B < N && C >= 0 && C < M) {
//				if (!visited[A][B][C] && arr[A][B][C] == 0) {
//					q.push(make_pair(make_pair(C, B), A));
//					visited[A][B][C] = visited[t.second][t.first.second][t.first.first] + 1;
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> M >> N >> H; //가로 세로 높이
//	memset(visited, 0, sizeof(visited));
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < N; j++) {
//			for (int k = 0; k < M; k++) {
//				cin >> arr[i][j][k];
//				if (arr[i][j][k] == 1) {
//					v.push_back(make_pair(make_pair(k, j), i));
//				}
//			}
//		}
//	}
//	tomato();
//	int result = 0;
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < N; j++) {
//			for (int k = 0; k < M; k++) {
//				if (arr[i][j][k] == 0 && visited[i][j][k] == 0) {
//					result = -1;
//					break;
//				}
//				else if (arr[i][j][k] != -1 && visited[i][j][k] >= 0) {
//					result = max(result, visited[i][j][k]);
//				}
//			}
//			if (result == -1)
//				break;
//		}
//		if (result == -1)
//			break;
//	}
//
//	if (result == -1)
//		cout << -1 << endl;
//	else
//		cout << result - 1 << endl;
//}