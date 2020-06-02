//#include <iostream>
//#include <vector>
//#include <queue>
//
//#define INF 987654321
//#define endl "\n"
//using namespace std;
//
//int N, M;
//const int MAX = 1000 + 1;
//vector<pair<int, int>> g[MAX];
//int Dist[MAX];
//int Parent[MAX];
//
//void Dijkstra(int start) {
//	for (int i = 1; i <= N; i++)
//		Dist[i] = INF;
//	priority_queue<pair<int, int>> pq;
//	Dist[start] = 0;
//	pq.push(make_pair(0, start));
//
//	while (!pq.empty()) {
//		int cost = -pq.top().first;
//		int cv = pq.top().second;
//		pq.pop();
//		
//		for (int i = 0; i < g[cv].size(); i++) {
//			int neighbor = g[cv][i].first;
//			int distance = cost + g[cv][i].second;
//
//			if (Dist[neighbor] > distance) {
//				Dist[neighbor] = distance;
//				Parent[neighbor] = cv;
//				pq.push(make_pair(-distance, neighbor));
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> N >> M;
//
//	for (int i = 0; i < M; i++) {
//		int a, b, time;
//		cin >> a >> b >> time;
//		g[a].push_back(make_pair(b, time));
//		g[b].push_back(make_pair(a, time));
//	}
//
//	Dijkstra(1);
//
//	cout << N - 1 << endl;
//	for (int i = 2; i <= N; i++)
//		cout << Parent[i] << " " << i << endl;
//}