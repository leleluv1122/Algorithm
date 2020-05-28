//#include<iostream>
//#include<vector>
//#define endl "\n"
//#define MAX 401
//using namespace std;
//int N, K, S;
//int MAP[MAX][MAX];
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> N >> K;
//	for (int i = 0; i < K; i++) {
//		int a, b;
//		cin >> a >> b;
//		MAP[a][b] = -1;
//		MAP[b][a] = 1;
//	}
//	for (int k = 1; k <= N; k++) {
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				if (MAP[i][j] == 0) {
//					if (MAP[i][k] == 1 && MAP[k][j] == 1) {
//						MAP[i][j] = 1;
//					}
//					else if (MAP[i][k] == -1 && MAP[k][j] == -1) {
//						MAP[i][j] = -1;
//					}
//				}
//			}
//		}
//	}
//	cin >> S;
//	for (int i = 0; i < S; i++) {
//		int a, b;
//		cin >> a >> b;
//		cout << MAP[a][b] << endl;
//	}
//}



//////// dfs로 하면 시간초과 어이업네 //////
//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//vector<int> v[400];
//bool visited[400];
//
//void dfs(int a) {
//	visited[a] = true;
//
//	for (int i = 0; i < v[a].size(); i++) {
//		if (!visited[v[a][i]]) {
//			dfs(v[a][i]);
//		}
//	}
//}
//
//int main() {
//	int n, k;
//	cin >> n >> k; // 사건, 관계
//
//	for (int i = 0; i < k; i++) {
//		int a, b; cin >> a >> b;
//		v[a].push_back(b);
//	}
//
//	int s; cin >> s;
//	for (int i = 0; i < s; i++) {
//		int a, b; cin >> a >> b;
//		memset(visited, 0, sizeof(visited));
//		dfs(a);
//		if (!visited[b]) {
//			memset(visited, 0, sizeof(visited));
//			dfs(b);
//			if (visited[a])
//				cout << 1 << "\n";
//			else
//				cout << 0 << "\n";
//		}
//		else
//			cout << -1 << "\n";
//	}
//
//	
//}