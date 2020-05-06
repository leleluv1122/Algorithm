//#include <iostream>
//#include <queue>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//const int MAX = 300 + 1;
//int T;
//int visited[MAX][MAX];
//int gogoA[8] = { 2,2,-2,-2,1,1,-1,-1 };
//int gogoB[8] = { 1,-1,1,-1,2,-2,2,-2 };
//int main() {
//	cin >> T;
//	for (int t = 0; t < T; t++) {
//		int x1, y1, x2, y2, l;
//		memset(visited, 0, sizeof(visited));
//		cin >> l; // 변의길이
//		cin >> x1 >> y1; // 시작좌표
//		cin >> x2 >> y2; // 가고싶은좌표
//		
//		queue<pair<int,int>> q;
//		
//		q.push(make_pair(x1, y1));
//		while (!q.empty()) {
//			int A = q.front().first;
//			int B = q.front().second;
//			q.pop();
//
//			if (A == x2 && B == y2) {
//				cout << visited[x2][y2] << "\n";
//				while (!q.empty()) {
//					q.pop();
//				}
//				break;
//			}
//
//			for (int i = 0; i < 8; i++) {
//				int nA = A + gogoA[i];
//				int nB = B + gogoB[i];
//
//				if (nA >= 0 && nA < l && nB >= 0 && nB < l) {
//					if (visited[nA][nB] == 0) {
//						q.push(make_pair(nA, nB));
//						visited[nA][nB] = visited[A][B] + 1;
//					}
//				}
//			}
//		}
//	}
//}