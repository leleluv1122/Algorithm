//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//const int MAX = 50 + 1;
//
//int gogoA[4] = { 0,0,1,-1 };
//int gogoB[4] = { 1,-1,0,0 };
//
//string arr[MAX];
//int R, C; // 행 열
//int r1, r2; // 비버의 굴 : 탈출장소 r1:행 r2:열
//int c1, c2; // 고슴도치 위치 c1:행 c2:열
//int visited[MAX][MAX];
//vector<pair<int, int>> w;
//
//int bfs() {
//	queue<pair<int, int>> water;
//	queue<pair<int, int>> q;
//
//	for (int i = 0; i < w.size(); i++)
//		water.push(w[i]);
//
//	q.push(make_pair(c1, c2));
//	visited[c1][c2] = 1;
//
//	while (!q.empty()) {
//		int wsize = water.size();
//		for (int i = 0; i < wsize; i++) {
//			pair<int, int> tt = water.front();
//			water.pop();
//			for (int i = 0; i < 4; i++) {
//				int tA = tt.first + gogoA[i];
//				int tB = tt.second + gogoB[i];
//
//				if (tA >= 0 && tA < R && tB >= 0 && tB < C) {
//					if (arr[tA][tB] == '.') {
//						arr[tA][tB] = '*';
//						water.push(make_pair(tA, tB));
//					}
//				}
//			}
//		}
//		int qsize = q.size();
//		for (int i = 0; i < qsize; i++) {
//			pair<int, int> t = q.front();
//			q.pop();
//			if (t.first == r1 && t.second == r2)
//				return visited[t.first][t.second] - 1;
//
//			for (int j = 0; j < 4; j++) {
//				int ta = t.first + gogoA[j];
//				int tb = t.second + gogoB[j];
//
//				if (ta >= 0 && ta < R && tb >= 0 && tb < C) {
//					if (arr[ta][tb] != '*' && arr[ta][tb] != 'X' && visited[ta][tb] == 0) {
//						visited[ta][tb] = visited[t.first][t.second] + 1;
//						q.push(make_pair(ta, tb));
//					}
//				}
//			}
//		}	
//	}
//	return -1;
//}
//
//int main() {
//	cin >> R >> C;
//
//	for (int i = 0; i < R; i++) {
//		cin >> arr[i];
//		for (int j = 0; j < arr[i].length(); j++) {
//			if (arr[i][j] == 'D') { // 비버의 굴
//				r1 = i; r2 = j;
//			}
//			else if (arr[i][j] == 'S') { // 현재위치
//				c1 = i; c2 = j;
//			}
//			else if (arr[i][j] == '*') {
//				w.push_back(make_pair(i, j));
//			}
//		}
//	}
//
//	int r = bfs();
//	if (r == -1)
//		cout << "KAKTUS" << endl;
//	else
//		cout << r << endl;
//}