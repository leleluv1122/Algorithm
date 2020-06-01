//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//const int MAX = 1000 + 1;
//const int INF = 987654321;
//vector<pair<int, int>> g[MAX];
//
//void dijkstra(vector<int>& distance, int resultS, int N) {
//	//vector<int> distance(N, INF);
//	distance[resultS] = 0;
//
//	priority_queue<pair<int, int>> pq;
//	pq.push(make_pair(0, resultS));
//
//	while (!pq.empty()) {
//		int cost = -pq.top().first;
//		int cv = pq.top().second;
//		pq.pop();
//
//		if (distance[cv] < cost)
//			continue;
//
//		for (int i = 0; i < g[cv].size(); i++) {
//			int neighbor = g[cv][i].first;
//			int distances = cost + g[cv][i].second;
//
//			if (distance[neighbor] > distances) {
//				distance[neighbor] = distances;
//				pq.push(make_pair(-distances, neighbor));
//			}
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	int N, M;
//	cin >> N >> M;
//	N++;
//
//	for (int i = 0; i < M; i++) {
//		int st, en, cost;
//		cin >> st >> en >> cost;
//		g[st].push_back(make_pair(en, cost));
//	}
//
//	int resultS, resultE;
//	cin >> resultS >> resultE;
//	vector<int> result(N, INF);
//	dijkstra(result, resultS, N);
//
//	cout << result[resultE] << "\n";
//}