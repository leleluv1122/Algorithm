#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

#define MAX 10001
using namespace std;

int N, M;
vector<int> v[MAX];
int visited[MAX];
int com_num[MAX];
int cnt;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void dfs(int a) {
	visited[a] = true;

	for (int i = 0; i < v[a].size(); i++) {
		if (!visited[v[a][i]]) {
			cnt++;
			dfs(v[a][i]);
		}
	}
}

int main() {
	init();
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		a--; b--;
		v[b].push_back(a);
	}

	int max_num = 0;
	for (int i = 0; i < N; i++) {
		memset(visited, false, sizeof(visited));
		cnt = 0;
		dfs(i);
		if (max_num < cnt)
			max_num = cnt;
		com_num[i] = cnt;
	}

	for (int i = 0; i < N; i++)
		if (max_num == com_num[i])
			cout << i + 1 << " ";
}




//#include <iostream>
//#include <queue>
//#include <cstring>
//#include <vector>
//#include <algorithm>
//
//#define endl "\n"
//#define MAX 10001
//using namespace std;
//
//int N, M;
//vector<int> v[MAX];
//queue<int> q;
//int visited[MAX];
//int com_num[MAX];
//int cnt;
//
//int main() {
//	cin >> N >> M;
//
//	for (int i = 0; i < M; i++) {
//		int a, b;
//		cin >> a >> b;
//		a--; b--;
//		v[b].push_back(a);
//	}
//
//	int num = 0;
//	for (int i = 0; i < M; i++) {
//		memset(visited, false, sizeof(visited));
//		cnt = 0;
//		for (int j = 0; j < v[i].size(); j++) {
//			q.push(v[i][j]);
//			visited[v[i][j]] = true;
//			cnt++;
//		}
//
//		while (!q.empty()) {
//			int a = q.front();
//			q.pop();
//
//			for (int j = 0; j < v[a].size(); j++) {
//				if (!visited[v[a][j]]) {
//					q.push(v[a][j]);
//					cnt++;
//				}
//			}
//		}
//
//		com_num[i] = cnt;
//		num = max(num, com_num[i]);
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (num == com_num[i])
//			cout << i + 1 << " ";
//	}
//	cout << endl;
//}