#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define MAX 1001
#define INF 987654321
using namespace std;

vector<pair<int, int>> v[MAX];

vector<int> min_cost(int rstS, int N) {
	vector<int> distance(N, INF);
	distance[rstS] = 0;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push(make_pair(0, rstS));

	while (!pq.empty()) {
		int cost = pq.top().first;
		int ct = pq.top().second;
		pq.pop();

		if (distance[ct] < cost)
			continue;

		for (int i = 0; i < v[ct].size(); i++) {
			int next = v[ct][i].first;
			int ncost = cost + v[ct][i].second;

			if (distance[next] > ncost) {
				distance[next] = ncost;
				pq.push(make_pair(ncost, next));
			}
		}
	}
	return distance;
}

int main() {
	int N, M;
	cin >> N >> M;
	N++;
	for (int i = 0; i < M; i++) {
		int a, b, cost;
		cin >> a >> b >> cost;
		v[a].push_back(make_pair(b, cost));
	}

	int rstS, rstE;
	cin >> rstS >> rstE;
	vector<int> rst = min_cost(rstS, N);
	cout << rst[rstE];
}