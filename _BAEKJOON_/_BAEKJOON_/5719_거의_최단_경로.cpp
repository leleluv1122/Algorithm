#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>

#define endl "\n"
#define MAX 501
#define INF 987654321
using namespace std;

int N, M;
vector<pair<int, int>> road[MAX];
vector<pair<int, int>> trace[MAX];
bool visited[MAX][MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

vector<int> almost_road(int start, int endss) {
	vector<int> distance(endss, INF);
	distance[start] = 0;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push(make_pair(0, start));

	while (!pq.empty()) {
		int cost = pq.top().first;
		int cur = pq.top().second;
		pq.pop();

		if (distance[cur] < cost)
			continue;

		for (int i = 0; i < road[cur].size(); i++) {
			int next = road[cur][i].first;
			int ncost = cost + road[cur][i].second;

			if (road[cur][i].second == -1)
				continue;

			if (distance[next] > ncost) {
				distance[next] = ncost;
				pq.push(make_pair(ncost, next));

				trace[next].clear();
				trace[next].push_back(make_pair(cur, ncost));
			}
			else if (distance[next] == ncost)
				trace[next].push_back(make_pair(cur, ncost));
		}
	}
}

int main() {
	init();
	while (1) {
		for (int i = 0; i < MAX; i++)
			road[i].clear();
		memset(trace, 0, sizeof(trace));
		memset(visited, false, sizeof(visited));

		cin >> N >> M;

		if (N == 0 && M == 0)
			break;
		int S, D;
		cin >> S >> D;

		int U, V, P;
		while (M--) {
			cin >> U >> V >> P;
			road[U].push_back(make_pair(V, P));
		}

		almost_road(S, N);
	}
}




//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//
//#define endl "\n"
//#define MAX 501
//using namespace std;
//
//vector<pair<int, int>> road[MAX];
//int N, M, S, D, mini;
//vector<int> dst;
//bool visited[MAX];
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//void almost_road(int start, int dist) {
//	if (start == D) {
//		if (dist < mini)
//			mini = dist;
//		dst.push_back(dist);
//		return;
//	}
//	if (visited[start])
//		return;
//	visited[start] = true;
//
//	for (int i = 0; i < road[start].size(); i++) {
//		int next = road[start][i].first;
//		int ndist = dist + road[start][i].second;
//
//		almost_road(next, ndist);
//	}
//}
//
//int main() {
//	init();
//	while (1) {
//		for (int i = 0; i < MAX; i++)
//			road[i].clear();
//		dst.clear();
//		mini = 987654321;
//		memset(visited, false, sizeof(visited));
//
//		cin >> N >> M;
//
//		if (N == 0 && M == 0)
//			break;
//		cin >> S >> D;
//
//		int U, V, P;
//		while (M--) {
//			cin >> U >> V >> P;
//			road[U].push_back(make_pair(V, P));
//		}
//
//		almost_road(S, 0);
//
//		int real_min = 987654321;
//		for (int i = 0; i < dst.size(); i++) {
//			if (mini == dst[i])
//				continue;
//			if (dst[i] < real_min)
//				real_min = dst[i];
//		}
//
//		cout << real_min << endl;
//	}
//}