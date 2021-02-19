#include <iostream>
#include <queue>
#include <algorithm>

#define MAX 101
using namespace std;

int N, M;
int arr[MAX][MAX], visited[MAX][MAX];
int gogoA[4] = { -1,0,1,0 };
int gogoB[4] = { 0,1,0,-1 };
queue<pair<int, int>> q;

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		for (int j = 0; j < M; j++)
			arr[i][j] = s[j] - '0';
	}
	visited[0][0] = 1;
	q.push(make_pair(0, 0));
	while (!q.empty()) {
		int a = q.front().first;
		int b = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int A = a + gogoA[i];
			int B = b + gogoB[i];
			if (A >= 0 && A < N && B >= 0 && B < M && arr[A][B]) {
				if (!visited[A][B]) {
					q.push(make_pair(A, B));
					visited[A][B] = visited[a][b] + 1;
				}
			}
		}
	}
	cout << visited[N - 1][M - 1];
}