//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//#define MAX 202
//using namespace std;
//
//int A, B, C;
//vector<int> v;
//bool visited[MAX][MAX];
//
//void bfs() {
//	queue <pair<pair<int, int>, int>> q;
//	q.push(make_pair(make_pair(0, 0), C));
//
//	while (!q.empty()) {
//		int a = q.front().first.first;
//		int b = q.front().first.second;
//		int c = q.front().second;
//		q.pop();
//
//		if (visited[a][b])
//			continue;
//		visited[a][b] = true;
//
//		if (a == 0)
//			v.push_back(c);
//
//		// a -> b
//		if (a + b > B)
//			q.push(make_pair(make_pair(a + b - B, B), c));
//		else
//			q.push(make_pair(make_pair(0, a + b), c));
//
//		// a -> c
//		if (a + c > C)
//			q.push(make_pair(make_pair(a + c - C, b), C));
//		else
//			q.push(make_pair(make_pair(0, b), a + c));
//
//		// b -> a
//		if (a + b > A)
//			q.push(make_pair(make_pair(A, a + b - A), c));
//		else
//			q.push(make_pair(make_pair(a + b, 0), c));
//
//		// b->c
//		if (b + c > C)
//			q.push(make_pair(make_pair(a, b + c - C), C));
//		else
//			q.push(make_pair(make_pair(a, 0), b + c));
//
//		// c-> a
//		if (a + c > A)
//			q.push(make_pair(make_pair(A, b), a + c - A));
//		else
//			q.push(make_pair(make_pair(a + c, b), 0));
//
//		// c->b
//		if (b + c > B)
//			q.push(make_pair(make_pair(a, B), b + c - B));
//		else
//			q.push(make_pair(make_pair(a, b + c), 0));
//	}
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	cin >> A >> B >> C;
//	bfs();
//	sort(v.begin(), v.end());
//
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//}