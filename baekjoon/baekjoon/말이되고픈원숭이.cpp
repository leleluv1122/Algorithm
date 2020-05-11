// 반례
//1
//4 4
//0 0 0 0
//1 0 0 0
//0 0 1 1
//0 1 0 0

//#include <iostream>
//#include <queue>
//using namespace std;
//
//const int MAX = 200;
//int gogoA[8] = { -2,-2,-1,-1,1,1,2,2 };
//int gogoB[8] = { -1,1,-2,2,-2,2,-1,1 };
//int goA[4] = { 0,1,0,-1 };
//int goB[4] = { 1,0,-1,0 };
//int K; // 횟수만큼만 말처럼움직임
//int arr[MAX][MAX];
//int W, H;
//int visited[MAX][MAX][32];
//
//int monkey() {
//	queue<pair<pair<int, int>, pair<int, int>>> q; // A B K visit
//	q.push(make_pair(make_pair(0, 0), make_pair(0, 0)));
//	visited[0][0][0] = 1;
//
//	while (!q.empty()) {
//		pair<int,int> t = q.front().first;
//		int k = q.front().second.first;
//		int visit = q.front().second.second;
//		q.pop();
//
//		if (t.first == H - 1 && t.second == W - 1)
//			return visit;
//
//		if (k < K) {
//			for (int i = 0; i < 8; i++) {
//				int nA = t.first + gogoA[i];
//				int nB = t.second + gogoB[i];
//
//				if (nA >= 0 && nA < H && nB >= 0 && nB < W) {
//					if (!visited[nA][nB][k + 1] && !arr[nA][nB]) {
//						visited[nA][nB][k + 1] = 1;
//						q.push(make_pair(make_pair(nA, nB), make_pair(k + 1, visit + 1)));
//					}
//				}
//			}
//		}
//
//		for (int i = 0; i < 4; i++) {
//			int A = t.first + goA[i];
//			int B = t.second + goB[i];
//
//			if (A >= 0 && A < H && B >= 0 && B < W) {
//				if (!visited[A][B][k] && !arr[A][B]) {
//					visited[A][B][k] = 1;
//					q.push(make_pair(make_pair(A, B), make_pair(k, visit + 1)));
//				}
//			}
//		}
//	}
//
//	return -1;
//}
//
//int main() {
//	cin >> K >> W >> H;
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	int r = monkey();
//	cout << r << endl;
//}


//#include <iostream>
//#include <queue>
//using namespace std;
//
//const int MAX = 200;
//int gogoA[8] = { -2,-2,-1,-1,1,1,2,2 };
//int gogoB[8] = { -1,1,-2,2,-2,2,-1,1 };
//int goA[4] = { 0,1,0,-1 };
//int goB[4] = { 1,0,-1,0 };
//int K; // 횟수만큼만 말처럼움직임
//int arr[MAX][MAX];
//int W, H;
//pair<int, int> visited[MAX][MAX];
//
//int monkey() {
//	queue<pair<int, int>> q;
//	q.push(make_pair(0, 0));
//	visited[0][0] = make_pair(1, 0); // 방문(1-1)번 말처럼이동0번
//
//	while (!q.empty()) {
//		pair<int, int> t = q.front();
//		q.pop();
//
//		if (t.first == H - 1 && t.second == W - 1)
//			return visited[t.first][t.second].first - 1;
//
//		int a = visited[t.first][t.second].first;
//		int b = visited[t.first][t.second].second;
//
//		for (int i = 0; i < 8; i++) {
//			int A = t.first + gogoA[i];
//			int B = t.second + gogoB[i];
//
//			if (A >= 0 && A < H && B >= 0 && B < W) {
//				if (!visited[A][B].first && b < K && !arr[A][B]) {
//					visited[A][B] = make_pair(a + 1, b + 1);
//					q.push(make_pair(A, B));
//				}
//			}
//		}
//		for (int i = 0; i < 4; i++) {
//			int A = t.first + goA[i];
//			int B = t.second + goB[i];
//
//			if (A >= 0 && A < H && B >= 0 && B < W) {
//				if (!visited[A][B].first && !arr[A][B]) {
//					visited[A][B] = make_pair(a + 1, b);
//					q.push(make_pair(A, B));
//				}
//			}
//		}	
//	}
//	return -1;
//}
//
//int main() {
//	cin >> K >> W >> H;
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	int r = monkey();
//	cout << r << endl;
//}