#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M;
vector<vector<int>> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	v.resize(N + 1);
	int* ent = new int[N + 1];
	fill(ent, ent + N + 1, 0);
	for (int i = 0; i < M; i++) {
		int a, b; cin >> a >> b;
		v[a].push_back(b);
		ent[b]++;
	}

	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 1; i <= N; i++)
		if (ent[i] == 0)
			pq.push(i);

	while (!pq.empty()) {
		int cur = pq.top();
		pq.pop();
		cout << cur << " ";

		for (int i = 0; i < v[cur].size(); i++) {
			int next = v[cur][i];

			if (--ent[next] == 0)
				pq.push(next);
		}
	}
}