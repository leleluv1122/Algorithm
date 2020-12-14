#include <iostream>
#include <vector>
#include <queue>

#define MAX 1001
using namespace std;

int N, M;
vector<int> v[MAX];
bool visited[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void connect(int a) {
	queue<int> q;
	q.push(a);
	visited[a] = true;

	while (!q.empty()) {
		int t = q.front();
		q.pop();
		for (int i = 0; i < v[t].size(); i++) {
			int d = v[t][i];
			if (!visited[d]) {
				visited[d] = true;
				q.push(d);
			}
		}
	}
}

int main() {
	init();
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			connect(i);
			cnt++;
		}
	}
	cout << cnt;
}