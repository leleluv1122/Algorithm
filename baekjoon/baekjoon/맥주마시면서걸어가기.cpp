//#include <iostream>
//#include <vector>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//const int MAX = 100 + 2;
//int n;
//vector<int> v[MAX];
//bool visited[MAX];
//
//int distance(pair<int, int> p1, pair<int, int> p2) {
//	return abs(p1.first - p2.first) + abs(p1.second - p2.second);
//}
//
//void dfs(int node) {
//	visited[node] = true;
//
//	for (int i = 0; i < v[node].size(); i++) {
//		int next = v[node][i];
//		if (!visited[next])
//			dfs(next);
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int t;
//	cin >> t;
//	while (t--) {
//		memset(visited, 0, sizeof(visited));
//		for (int i = 0; i < MAX; i++)
//			v[i].clear();
//		cin >> n;
//		vector<pair<int, int>> c;
//		for (int i = 0; i < n + 2; i++) {
//			int y, x; cin >> y >> x;
//			c.push_back(make_pair(y, x));
//		}
//
//		for (int i = 0; i < n + 2; i++) {
//			for (int j = i + 1; j < n + 2; j++) {
//				if (distance(c[i], c[j]) <= 50 * 20) {
//					v[i].push_back(j);
//					v[j].push_back(i);
//				}
//			}
//		}
//
//		dfs(0);
//
//		if (visited[n + 1])
//			cout << "happy\n";
//		else
//			cout << "sad\n";
//	}
//}