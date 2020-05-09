//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//const int MAX = 1000 + 1;
//
//int gogoA[4] = { 1,0,-1,0 };
//int gogoB[4] = { 0,1,0,-1 };
//int N, M;
//vector<int> v[MAX];
//vector<pair<int, int>> o;
//int visited[MAX][MAX];
//
//void tomato() {
//	queue<pair<int, int>> q;
//	for (int i = 0; i < o.size(); i++) {
//		q.push(make_pair(o[i].first, o[i].second));
//		visited[o[i].first][o[i].second] = 1;
//	}
//	
//	while (!q.empty()) {
//		pair<int, int> t = q.front();
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int nA = t.first + gogoA[i];
//			int nB = t.second + gogoB[i];
//
//			if (nA >= 0 && nA < M && nB >= 0 && nB < N) {
//				if (!visited[nA][nB] && v[nA][nB] == 0) {
//					q.push(make_pair(nA, nB));
//					visited[nA][nB] = visited[t.first][t.second] + 1;
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> N >> M;
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			int a; cin >> a;
//			v[i].push_back(a);
//			if (v[i][j] == 1) {
//				o.push_back(make_pair(i, j));
//			}
//		}
//	}
//	tomato();
//	int result = 0;
//	int t = 0;
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			if (!visited[i][j] && v[i][j] != -1) {
//				result = -1;
//				t = -1;
//				break;
//			}
//			else if (visited[i][j] && v[i][j] != -1) {
//				result = max(result, visited[i][j]);
//			}
//		}
//		if (t == -1)
//			break;
//	}
//	if (result == -1)
//		cout << -1 << endl;
//	else
//		cout << result - 1 << endl;
//}