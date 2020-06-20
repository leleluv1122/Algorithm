#include <iostream>
#include <queue>
#include <vector>

#define endl "\n"
#define INF 987654321
#define MAX 1001
using namespace std;

vector<pair<int, int>> v[MAX];
int N, M;
int road[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

vector<int> loss_cost(int a, int c) {
	vector<int> distance(c, INF);
	distance[a] = 0;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push(make_pair(0, a));

	while (!pq.empty()) {
		int cost = pq.top().first;
		int cur = pq.top().second;
		pq.pop();

		for (int i = 0; i < v[cur].size(); i++) {
			int neighbor = v[cur][i].first;
			int n_distance = cost + v[cur][i].second;

			if (distance[neighbor] > n_distance) {
				distance[neighbor] = n_distance;
				road[neighbor] = cur;
				pq.push(make_pair(n_distance, neighbor));
			}
		}
	}
	return distance;
}

int main() {
	init();
	cin >> N >> M;
	N++;

	while (M--) {
		int a, b, cost;
		cin >> a >> b >> cost;

		v[a].push_back(make_pair(b, cost));
	}

	int Start, Finish;
	cin >> Start >> Finish;

	vector<int> result = loss_cost(Start, N);
	cout << result[Finish] << endl;

	vector<int> route;
	int node = Finish;

	while (node) {
		route.push_back(node);
		node = road[node];
	}

	cout << route.size() << endl;
	for (int i = route.size() - 1; i >= 0; i--)
		cout << route[i] << " ";
	cout << endl;
}





//// dfs로는 최소값은 구할수있지만 경로를 찾을 수 없을듯..ㅠㅠ
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//#define endl "\n"
//#define MAX 1001
//using namespace std;
//
//int n, m;
//vector<pair<int, int>> v[MAX];
//int Start, End;
//int Min = 987654321;
//vector<int> road;
//bool visited[MAX];
//
//void loss_cost(int a, int cost) {
//	visited[a] = true;
//
//	for (int i = 0; i < v[a].size(); i++) {
//		int next = v[a][i].first;
//		int n_cost = v[a][i].second;
//
//		if (!visited[next]) {
//			if (next == End)
//				Min = min(Min, cost + n_cost);
//			else {
//				road.push_back(next);
//				loss_cost(next, cost + n_cost);
//				road.pop_back();
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> n >> m;
//
//	for (int i = 0; i < m; i++) {
//		int sta, en, cost;
//		cin >> sta >> en >> cost;
//		v[sta].push_back(make_pair(en, cost));
//	}
//	cin >> Start >> End;
//	
//	road.push_back(Start);
//	loss_cost(Start, 0);
//
//	cout << Min << endl;
//}