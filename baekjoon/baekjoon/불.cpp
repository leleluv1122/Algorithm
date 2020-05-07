//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//using namespace std;
//const int MAX = 1000 + 1;
//int w, h;
//char v[MAX][MAX];
//int visited[MAX][MAX];
//int a, b;
//int gogoA[4] = { 0,0,1,-1 };
//int gogoB[4] = { -1,1,0,0 };
//vector<pair<int, int>> fire;
//int bfs() {
//	queue<pair<int, int>> q;
//	queue<pair<int, int>> flame;
//
//	q.push(make_pair(a, b));
//	visited[a][b] = 1;
//	for (int i = 0; i < fire.size(); i++)
//		flame.push(fire[i]);
//
//	while (!q.empty()) {
//		int flamesize = flame.size();
//		for (int i = 0; i < flamesize; i++) {
//			int k = flame.front().first;
//			int l = flame.front().second;
//			flame.pop();
//
//			for (int i = 0; i < 4; i++) {
//				int nk = k + gogoA[i];
//				int nl = l + gogoB[i];
//				if (nk >= 0 && nk < h && nl >= 0 && nl < w) {
//					if (v[nk][nl] == '.') {
//						v[nk][nl] = '*';
//						flame.push(make_pair(nk, nl));
//					}
//				}
//			}
//		}
//		int cs = q.size();
//		for (int ss = 0; ss < cs; ss++) {
//			pair<int, int> t = q.front();
//			q.pop();
//			if (t.first == 0 || t.second == 0 || t.first == h - 1 || t.second == w - 1)
//				return visited[t.first][t.second];
//
//			for (int i = 0; i < 4; i++) {
//				int nA = t.first + gogoA[i];
//				int nB = t.second + gogoB[i];
//
//				if (!visited[nA][nB] && v[nA][nB] == '.' && nA >= 0 && nA < h && nB >= 0 && nB < w) {
//					q.push(make_pair(nA, nB));
//					visited[nA][nB] = visited[t.first][t.second] + 1;
//				}
//			}
//		}
//	}
//	return -1;
//}
//
//int main() {
//	int T; cin >> T;
//	for (int t = 0; t < T; t++) {
//		fire.clear();
//		memset(visited, 0, sizeof(visited));
//		cin >> w >> h;
//
//		for (int i = 0; i < h; i++) {
//			string s; cin >> s;
//			for (int j = 0; j < s.length(); j++) {
//				v[i][j] = s[j];
//				if (v[i][j] == '@') {
//					a = i; b = j;
//				}
//				else if (v[i][j] == '*') {
//					fire.push_back(make_pair(i, j));
//				}
//			}
//		}
//
//		int r = bfs();
//		if (r == -1) {
//			cout << "IMPOSSIBLE" << endl;
//		}
//		else {
//			cout << r << endl;
//		}
//	}
//}
//
////
////
////
//////for (int i = 0; i < h; i++) {
//////	for (int j = 0; j < w; j++) {
//////		cout << v[i][j] << " ";
//////	}
//////	cout << endl;
//////}
////
//////for (int i = 0; i < h; i++) {
//////	for (int j = 0; j < w; j++) {
//////		if (v[i][j] == '*') {
//////			for (int z = 0; z < 4; z++) {
//////				int c = i + gogoA[z];
//////				int d = j + gogoB[z];
//////				if (c >= 0 && c < h && d >= 0 && d < w && v[c][d] == '.') {
//////					v[c][d] = '*';
//////				}
//////			}
//////		}
//////	}
//////}