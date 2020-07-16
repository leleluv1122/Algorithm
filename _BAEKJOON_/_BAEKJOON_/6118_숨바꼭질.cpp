#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define endl "\n"
#define MAX 20001
#define INF 2e9
using namespace std;

int N, M;
vector<int> v[MAX];
vector<int> ans;
bool visited[MAX];
int p[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
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

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push(make_pair(0, 1)); // (cost, road)
	int maxcost = 0;

	while (!pq.empty()) {
		int road = pq.top().second;
		int cost = pq.top().first;
		pq.pop();

		if (visited[road])
			continue;
		visited[road] = true;
		p[road] = cost;
		maxcost = max(maxcost, p[road]);

		for (int i = 0; i < v[road].size(); i++) {
			int next = v[road][i];
			int ncost = cost + 1;

			pq.push(make_pair(ncost, next));
		}
	}

	for (int i = 1; i <= N; i++)
		if (maxcost == p[i])
			ans.push_back(i);

	cout << ans[0] << " " << maxcost << " " << ans.size() << endl;
}