#include <iostream>
#include <queue>
#include <algorithm>

#define MAX 1003
using namespace std;

int result = 1;
int N, M, K;
bool flag;

bool visited[MAX][MAX][12];
int map[MAX][MAX];
queue<pair<pair<int, int>, int>> q;
int gogoA[4] = { 0,1,0,-1 }, gogoB[4] = { 1,0,-1,0 };

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	init();

	cin >> N >> M >> K;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			char c;
			cin >> c;

			map[i][j] = c - '0';
		}
	}

	q.push(make_pair(make_pair(1, 1), 0));
	visited[1][1][0] = true;

	while (!q.empty()) {
		int qsize = q.size();
		
		while (qsize--) {
			int a = q.front().first.first;
			int b = q.front().first.second;
			int kick = q.front().second;
			q.pop();

			if (a == N && b == M) {
				flag = true;
				break;
			}

			for (int i = 0; i < 4; i++) {
				int A = a + gogoA[i];
				int B = b + gogoB[i];
				int nkick = map[A][B] + kick;

				if (A >= 1 && a <= N && B >= 1 && B <= M) {
					if (nkick > K)
						continue;
					if (visited[A][B][nkick])
						continue;
					q.push(make_pair(make_pair(A, B), nkick));
					visited[A][B][nkick] = true;
				}
			}
		}
		if (flag)
			break;
		else
			result++;
	}

	if (flag)
		cout << result << "\n";
	else
		cout << -1 << "\n";
}




//////// 시간 초과 ////////
//#include <iostream>
//
//#define MAX 1001
//using namespace std;
//
//int N, M, K;
//int map[MAX][MAX];
//bool visited[MAX][MAX];
//int result;
//int gogoA[4] = { 0,1,0,-1 }, gogoB[4] = { 1,0,-1,0 };
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//}
//
//void crack(int a, int b, int c, int r) {
//	if (a == N - 1 && b == M - 1 && c <= K) {
//		result = r;
//		return;
//	}
//	if (c > K)
//		return;
//	
//	for (int i = 0; i < 4; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//
//		if (A >= 0 && A < N && B >= 0 && B < M) {
//			if (!visited[A][B]) {
//				visited[A][B] = true;
//				if (map[A][B] == 0)
//					crack(A, B, c, r + 1);
//
//				else
//					crack(A, B, c + 1, r + 1);
//				visited[A][B] = false;
//			}
//		}
//	}
//}
//
//int main() {
//	init();
//
//	cin >> N >> M >> K;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			char c;
//			cin >> c;
//
//			map[i][j] = c - '0';
//		}
//	}
//
//	result = -1;
//	visited[0][0] = true;
//	crack(0, 0, 0, 1);
//
//	cout << result << "\n";
//}