#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define MAX 1001
#define endl "\n"
using namespace std;

vector<vector<int>> v;
vector<int> result;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	init();
	int N, M;
	cin >> N >> M;
	int* entry = new int[N + 1];
	fill(entry, entry + N + 1, 0);
	v.resize(N + 1);

	while (M--) {
		int n;
		cin >> n;

		int a, b;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (i == 0) {
				b = a;
				continue;
			}
			
			v[b].push_back(a);
			entry[a]++;
			b = a;
		}
	}

	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 1; i <= N; i++)
		if (entry[i] == 0)
			pq.push(i);

	if (pq.empty()) {
		cout << 0 << endl;
		exit(0);
	}

	while (!pq.empty()) {
		int cur = pq.top();
		pq.pop();
		result.push_back(cur);

		for (int i = 0; i < v[cur].size(); i++) {
			int next = v[cur][i];

			if (--entry[next] == 0)
				pq.push(next);
		}
	}

	if (result.size() != N) {
		cout << 0 << endl;
		exit(0);
	}

	for (int i = 0; i < result.size(); i++)
		cout << result[i] << endl;
}