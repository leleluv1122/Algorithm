///// MST(Minimum Spanning Tree)

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define endl "\n"
#define MAX 100001
using namespace std;

int N, M;
bool visited[MAX];
vector<pair<int, int>> v[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int city(int start) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	visited[start] = true;

	for (int i = 0; i < v[start].size(); i++) {
		int cur = v[start][i].first;
		int cost = v[start][i].second;

		pq.push(make_pair(cost, cur));
	}

	int max_cost = 0;
	int result = 0;

	while (!pq.empty()) {
		int cost = pq.top().first;
		int cur = pq.top().second;
		pq.pop();

		if (visited[cur])
			continue;

		visited[cur] = true;
		result += cost;
		max_cost = max(max_cost, cost);

		for (int i = 0; i < v[cur].size(); i++) {
			int next = v[cur][i].first;
			int n_cost = v[cur][i].second;

			pq.push(make_pair(n_cost, next));
		}
	}

	return result - max_cost;
}

int main() {
	init();
	cin >> N >> M;

	int a, b, cost;
	for (int i = 0; i < M; i++) {
		cin >> a >> b >> cost;
		v[a].push_back(make_pair(b, cost));
		v[b].push_back(make_pair(a, cost));
	}

	cout << city(1) << endl;
}