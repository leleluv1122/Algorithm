#include <iostream>
#include <algorithm>
#include <vector>

#define endl "\n"
#define MAX 100001
using namespace std;

int uf[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int find(int a) {
	if (uf[a] < 0)
		return a;
	return uf[a] = find(uf[a]);
}

bool merge(int a, int b) {
	a = find(a);
	b = find(b);
	
	if (a == b)
		return false;
	uf[b] = a;
	return true;
}

struct Planet {
	int x, y, z;
	int idx;
};

struct Edge {
	int u, v, w;

	Edge() :Edge(-1, -1, 0) {}
	Edge(int u1, int v1, int w1) : u(u1), v(v1), w(w1) {}

	bool operator < (const Edge& E) const {
		return w < E.w;
	}
};

bool X(Planet &a, Planet &b) {
	if (a.x < b.x)
		return true;
	return false;
}

bool Y(Planet& a, Planet& b) {
	if (a.y < b.y)
		return true;
	return false;
}

bool Z(Planet& a, Planet& b) {
	if (a.z < b.z)
		return true;
	return false;
}

Planet p[MAX];
vector<Edge> e;

int main() {
	init();

	int N;
	cin >> N;
	fill(uf, uf + N, -1);
	for (int i = 0; i < N; i++) {
		cin >> p[i].x >> p[i].y >> p[i].z;
		p[i].idx = i;
	}

	sort(p, p + N, X);
	for (int i = 0; i < N - 1; i++)
		e.push_back({ p[i].idx, p[i + 1].idx, abs(p[i].x - p[i + 1].x) });

	sort(p, p + N, Y);
	for (int i = 0; i < N - 1; i++)
		e.push_back({ p[i].idx, p[i + 1].idx, abs(p[i].y - p[i + 1].y) });
	
	sort(p, p + N, Z);
	for (int i = 0; i < N - 1; i++)
		e.push_back({ p[i].idx, p[i + 1].idx, abs(p[i].z - p[i + 1].z) });

	sort(e.begin(), e.end());
	int result = 0;
	for (int i = 0; i < e.size(); i++) {
		if (merge(e[i].u, e[i].v))
			result += e[i].w;
	}

	cout << result << endl;
}



//////// memory over ////////
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//
//#define MAX 100001
//#define endl "\n"
//using namespace std;
//
//int N;
//vector<pair<pair<int, int>, int>> u;
//
//vector<pair<int, int>> v[MAX];
//bool visited[MAX];
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int turnel(int x1, int y1, int z1, int x2, int y2, int z2) {
//	int x = abs(x1 - x2);
//	int y = abs(y1 - y2);
//	int z = abs(z1 - z2);
//
//	return min(min(x, y), z);
//}
//
//int spanning(int start) {
//	priority_queue<pair<int, int>, vector< pair<int, int>>, greater< pair<int, int>>> pq;
//	for (int i = 0; i < v[start].size(); i++) {
//		int next = v[start][i].first;
//		int cost = v[start][i].second;
//
//		pq.push(make_pair(cost, next));
//	}
//	visited[start] = true;
//	
//	int total = 0;
//
//	while (!pq.empty()) {
//		int cur = pq.top().second;
//		int cost = pq.top().first;
//		pq.pop();
//
//		if (visited[cur])
//			continue;
//
//		visited[cur] = true;
//		total += cost;
//
//		for (int i = 0; i < v[cur].size(); i++) {
//			int next = v[cur][i].first;
//			int ncost = v[cur][i].second;
//
//			pq.push(make_pair(ncost, next));
//		}
//	}
//
//	return total;
//}
//
//int main() {
//	init();
//	cin >> N;
//
//	int x, y, z;
//	for (int i = 0; i < N; i++) {
//		cin >> x >> y >> z;
//
//		u.push_back(make_pair(make_pair(x, y), z));
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (i == j)
//				continue;
//
//			int cost = turnel(u[i].first.first, u[i].first.second, u[i].second
//				, u[j].first.first, u[j].first.second, u[j].second);
//
//			v[i].push_back(make_pair(j, cost));
//		}
//	}
//
//	cout << spanning(0) << endl;
//}