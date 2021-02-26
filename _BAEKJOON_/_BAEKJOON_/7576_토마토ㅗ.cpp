#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define MAX 1001
using namespace std;

int N, M;
vector<pair<int, int>> exist;
vector<int> v[MAX];
int gogoA[4] = { 0,1,0,-1 };
int gogoB[4] = { 1,0,-1,0 };
int visited[MAX][MAX];

void tomato() {
	queue<pair<int, int>> q;
	for (int i = 0; i < exist.size(); i++) {
		q.push(make_pair(exist[i].first, exist[i].second));
		visited[exist[i].first][exist[i].second] = 1;
	}

	while (!q.empty()) {
		pair<int, int> t = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int a = t.first + gogoA[i];
			int b = t.second + gogoB[i];

			if (a >= 0 && a < N && b >= 0 && b < M) {
				if (!visited[a][b] && !v[a][b]) {
					q.push(make_pair(a, b));
					visited[a][b] = visited[t.first][t.second] + 1;
				}
			}
		}
	}
}

int main() {
	cin >> M >> N;
	
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) {
			int n; cin >> n;
			v[i].push_back(n);
			if (n == 1)
				exist.push_back(make_pair(i, j));
		}
	tomato();
	int day = 0, t = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (!visited[i][j] && v[i][j] != -1) {
				day = -1;
				t = -1;
				break;
			}
			else if (visited[i][j] && v[i][j] != -1)
				day = max(day, visited[i][j]);
		}
		if (t == -1)
			break;
	}
	if (day == -1)
		cout << -1 << "\n";
	else
		cout << day - 1 << "\n";
}