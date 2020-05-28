//#include <iostream>
//#include <cstring>
//#include <queue>
//using namespace std;
//char arr[30][30][30];
//int visited[30][30][30];
//int L, R, F;
//pair<pair<int, int>, int> s; // 높이 세로 가로
//pair<pair<int, int>, int> es; // 높이 세로 가로
//int gogoA[6] = { 0,0,0,0,1,-1 }; // 높이
//int gogoB[6] = { 0,1,0,-1,0,0 }; // 세로
//int gogoC[6] = { 1,0,-1,0,0,0 }; // 가로
//
//int escape() {
//	queue<pair<pair<int, int>, int>> q;
//	q.push(s);
//	visited[s.first.first][s.first.second][s.second] = 1;
//	while (!q.empty()) {
//		pair<pair<int, int>, int> t = q.front();
//		q.pop();
//
//		if (t == es)
//			return visited[t.first.first][t.first.second][t.second]; // 최단시간 return
//
//		for (int i = 0; i < 6; i++) {
//			int A = t.first.first + gogoA[i]; // 높이
//			int B = t.first.second + gogoB[i]; // 세로
//			int C = t.second + gogoC[i]; // 가로
//
//			if (A >= 0 && A < L && B >= 0 && B < R && C >= 0 && C < F) {
//				if (!visited[A][B][C] && arr[A][B][C] != '#') {
//					q.push(make_pair(make_pair(A, B), C));
//					visited[A][B][C] = visited[t.first.first][t.first.second][t.second] + 1;
//				}
//			}
//		}
//	}
//	return -1; // q를 다 돌았음에도 return하지 못하면 탈출하지 못하므로
//}
//
//int main() {
//	while (1) {
//		cin >> L >> R >> F;
//		if (L == 0 && R == 0 && F == 0)
//			break;
//		memset(visited, 0, sizeof(visited)); // 케이스마다 초기화
//
//		for (int i = 0; i < L; i++)
//			for (int j = 0; j < R; j++)
//				for (int k = 0; k < F; k++) {
//					cin >> arr[i][j][k];
//					if (arr[i][j][k] == 'S') // 내위치
//						s = make_pair(make_pair(i, j), k);
//					if (arr[i][j][k] == 'E') // 탈출위치
//						es = make_pair(make_pair(i, j), k);
//				}
//
//		int r = escape();
//		if (r == -1) // 탈출못한값
//			printf("Trapped!\n");
//		else // 탈출한 최단시간인데 원래위치를 +1해줬기 때문에 -1을 한다
//			printf("Escaped in %d minute(s).\n", r - 1);
//	}
//}