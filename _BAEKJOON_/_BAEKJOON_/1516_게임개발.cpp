#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define MAX 501
#define endl "\n"
using namespace std;

int time[MAX], entry[MAX], result[MAX];
vector<vector<int>> v;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	init();
	int N;

	cin >> N;
	v.resize(N + 1);

	for (int i = 1; i <= N; i++) {
		cin >> time[i];

		while (1) {
			int a; cin >> a;
			if (a == -1)
				break;

			v[a].push_back(i);
			entry[i]++;
		}
	}

	queue<int> q;
	for (int i = 1; i <= N; i++) {
		if (entry[i] == 0) {
			q.push(i);
			result[i] = time[i];
		}
	}

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int i = 0; i < v[cur].size(); i++) {
			int next = v[cur][i];
			entry[next]--;

			result[next] = max(result[next], result[cur] + time[next]);
			if (entry[next] == 0)
				q.push(next);
		}
	}

	for (int i = 1; i <= N; i++)
		cout << result[i] << endl;
}


//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//#define endl "\n"
//#define MAX 501
//using namespace std;
//
//int N;
//int time[MAX], entry[MAX];
//vector<int> v[MAX];
//int result[MAX];
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//}
//
//int main() {
//	init();
//	cin >> N;
//
//	for (int i = 1; i <= N; i++) {
//		cin >> time[i];
//		while (1) {
//			int a; cin >> a;
//			if (a == -1) break;
//			v[a].push_back(i);
//			entry[i]++;
//		}
//	}
//
//	queue<int> q;
//	for (int i = 1; i <= N; i++) {
//		if (entry[i] == 0) {
//			q.push(i);
//			result[i] = time[i];
//		}
//	}
//
//	while (!q.empty()) {
//		int cur = q.front();
//		q.pop();
//
//		for (int i = 0; i < v[cur].size(); i++) {
//			int next = v[cur][i];
//			entry[next]--;
//
//			result[next] = max(result[next], result[cur] + time[next]);
//			if (entry[next] == 0)
//				q.push(next);
//		}
//	}
//
//	for (int i = 1; i <= N; i++)
//		cout << result[i] << endl;
//}



// fail
//#include <iostream>
//#include <vector>
//#include <cstring>
//
//#define endl "\n"
//#define MAX 502
//using namespace std;
//
//int N;
//int time[MAX];
//vector<int> v[MAX];
//int visit[MAX];
//bool visited[MAX];
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int game(int a) {
//	visited[a] = true;
//	visit[a] = time[a];
//	if (v[a].size() == 0)
//		return visit[a];
//
//	int time = 0;
//	for (int i = 0; i < v[a].size(); i++) {
//		if (!visited[v[a][i]])
//			time += game(v[a][i]);
//	}
//
//	return visit[a] + time;
//}
//
//int main() {
//	init();
//	cin >> N;
//
//	for (int i = 1; i <= N; i++) {
//		cin >> time[i];
//		int a;
//		while (1) {
//			cin >> a;
//			if (a == -1)
//				break;
//			v[i].push_back(a);
//		}
//	}
//
//	for (int i = 1; i <= N; i++) {
//		memset(visited, false, sizeof(visited));
//		memset(visit, -1, sizeof(visit));
//		cout << game(i) << endl;
//	}
//}



//#include <iostream>
//#include <vector>
//#include <cstring>
//
//#define endl "\n"
//#define MAX 502
//using namespace std;
//
//int N;
//int time[MAX];
//vector<vector<int>> v;
//int rst;
//bool visited[MAX];
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//void game(int a) {
//	rst += time[a];
//	visited[a] = true;
//
//	for (int i = 0; i < v[a].size(); i++) {
//		if (!visited[v[a][i]])
//			game(v[a][i]);
//	}
//}
//
//int main() {
//	init();
//	cin >> N;
//	v.resize(N + 1);
//
//	for (int i = 1; i <= N; i++) {
//		cin >> time[i];
//		int a;
//		while (1) {
//			cin >> a;
//			if (a == -1)
//				break;
//			v[i].push_back(a);
//		}
//	}
//
//	for (int i = 1; i <= N; i++) {
//		memset(visited, 0, sizeof(visited));
//		rst = 0;
//		game(i);
//
//		cout << rst << endl;
//	}
//}