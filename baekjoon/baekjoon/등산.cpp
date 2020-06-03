//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//struct P {
//	int v;
//	long long w;
//};
//bool operator < (P a, P b) {
//	return a.w > b.w;
//}
//int N, M, D, E;
//vector<P> graph[100000 + 5];
//int height[100000 + 5];
//long long INF = 1e18;
//long long dist[100000 + 5];
//long long dist2[100000 + 5];
//
//void djk(int start, long long dist[]) {
//	priority_queue<P> pq;
//	for (int i = 1; i <= N; i++)
//		dist[i] = INF;
//	dist[start] = 0;
//	pq.push({ start, 0 });
//
//	while (pq.size()) {
//		P cur = pq.top();
//		int curv = cur.v;
//		long long curw = cur.w;
//		int nowH = height[curv];
//		pq.pop();
//		if (dist[curv] < curw)
//			continue;
//		for (P next : graph[curv]) {
//			if (nowH < height[next.v] && dist[curv] + next.w < dist[next.v]) {
//				dist[next.v] = dist[curv] + next.w;
//				pq.push({ next.v, dist[next.v] });
//			}
//		}
//	}
//}
//
//int main() {
//	scanf_s("%d%d%d%d", &N, &M, &D, &E);
//	for (int i = 1; i <= N; i++)
//		scanf_s("%d", &height[i]);
//	while (M--) {
//		int a, b, n;
//		scanf_s("%d%d%d", &a, &b, &n);
//		graph[a].push_back({ b,n });
//		graph[b].push_back({ a,n });
//	}
//	djk(1, dist);
//	djk(N, dist2);
//	long long ret = -INF;
//	for (int i = 2; i <= N - 1; i++) {
//		if (dist[i] == INF || dist2[i] == INF) continue;
//		if (ret < (long long)height[i] * E - (dist[i] + dist2[i]) * D) {
//			ret = (long long)height[i] * E - (dist[i] + dist2[i]) * D;
//		}
//	}
//	if (ret == -INF)
//		printf("Impossible\n");
//	else
//		printf("%lld\n", ret);
//}


//#include <iostream>
//#include <vector>
//#include <queue>
//#define MAX 100010
//#define endl "\n"
//using namespace std;
//
//#define INF 1000000000000
//
//vector<pair<int, int>> graph[100010];
//long long d_up[MAX];
//long long d_down[MAX];
//int height[MAX];
//int V, E;
//int happy, strength;
//
//void dijkstra_up(int start) {
//	priority_queue<pair<long long, int>> pq;
//	pq.push({ 0, start });
//	d_up[start] = 0;
//
//	while (!pq.empty()) {
//		int now = pq.top().second;
//		long long nowCost = -pq.top().first;
//		pq.pop();
//
//		if (nowCost != d_up[now])
//			continue;
//
//		for (int i = 0; i < graph[now].size(); i++) {
//			int next = graph[now][i].first;
//			long long nextCost = nowCost + graph[now][i].second;
//
//			if (height[now] < height[next]) {
//				if (nextCost < d_up[next]) {
//					d_up[next] = nextCost;
//					pq.push({ -nextCost, next });
//				}
//			}
//		}
//	}
//}
//
//void dijkstra_down(int start) {
//	priority_queue<pair<long long, int>> pq; 
//	pq.push({ 0, start });
//	d_down[start] = 0;
//
//	while (!pq.empty()) {
//		int now = pq.top().second;
//		long long nowCost = -pq.top().first;
//		pq.pop();
//
//		if (nowCost != d_down[now]) {
//			continue;
//		}
//		for (int i = 0; i < graph[now].size(); i++) {
//			int next = graph[now][i].first;
//			long long nextCost = graph[now][i].second;
//
//			if (height[now] < height[next]) {
//				if (nowCost + nextCost < d_down[next]) {
//					d_down[next] = nowCost + nextCost;
//					pq.push({ -d_down[next], next });
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> V >> E >> strength >> happy;
//
//	for (int i = 1; i <= V; i++) {
//		cin >> height[i];
//
//		d_up[i] = INF;
//		d_down[i] = INF;
//	}
//
//	for (int i = 1; i <= E; i++) {
//		int a, b, weight;
//		cin >> a >> b >> weight;
//
//		graph[a].push_back({ b, weight });
//		graph[b].push_back({ a, weight });
//	}
//
//	dijkstra_up(1);
//	dijkstra_down(V);
//
//	long long Max = -INF;
//	for (int i = 2; i < V; i++) {
//		if (Max < happy * height[i] - strength * d_up[i] - strength * d_down[i]) {
//			Max = happy * height[i] - strength * d_up[i] - strength * d_down[i];
//		}
//	}
//
//	if (Max == -INF)
//		cout << "Impossible" << endl;
//	else
//		cout << Max << endl;
//}