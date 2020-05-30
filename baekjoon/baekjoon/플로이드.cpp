//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int MAX = 100 + 1;
//int bus[MAX][MAX];
//int n, m;
//
//void floyd() {
//	for (int i = 1; i <= n; i++) {
//		for (int b = 1; b <= n; b++) {
//			if (bus[b][i] == 0)
//				continue;
//			for (int e = 1; e <= n; e++) {
//				if (bus[i][e] == 0 || b == e)
//					continue;
//				if (bus[b][e] == 0 || bus[b][e] > bus[b][i] + bus[i][e]) {
//					bus[b][e] = bus[b][i] + bus[i][e];
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		int b, e, cost; cin >> b >> e >> cost;
//		if (!bus[b][e])
//			bus[b][e] = cost;
//		else
//			bus[b][e] = min(bus[b][e], cost);
//	}
//
//	floyd();
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++)
//			cout << bus[i][j] << " ";
//		cout << "\n";
//	}
//}