//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//const int MAX = 1000 + 1;
//
//int N, M;
//int arr[MAX][MAX];
//int visited[MAX][MAX][2]; 
//
//int gogoA[4] = { 0,1,0,-1 };
//int gogoB[4] = { 1,0,-1,0 };
//
//int bfs() {
//	queue<pair<pair<int, int>,int>> q;
//	q.push(make_pair(make_pair(0, 0), 1)); // 1:벽뚫기가능
//	visited[0][0][1] = 1;
//
//	while (!q.empty()) {
//		pair<int, int> t = q.front().first;
//		int b = q.front().second;
//		q.pop();
//
//		if (t.first == N - 1 && t.second == M - 1)
//			return visited[t.first][t.second][b];
//
//		for (int i = 0; i < 4; i++) {
//			int nA = t.first + gogoA[i];
//			int nB = t.second + gogoB[i];
//
//			if (nA >= 0 && nA < N && nB >= 0 && nB < M) {
//				if (arr[nA][nB] == 1 && b) { // b가 1이면 아직 안뚫음
//					visited[nA][nB][b - 1] = visited[t.first][t.second][b] + 1;
//					q.push(make_pair(make_pair(nA, nB), b - 1));
//				}
//				else if (arr[nA][nB] == 0 && visited[nA][nB][b] == 0) {
//					visited[nA][nB][b] = visited[t.first][t.second][b] + 1;
//					q.push(make_pair(make_pair(nA, nB), b));
//				}
//			}
//		}
//	}
//	return -1;
//}
//
//int main() {
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++) {
//		string s; cin >> s;
//		for (int j = 0; j < M; j++) {
//			arr[i][j] = s[j] - '0';
//		}
//	}
//	cout << bfs() << endl;
//}



///////// timeout code /////////
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//const int MAX = 1000 + 1;
//
//int N, M;
//int arr[MAX][MAX];
//int crr[MAX][MAX];
//int visited[MAX][MAX];
//int gogoA[4] = { 0,1,0,-1 };
//int gogoB[4] = { 1,0,-1,0 };
//
//vector<pair<int, int>> one;
//
//int bfs() {
//	queue<pair<int, int>> q;
//	q.push(make_pair(0, 0));
//	visited[0][0] = 1;
//	while (!q.empty()) {
//		pair<int, int> t = q.front();
//		q.pop();
//
//		if (t.first == N - 1 && t.second == M - 1)
//			return visited[t.first][t.second];
//
//		for (int i = 0; i < 4; i++) {
//			int tA = t.first + gogoA[i];
//			int tB = t.second + gogoB[i];
//			if (tA >= 0 && tA < N && tB >= 0 && tB < M) {
//				if (!visited[tA][tB] && !crr[tA][tB]) {
//					q.push(make_pair(tA, tB));
//					visited[tA][tB] = visited[t.first][t.second] + 1;
//				}
//			}
//		}
//	}
//	return MAX * MAX;
//}
//
//
//int main() {
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++) {
//		string s; cin >> s;
//		for (int j = 0; j < M; j++) {
//			arr[i][j] = s[j] - '0';
//			if (arr[i][j] == 1)
//				one.push_back(make_pair(i, j));
//		}
//	}
//	int m = MAX * MAX;
//
//	for (int i = 0; i < one.size(); i++) {
//		memset(visited, 0, sizeof(visited));
//		memset(crr, 0, sizeof(crr));
//		for (int j = 0; j < N; j++) {
//			for (int k = 0; k < M; k++) {
//				if (one[i].first == j && one[i].second == k)
//					crr[j][k] = 0;
//				else
//					crr[j][k] = arr[j][k];
//			}
//		}
//		m = min(m, bfs());
//	}
//
//	if (m == MAX * MAX)
//		cout << -1 << endl;
//	else
//		cout << m << endl;
//}