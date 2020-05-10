//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <cstring>
//
//const int MAX = 8;
//using namespace std;
//int N, M;
//
//vector<pair<int, int>> zero;
//vector<pair<int, int>> virus;
//int yun[MAX][MAX];
//int gogoA[4] = { 0,1,0,-1 };
//int gogoB[4] = { 1,0,-1,0 };
//int yun2[MAX][MAX];
//bool visited[MAX][MAX];
//
//int yunguso() {
//	queue<pair<int, int>> q;
//	for (int i = 0; i < virus.size(); i++) {
//		q.push(make_pair(virus[i].first, virus[i].second));
//		visited[virus[i].first][virus[i].second] = 1;
//	}
//	while (!q.empty()) {
//		pair<int, int> t = q.front();
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int A = t.first + gogoA[i];
//			int B = t.second + gogoB[i];
//
//			if (A >= 0 && A < N && B >= 0 && B < M) {
//				if (!visited[A][B] && yun2[A][B] != 1 && yun2[A][B] != 2) {
//					q.push(make_pair(A, B));
//					visited[A][B] = 1;
//					yun2[A][B] = 2;
//				}
//			}
//		}
//	}
//	int n = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (visited[i][j] == 0) {
//				if (yun2[i][j] == 0) {
//					n++;
//				}
//			}
//		}
//	}
//	return n;
//}
//
//void inin() {
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			yun2[i][j] = yun[i][j];
//		}
//	}
//}
//
//int main() {
//	cin >> N >> M;
//	
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> yun[i][j];
//			if (yun[i][j] == 0) {
//				zero.push_back(make_pair(i, j));
//			}
//			else if (yun[i][j] == 2) {
//				virus.push_back(make_pair(i, j));
//			}
//		}
//	}
//	
//	int m = 0;
//	for (int i = 0; i < zero.size()-2; i++) {
//		for (int j = 1; j < zero.size() - 1; j++) {
//			for (int k = 2; k < zero.size(); k++) {
//				if (i == j || j == k || k == i)
//					continue;
//				memset(yun2, 0, sizeof(yun2));
//				memset(visited, 0, sizeof(visited));
//				inin();
//				yun2[zero[i].first][zero[i].second] = 1;
//				yun2[zero[j].first][zero[j].second] = 1;
//				yun2[zero[k].first][zero[k].second] = 1;
//				m = max(m, yunguso());
//			}
//		}
//	}
//
//	cout << m << endl;
//}