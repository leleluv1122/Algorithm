//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <algorithm>
//#define MAX 102
//#define INF 987654321
//using namespace std;
//
//int n, m;
//int a, b;
//int cnt, res, step;
//int p;
//
//bool visited[MAX];
//vector<int> v[MAX];
//
//void kevin(int ind, int goal, int cn) {
//	if (ind == goal) {
//		step = min(step, cn);
//		return;
//	}
//	for (int i = 0; i < v[ind].size(); i++) {
//		if (!visited[v[ind][i]]) {
//			visited[ind] = true;
//			kevin(v[ind][i], goal, cn + 1);
//			visited[ind] = false;
//		}
//	}
//}
//
//int main(int argc, const char* argv[]) {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> a >> b;
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//	cnt = INF;
//	for (int i = 1; i <= n; i++) {
//		memset(visited, false, sizeof(visited));
//		res = 0;
//		for (int j = 1; j <= n; j++) {
//			step = INF;
//			if (i == j) continue;
//			else {
//				kevin(i, j, 0);
//				res += step;
//			}
//		}
//		if (cnt > res) {
//			cnt = res;
//			p = i;
//		}
//		else if (cnt == res) {
//			p = min(p, i);
//		}
//	}
//	cout << p << endl;
//}