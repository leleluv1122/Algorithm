#include <iostream>
#include <vector>
#include <algorithm>

#define INF 2e9
#define endl "\n"
#define MAX 501
using namespace std;

int N, M, W;
vector<pair<int, int>> g[MAX];
int dist[MAX + 1];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

bool worm() {
	bool b = false;

	for (int i = 2; i <= N; i++)
		dist[i] = INF;
	dist[1] = 0;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			for (int cur = 0; cur < g[j].size(); cur++) {
				int next = g[j][cur].first;
				int cost = g[j][cur].second;

				if (dist[next] > dist[j] + cost) {
					dist[next] = dist[j] + cost;
					if (i == N)
						b = true;
				}
			}
		}
	}

	return b;
}

int main() {
	init();
	int TC;
	cin >> TC;

	while (TC--) {
		for (int i = 0; i < MAX; i++)
			g[i].clear();

		cin >> N >> M >> W;

		int S, E, T;
		for (int i = 0; i < M; i++) {
			cin >> S >> E >> T;

			g[S].push_back(make_pair(E, T));
			g[E].push_back(make_pair(S, T));
		}

		for (int i = 0; i < W; i++) {
			cin >> S >> E >> T;

			g[S].push_back(make_pair(E, -T));
		}

		if (worm())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}


//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <cstring>
//
//#define endl "\n"
//#define MAX 501
//using namespace std;
//
//int N, M, W;
//vector<pair<int, int>> g[MAX];
//bool visited[MAX];
//
//bool worm(int start) {
//	priority_queue<pair<int, int>, vector< pair<int, int>>, greater< pair<int, int>>> pq;
//
//	for (int i = 0; i < g[start].size(); i++) {
//		int dis = g[start][i].first;
//		int cost = g[start][i].second;
//
//		pq.push(make_pair(cost, dis));
//	}
//
//	bool b = false;
//	while (!pq.empty()) {
//		int cur = pq.top().second;
//		int cost = pq.top().first;
//
//		if (visited[cur])
//			continue;
//		visited[cur] = true;
//
//		if (cur == start && cost < 0) {
//			b = true;
//			break;
//		}
//
//		for (int i = 0; i < g[cur].size(); i++) {
//			int next = g[cur][i].first;
//			int n_cost = g[cur][i].second + cost;
//
//			pq.push(make_pair(n_cost, next));
//		}
//	}
//
//	if (b)
//		return true;
//	return false;
//}
//
//int main() {
//	int TC;
//	cin >> TC;
//
//	while (TC--) {
//		for (int i = 0; i < MAX; i++)
//			g[i].clear();
//		memset(visited, false, sizeof(visited));
//
//		cin >> N >> M >> W;
//
//		int S, E, T;
//		for (int i = 0; i < M; i++) {
//			cin >> S >> E >> T;
//
//			g[S].push_back(make_pair(E, T));
//			g[E].push_back(make_pair(S, T));
//		}
//
//		for (int i = 0; i < W; i++) {
//			cin >> S >> E >> T;
//
//			g[S].push_back(make_pair(E, -T));
//			g[E].push_back(make_pair(S, -T));
//		}
//
//		if (worm(1))
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//}