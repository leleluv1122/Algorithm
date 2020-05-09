//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//const int MAX = 1000 + 1;
//
//int N, M, V; // 정점의개수, 간선의개수, 시작정점의 번호
//vector<int> v[MAX];
//int visited[MAX];
//
//void bfs() {
//	queue<int> q;
//
//	q.push(V);
//	visited[V] = 1;
//
//	while (!q.empty()) {
//		int t = q.front();
//		q.pop();
//
//		cout << t << " ";
//		
//		sort(v[t].begin(), v[t].end());
//		for (int i = 0; i < v[t].size(); i++) {
//			int cr = v[t][i];
//			if (!visited[cr]) {
//				q.push(cr);
//				visited[cr] = 1;
//			}
//		}
//	}
//	cout << endl;
//}
//
//void dfs(int a) {
//	visited[a] = 1;
//	cout << a << " ";
//
//	sort(v[a].begin(), v[a].end());
//	for (int i = 0; i < v[a].size(); i++) {
//		int cr = v[a][i];
//		if (!visited[cr]) {
//			visited[cr] = 1;
//			dfs(cr);
//		}
//	}
//}
//
//int main() {
//	cin >> N >> M >> V;
//
//	for (int i = 0; i < M; i++) {
//		int a, b; cin >> a >> b;
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//	memset(visited, 0, sizeof(visited));
//	dfs(V);
//	cout << endl;
//
//	memset(visited, 0, sizeof(visited));
//	bfs();
//}