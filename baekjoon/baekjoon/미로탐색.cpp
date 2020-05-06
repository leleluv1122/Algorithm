//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//const int MAX = 100 + 1;
//int N, M;
//int arr[MAX][MAX], visited[MAX][MAX];
//int gogoA[4] = { -1,0,1,0 };
//int gogoB[4] = { 0,-1,0,1 };
//queue<pair<int, int>> q;
//
//int main() {
//	cin >> N >> M;
//	memset(visited, 0, sizeof(visited));
//	for (int i = 0; i < N; i++) {
//		string s; cin >> s;
//		for (int j = 0; j < s.length(); j++) {
//			arr[i][j] = s[j] - '0';
//		}
//	}
//	visited[0][0] = 1;
//	q.push({ 0,0 });
//	while (!q.empty()) {
//		pair<int, int> t = q.front();
//		int A = t.first;
//		int B = t.second;
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int nA = A + gogoA[i];
//			int nB = B + gogoB[i];
//
//			if (nA >= 0 && nA < N && nB >= 0 && nB < M && arr[nA][nB] == 1) {
//				if (visited[nA][nB] == 0) {
//					q.push({ nA,nB });
//					visited[nA][nB] = visited[A][B] + 1;
//				}
//			}
//		}
//	}
//	cout << visited[N - 1][M - 1] << endl;
//}