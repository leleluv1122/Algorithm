//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//const int INF = 987654321;
//const int MAX = 800 + 1;
//vector<pair<int, int>> g[MAX];
//
//vector<int> dijkstra(int start, int N) {
//	priority_queue<pair<int, int>> pq;
//	vector<int> result(N, INF);
//
//	result[start] = 0;
//	pq.push(make_pair(0, start));
//	
//	while (!pq.empty()) {
//		int cost = -pq.top().first;
//		int cv = pq.top().second;
//		pq.pop();
//
//		if (result[cv] < cost)
//			continue;
//
//		for (int i = 0; i < g[cv].size(); i++) {
//			int neighbor = g[cv][i].first;
//			int distance = cost + g[cv][i].second;
//
//			if (result[neighbor] > distance) {
//				result[neighbor] = distance;
//				pq.push(make_pair(-distance, neighbor));
//			}
//		}
//	}
//	return result;
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int N, E; // 정점개수, 간선개수
//	cin >> N >> E;
//	N++;
//
//	for (int i = 0; i < E; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		g[a].push_back(make_pair(b, c));
//		g[b].push_back(make_pair(a, c));
//	}
//	int resultS, resultE;
//	cin >> resultS >> resultE;
//	
//	vector<int> result = dijkstra(1, N);
//	vector<int> r1 = dijkstra(resultS, N);
//	vector<int> r2 = dijkstra(resultE, N);
//
//	int ans = min(result[resultS] + r1[resultE] + r2[N - 1], result[resultE] + r2[resultS] + r1[N - 1]);
//	if (ans >= INF || ans < 0)
//		cout << -1 << "\n";
//	else
//		cout << ans << "\n";
//}