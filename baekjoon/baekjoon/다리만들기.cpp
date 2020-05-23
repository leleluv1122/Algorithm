//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//using namespace std;
//const int MAX = 100;
//int N;
//int arr[MAX][MAX];
//int gogoA[4] = { 0,1,0,-1 };
//int gogoB[4] = { 1,0,-1,0 };
//bool visited[MAX][MAX];
//
//void numbering(int a, int b, int cnt) {
//	visited[a][b] = true;
//	arr[a][b] = cnt;
//
//	for (int i = 0; i < 4; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//		if (A >= 0 && A < N && B >= 0 && B < N)
//			if (arr[A][B] && !visited[A][B])
//				numbering(A, B, cnt);
//	}
//}
//
//int counting(int cnt) {
//	queue<pair<int, int>> q;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			if (arr[i][j] == cnt && !visited[i][j]) {
//				visited[i][j] = true;
//				q.push(make_pair(i, j));
//			}
//	int result = 0;
//	while (!q.empty()) {
//		int qsize = q.size();
//		for (int i = 0; i < qsize; i++) {
//			int a = q.front().first;
//			int b = q.front().second;
//			q.pop();
//
//			for (int i = 0; i < 4; i++) {
//				int A = a + gogoA[i];
//				int B = b + gogoB[i];
//
//				if (A >= 0 && A < N && B >= 0 && B < N) {
//					if (arr[A][B] && arr[A][B] != cnt)
//						return result;
//					else if (!arr[A][B] && !visited[A][B]) {
//						visited[A][B] = true;
//						q.push(make_pair(A, B));
//					}
//				}
//			}
//		}
//		result++;
//	}
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			cin >> arr[i][j];
//	int cnt = 1;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (!visited[i][j] && arr[i][j])
//				numbering(i, j, cnt++);
//		}
//	}
//	int result = 99999999;
//	for (int i = 1; i < cnt; i++) {
//		memset(visited, false, sizeof(visited));
//		result = min(result, counting(i));
//	}
//	cout << result << "\n";
//}