#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

#define MAX 1001
using namespace std;

int gogoA[4] = { 0,1,0,-1 };
int gogoB[4] = { 1,0,-1,0 };
int N, M;
vector<int> v[MAX];
vector<pair<int, int>> to;
int visited[MAX][MAX];

void tomato() {
	queue<pair<int, int>> q;
	for (int i = 0; i < to.size(); i++) {
		q.push(make_pair(to[i].first, to[i].second));
		visited[to[i].first][to[i].second] = true;
	}

	while (!q.empty()) {
		pair<int, int> t = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int A = t.first + gogoA[i];
			int B = t.second + gogoB[i];

			if (A >= 0 && A < M && B >= 0 && B < N) {
				if (!visited[A][B] && !v[A][B]) {
					q.push(make_pair(A, B));
					visited[A][B] = visited[t.first][t.second] + 1;
				}
			}
		}
	}
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			int a; cin >> a;
			v[i].push_back(a);
			if (v[i][j] == 1)
				to.push_back(make_pair(i, j));
		}
	}
	tomato();
	int result = 0;
	int t = 0;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j] && v[i][j] != -1) {
				result = -1;
				t = -1;
				break;
			}
			else if (visited[i][j] && v[i][j] != -1)
				result = max(result, visited[i][j]);
		}
		if (t == -1)
			break;
	}
	if (result == -1)
		cout << -1;
	else
		cout << result - 1;
}