//#include <iostream>
//#include <string>
//#include <queue>
//
//using namespace std;
//const int MAX = 10 + 1;
//int N, M; // 세로 가로
//string arr[MAX];
//pair<int, int> o;
//pair<int, int> r;
//pair<int, int> b;
//int visitedR[MAX][MAX];
//int visitedB[MAX][MAX];
//
//int gogoA[4] = { 0,1,0,-1 };
//int gogoB[4] = { 1,0,-1,0 };
//
//int ball_exodus() {
//	queue<pair<int, int>> Rq;
//	Rq.push(r);
//	visitedR[r.first][r.second] = 1;
//
//	queue<pair<int, int>> Bq;
//	Bq.push(b);
//	visitedB[b.first][b.second] = 1;
//
//	while (!Rq.empty()) {
//		pair<int, int> rt = Rq.front();
//		Rq.pop();
//
//		pair<int, int> bt = Bq.front();
//		Bq.pop();
//
//		if (rt.first == o.first && rt.second == o.second)
//			return visitedR[o.first][o.second] - 1;
//
//		for (int i = 0; i < 4; i++) {
//			int RA = rt.first;
//			int RB = rt.second;
//			int BA = bt.first;
//			int BB = bt.second;
//
//			while (1) {
//				RA += gogoA[i];
//				RB += gogoB[i];
//				if (arr[RA][RB] == '#') {
//					RA -= gogoA[i];
//					RB -= gogoB[i];
//					break;
//				}
//			}
//			while (1) {
//				BA += gogoA[i];
//				BB += gogoB[i];
//				if (arr[BA][BB] == '#') {
//					BA -= gogoA[i];
//					BB -= gogoB[i];
//					break;
//				}
//			}
//			//if (RA >=0 && RA < N && RB >=0 && RB < M && BA >= 0 && BA < N && BB >= 0 && BB < M) {
//			if (arr[RA][RB] == '.' && !visitedR[RA][RB]) {
//				Rq.push(make_pair(RA, RB));
//				Bq.push(make_pair(BA, BB));
//				visitedR[RA][RB] = visitedR[rt.first][rt.second] + 1;
//			}
//			//}
//		}
//
//	}
//}
//
//int main() {
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//		for (int j = 0; j < M; j++) {
//			if (arr[i][j] == 'O')
//				o = make_pair(i, j);
//			if (arr[i][j] == 'R')
//				r = make_pair(i, j);
//			if (arr[i][j] == 'B')
//				b = make_pair(i, j);
//		}
//	}
//
//}