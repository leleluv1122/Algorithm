///// Kruskal's algorithm //////
#include <iostream>
#include <algorithm>

#define endl "\n"
using namespace std;

int uf[1001];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

struct Edge {
	int u, v, weight;
	Edge() :Edge(-1, -1, 0){}
	Edge(int a1, int b1, int w) : u(a1), v(b1), weight(w) {}

	bool operator < (const Edge& E) const {
		return weight < E.weight;
	}
};

int find(int i) {
	if (uf[i] < 0)
		return i;
	return uf[i] = find(uf[i]);
}

bool merge(int i, int j) {
	i = find(i);
	j = find(j);

	if (i == j)
		return false;
	uf[j] = i;
	return true;
}

Edge e[100001];

int main() {
	init();

	int N, M;
	cin >> N >> M;
	
	for (int i = 0; i < M; i++) {
		int a, b, cost;
		cin >> a >> b >> cost;

		e[i] = Edge(a - 1, b - 1, cost);
	}
	sort(e, e + M);

	int result = 0, idx = 0;
	fill(uf, uf + N, -1);

	for (int i = 0;; i++) {
		if (merge(e[i].u, e[i].v)) {
			result += e[i].weight;

			idx++;
			if (idx == N - 1)
				break;
		}
	}

	cout << result << endl;
}

//////// priority_queue »ç¿ë ////////
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//#define MAX 1001
//#define endl "\n"
//using namespace std;
//
//int N, M;
//vector<pair<int, int>> v[MAX];
//bool visited[MAX];
//
//int computer(int start) {
//	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//
//	for (int i = 0; i < v[start].size(); i++) {
//		int cost = v[start][i].second;
//		int next = v[start][i].first;
//
//		pq.push(make_pair(cost, next));
//	}
//	visited[start] = true;
//
//	int result = 0;
//	while (!pq.empty()) {
//		int cur = pq.top().second;
//		int cost = pq.top().first;
//		pq.pop();
//
//		if (visited[cur])
//			continue;
//		visited[cur] = true;
//		result += cost;
//
//		for (int i = 0; i < v[cur].size(); i++) {
//			int next = v[cur][i].first;
//			int n_cost = v[cur][i].second;
//
//			pq.push(make_pair(n_cost, next));
//		}
//	}
//
//	return result;
//}
//
//void input() {
//	cin >> N >> M;
//
//	int a, b, cost;
//	for (int i = 0; i < M; i++) {
//		cin >> a >> b >> cost;
//		v[a].push_back(make_pair(b, cost));
//		v[b].push_back(make_pair(a, cost));
//	}
//}
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	input();
//
//	cout << computer(1) << endl;
//}