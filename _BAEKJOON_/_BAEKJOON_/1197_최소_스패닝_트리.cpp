#include <iostream>
#include <vector>
#include <queue>

#define endl "\n"
#define MAX 10001
using namespace std;

int V, E;
vector<pair<int, int>> v[MAX];
bool visited[MAX];

int spanning(int start) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	for (int i = 0; i < v[start].size(); i++) {
		int next = v[start][i].first;
		int cost = v[start][i].second;

		pq.push(make_pair(cost, next));
	}
	visited[start] = true;

	int result = 0;
	while (!pq.empty()) {
		int cur = pq.top().second;
		int cost = pq.top().first;
		pq.pop();

		if (visited[cur])
			continue;
		visited[cur] = true;
		result += cost;

		for (int i = 0; i < v[cur].size(); i++) {
			int next = v[cur][i].first;
			int n_cost = v[cur][i].second;

			pq.push(make_pair(n_cost, next));
		}
	}

	return result;
}

void input() {
	cin >> V >> E;

	int a, b, cost;
	for (int i = 0; i < E; i++) {
		cin >> a >> b >> cost;
		v[a].push_back(make_pair(b, cost));
		v[b].push_back(make_pair(a, cost));
	}
}

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	input();

	cout << spanning(1) << endl;
}