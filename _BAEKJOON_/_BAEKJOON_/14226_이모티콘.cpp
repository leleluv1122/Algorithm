#include <iostream>
#include <queue>
#define MAX 1001
using namespace std;
int S;
bool visited[MAX][MAX];
int bfs() {
	queue<pair<pair<int, int>, int>> q;
	q.push(make_pair(make_pair(1, 0), 0)); // cnt, copyval, time
	visited[1][0] = true;

	while (!q.empty()) {
		int ccnt = q.front().first.first;
		int cval = q.front().first.second;
		int ctime = q.front().second;
		q.pop();

		if (ccnt == S)
			return ctime;

		if (ccnt > 0 && ccnt < MAX) {
			if (!visited[ccnt][ccnt]) {
				visited[ccnt][ccnt] = true;
				q.push(make_pair(make_pair(ccnt, ccnt), ctime + 1));
			}

			if (!visited[ccnt - 1][cval]) {
				visited[ccnt - 1][cval] = true;
				q.push(make_pair(make_pair(ccnt - 1, cval), ctime + 1));
			}
		}
		if (cval > 0 && ccnt + cval < MAX)
			if (!visited[ccnt + cval][cval]) {
				visited[ccnt + cval][cval] = true;
				q.push(make_pair(make_pair(ccnt + cval, cval), ctime + 1));
			}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> S;
	cout << bfs();
}


//// memory excess
//#include <iostream>
//#include <queue>
//#include <algorithm>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int S, result = 0; cin >> S;
//
//	priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
//	pq.push(make_pair(0, make_pair(1, 0))); // time, cnt, copyval
//	while (!pq.empty()) {
//		int ctime = pq.top().first;
//		int ccnt = pq.top().second.first;
//		int cval = pq.top().second.second;
//		pq.pop();
//
//		if (ccnt == S) {
//			result = ctime;
//			break;
//		}
//
//		pq.push(make_pair(ctime + 1, make_pair(ccnt, ccnt)));
//		if (cval != 0)
//			pq.push(make_pair(ctime + 1, make_pair(ccnt + cval, cval)));
//		if (ccnt - 1 != 0)
//			pq.push(make_pair(ctime + 1, make_pair(ccnt - 1, cval)));
//	}
//	cout << result;
//}