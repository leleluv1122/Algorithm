//#include <string>
//#include <vector>
//#include <iostream>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//const int MAX = 25;
//int visited[MAX][MAX];
//int cnt = 0;
//int N;
//int gogoA[4] = { 0,0,1,-1 };
//int gogoB[4] = { 1,-1,0,0 };
//int ttt = 0;
//
//int boards[MAX][MAX];
//int main(vector<vector<int>> board) {
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> boards[i][j];
//		}
//	}
//	queue<pair<int, int>> q;
//	int rra = 0, rrb = 0; //지지난길
//	int ra = 0, rb = 0; //지난길
//
//	q.push(make_pair(0, 0));
//	visited[0][0] = 1;
//
//	while (!q.empty()) {
//		int qs = q.size();
//		for (int k = 0; k < qs; k++) {
//			pair<int, int> t = q.front();
//			ra = t.first, rb = t.second;
//			q.pop();
//
//			if (t.first == N - 1 && t.second == N - 1)
//				ttt = visited[t.first][t.second] - 1;
//
//			for (int i = 0; i < 4; i++) {
//				int nA = t.first + gogoA[i];
//				int nB = t.second + gogoB[i];
//
//				if (nA >= 0 && nA < N && nB >= 0 && nB < N) {
//					if (!visited[nA][nB] && !boards[nA][nB]) {
//						if (rra != ra) {
//							if (ra == nA)
//								cnt++;
//						}
//						else if (rrb != rb) {
//							if (rb == nB)
//								cnt++;
//						}
//
//						q.push(make_pair(nA, nB));
//						visited[nA][nB] = visited[t.first][t.second] + 1;
//
//						rra = ra; rrb = rb;
//						ra = nA; rb = nB;
//					}
//				}
//			}
//		}
//	}
//
//	int answer = ttt * 100 + cnt * 500;
//	cout << answer << endl;
//}

//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//const int MAX = 25;
//int board[MAX][MAX];
//int visited[MAX][MAX];
//int cnt = 0;
//int N;
//int gogoA[4] = { 0,0,1,-1 };
//int gogoB[4] = { 1,-1,0,0 };
//int gyungju() {
//	queue<pair<int, int>> q;
//	int rra = 0, rrb = 0; //지지난길
//	int ra = 0, rb = 0; //지난길
//
//	q.push(make_pair(0, 0));
//	visited[0][0] = 1;
//
//	while (!q.empty()) {
//		int qs = q.size();
//		for (int k = 0; k < qs; k++) {
//			pair<int, int> t = q.front();
//			ra = t.first, rb = t.second;
//			q.pop();
//
//			if (t.first == N - 1 && t.second == N - 1)
//				return visited[t.first][t.second] - 1;
//
//			for (int i = 0; i < 4; i++) {
//				int nA = t.first + gogoA[i];
//				int nB = t.second + gogoB[i];
//
//				if (nA >= 0 && nA < N && nB >= 0 && nB < N) {
//					if (!visited[nA][nB] && !board[nA][nB]) {
//						if (rra != ra) {
//							if(ra == nA)
//								cnt++;
//						}
//						else if (rrb != rb) {
//							if (rb == nB)
//								cnt++;
//						}
//
//						q.push(make_pair(nA, nB));
//						visited[nA][nB] = visited[t.first][t.second] + 1;
//					
//						rra = ra; rrb = rb;
//						ra = nA; rb = nB;
//					}
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> board[i][j];
//		}
//	}
//
//	int result = gyungju() * 100 + cnt * 500;
//	cout << result << endl;
//}