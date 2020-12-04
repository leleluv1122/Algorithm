#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>

#define MAX 1001
using namespace std;

int N, M, V;
vector<int> v[MAX];
bool visited[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void dfs(int a) {
	visited[a] = true;
	cout << a << " ";

	sort(v[a].begin(), v[a].end());
	for (int i = 0; i < v[a].size(); i++) {
		int t = v[a][i];
		if (!visited[t]) {
			visited[t] = true;
			dfs(t);
		}
	}
}

void bfs() {
	queue<int> q;
	q.push(V);
	visited[V] = true;

	while (!q.empty()) {
		int t = q.front();
		q.pop();

		cout << t << " ";
		sort(v[t].begin(), v[t].end());
		for (int i = 0; i < v[t].size(); i++) {
			int d = v[t][i];
			if (!visited[d]) {
				q.push(d);
				visited[d] = true;
			}
		}
	}
	cout << "\n";
}

int main() {
	init();
	cin >> N >> M >> V;
	
	for (int i = 0; i < M; i++) {
		int a, b; cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	memset(visited, 0, sizeof(visited));
	dfs(V);
	cout << "\n";
	
	memset(visited, 0, sizeof(visited));
	bfs();
}