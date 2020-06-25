#include <iostream>
#include <algorithm>
#include <cstring>

#define endl "\n"
#define MAX 1001
using namespace std;

int N;
int building[MAX];
int order[MAX][MAX];
int visited[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int find_craft(int destination) {
	int &result = visited[destination];
	if (result != -1)
		return result;

	int time = 0;
	for (int i = 1; i <= N; i++)
		if (order[i][destination])
			time = max(time, find_craft(i));

	return result = time + building[destination];
}

int main() {
	init();
	int t;
	cin >> t;

	while (t--) {
		int K, W, a, b;
		cin >> N >> K;

		for (int i = 1; i <= N; i++)
			cin >> building[i];
		memset(visited, -1, sizeof(visited));
		memset(order, 0, sizeof(order));

		for (int i = 0; i < K; i++) {
			cin >> a >> b;
			order[a][b] = 1;
		}
		cin >> W;

		cout << find_craft(W) << endl;
	}
}






////// 시간초과
//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <algorithm>
//
//#define endl "\n"
//using namespace std;
//
//int t, N, K, W;
//int building[1001];
//vector<int> v[1000];
//int sum;
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//void find_craft(int a, int s) {
//	if (v[a].size() == 0) {
//		sum = max(sum, s);
//		return;
//	}
//
//	for (int i = 0; i < v[a].size(); i++) {
//		find_craft(v[a][i], s + building[v[a][i]]);
//	}
//}
//
//int main() {
//	init();
//	cin >> t;
//
//	while (t--) {
//		sum = 0;
//		memset(building, 0, sizeof(building));
//		cin >> N >> K;
//
//		for (int i = 0; i < 1000; i++)
//			v[i].clear();
//
//		for (int i = 1; i <= N; i++)
//			cin >> building[i];
//		for (int i = 0; i < K; i++) {
//			int a, b;
//			cin >> a >> b;
//			v[b].push_back(a); // a지은다음 b건설가능
//		}
//		cin >> W;
//
//		find_craft(W, building[W]);
//
//		cout << sum << endl;
//	}
//}