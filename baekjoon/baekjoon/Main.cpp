///// 1753 최단경로

//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//const int MAX = 20000 + 1;
//const int INF = 987654321;
//int V, E, K;
//vector<pair<int, int>> graph[MAX];
//
//vector<int> dijkstra(int start, int vertex) {
//	vector<int> distance(vertex, INF);
//	distance[start] = 0;
//	priority_queue<pair<int, int>> pq;
//	pq.push(make_pair(0, start));
//
//	while (!pq.empty()) {
//		int cost = -pq.top().first;
//		int cv = pq.top().second;
//		pq.pop();
//
//		if (distance[cv] < cost)
//			continue;
//
//		for (int i = 0; i < graph[cv].size(); i++) {
//			int neighbor = graph[cv][i].first;
//			int distances = cost + graph[cv][i].second;
//
//			if (distance[neighbor] > distances) {
//				distance[neighbor] = distances;
//				pq.push(make_pair(-distances, neighbor));
//			}
//		}
//	}
//	return distance;
//}
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> V >> E >> K;
//	V++;
//
//	for (int i = 0; i < E; i++) {
//		int u, v, w;
//		cin >> u >> v >> w;
//		graph[u].push_back(make_pair(v, w));
//	}
//
//	vector<int> result = dijkstra(K, V);
//
//	for (int i = 1; i < V; i++) {
//		if (result[i] == INF)
//			cout << "INF\n";
//		else
//			cout << result[i] << "\n";
//	}
//}