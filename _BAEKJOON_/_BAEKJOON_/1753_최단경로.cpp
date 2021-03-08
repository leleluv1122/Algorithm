#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define MAX 20001
#define INF 987654321
using namespace std;

int V, E, K;
vector<pair<int, int>> v[MAX];

vector<int> dijkstra(int start, int ver) {
	vector<int> d(ver, INF);
	d[start] = 0;
	priority_queue<pair<int, int>> pq;
	pq.push({ 0, start });

	while (!pq.empty()) {
		int cost = -pq.top().first;
		int cv = pq.top().second;
		pq.pop();

		if (d[cv] < cost)
			continue;

		for (int i = 0; i < v[cv].size(); i++) {
			int next = v[cv][i].first;
			int dist = cost + v[cv][i].second;

			if (d[next] > dist) {
				d[next] = dist;
				pq.push({ -dist, next });
			}
		}
	}
	return d;
}

int main() {
	cin >> V >> E >> K;
	V++;
	for (int i = 0; i < E; i++) {
		int a, b, w; cin >> a >> b >> w;
		v[a].push_back({ b, w });
	}

	vector<int> rst = dijkstra(K, V);

	for (int i = 1; i < V; i++) {
		if (rst[i] == INF)
			cout << "INF\n";
		else
			cout << rst[i] << "\n";
	}
}