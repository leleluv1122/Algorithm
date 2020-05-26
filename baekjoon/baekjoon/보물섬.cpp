//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//#include <queue>
//using namespace std;
//int N, M;
//string wl[50];
//int visited[50][50];
//vector<pair<int, int>> v;
//
//int gogoA[4] = { 0,1,0,-1 };
//int gogoB[4] = { 1,0,-1,0 };
//
//void bfs(pair<int, int> p) {
//	queue<pair<int, int>> q;
//	q.push(p);
//	visited[p.first][p.second] = 1;
//
//	while (!q.empty()) {
//		pair<int, int> t = q.front();
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int A = t.first + gogoA[i];
//			int B = t.second + gogoB[i];
//			if (A >= 0 && A < N && B >= 0 && B < M) {
//				if (!visited[A][B] && wl[A][B] == 'L') {
//					q.push(make_pair(A, B));
//					visited[A][B] = visited[t.first][t.second] + 1;
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++) {
//		cin >> wl[i];
//		for (int j = 0; j < M; j++) {
//			if (wl[i][j] == 'L')
//				v.push_back(make_pair(i, j));
//		}
//	}
//	int cnt = 0;
//	for (int i = 0; i < v.size(); i++) {
//		memset(visited, false, sizeof(visited));
//		bfs(v[i]);
//		for (int i = 0; i < N; i++)
//			for (int j = 0; j < M; j++)
//				cnt = max(cnt, visited[i][j] - 1);
//	}
//	cout << cnt << "\n";
//}