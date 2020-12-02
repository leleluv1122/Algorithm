#include <iostream>
#include <queue>
#include <algorithm>

#define MAX 101
using namespace std;

int N, M;
int arr[MAX][MAX], visited[MAX][MAX];
int gogoA[4] = { -1,0,1,0 };
int gogoB[4] = { 0,-1,0,1 };
queue<pair<int, int>> q;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		for (int j = 0; j < s.size(); j++)
			arr[i][j] = s[j] - '0';
	}
	visited[0][0] = 1;
	q.push(make_pair(0, 0));
	while (!q.empty()) {
		int A = q.front().first;
		int B = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nA = A + gogoA[i];
			int nB = B + gogoB[i];

			if (nA >= 0 && nA < N && nB >= 0 && nB < M && arr[nA][nB]) {
				if (!visited[nA][nB]) {
					q.push(make_pair(nA, nB));
					visited[nA][nB] = visited[A][B] + 1;
				}
			}
		}
	}
	cout << visited[N - 1][M - 1] << "\n";
}