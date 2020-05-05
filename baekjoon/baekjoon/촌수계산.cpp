//#include <iostream> 
//#include <queue> 
//#include <vector>
//using namespace std;
//const int MAX = 100;
//int n, x, y, m;
//vector<int> v[MAX];
//int visited[MAX];
//
//int bfs() {
//	queue<int> q;
//	q.push(x);
//	while (!q.empty()) {
//		int t = q.front();
//		q.pop();
//		if (t == y)
//			return visited[y];
//
//		for (int i = 0; i < v[t].size(); i++) {
//			int next = v[t][i];
//			if (visited[next] == 0) {
//				q.push(next);
//				visited[next] = visited[t] + 1;
//			}
//		}
//	}
//	return -1;
//}
//
//int main() {
//	cin >> n >> x >> y >> m;
//
//	for (int i = 0; i < m; i++) {
//		int a, b; cin >> a >> b;
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//	cout << bfs() << endl;
//}