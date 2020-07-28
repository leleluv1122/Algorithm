#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstring>

#define MAX 32001
using namespace std;

int N, M;
vector<vector<int>> v;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	init();
	cin >> N >> M;
	v.resize(N + 1);
	int* entry = new int[N + 1];
	fill(entry, entry + N + 1, 0);

	while (M--) {
		int a, b;
		cin >> a >> b;

		v[a].push_back(b);
		entry[b]++;
	}

	priority_queue<int, vector<int>, greater<int>> q;
	for (int i = 1; i <= N; i++) {
		if (entry[i] == 0)
			q.push(i);
	}

	while (!q.empty()) {
		int cur = q.top();
		q.pop();
		cout << cur << " ";

		for (int i = 0; i < v[cur].size(); i++) {
			int next = v[cur][i];

			if (--entry[next] == 0) {
				q.push(next);
			}
		}
	}
}