//#include <iostream>
//#include <queue>
//#include <string>
//#include <cstring>
//using namespace std;
//const int MAX = 10000;
//bool visited[MAX + 1];
//
//string DSLR(int a, int b) {
//	queue<pair<int, string>> q;
//	q.push(make_pair(a, ""));
//
//	while (!q.empty()) {
//		pair<int, string> t = q.front();
//		q.pop();
//
//		if (t.first == b)
//			return t.second;
//
//		{
//			int D = (t.first * 2) % 10000;
//			if (!visited[D]) {
//				q.push(make_pair(D, t.second + "D"));
//				visited[D] = true;
//			}
//		}
//		{
//			int S = t.first - 1;
//			if (t.first == 0)
//				S = 9999;
//			if (!visited[S]) {
//				q.push(make_pair(S, t.second + "S"));
//				visited[S] = true;
//			}
//		}
//		{
//			int L = (t.first % 1000) * 10 + t.first / 1000;
//			if (!visited[L]) {
//				q.push(make_pair(L, t.second + "L"));
//				visited[L] = true;
//			}
//		}
//		{
//			int R = (t.first % 10) * 1000 + (t.first / 10);
//			if (!visited[R]) {
//				q.push(make_pair(R, t.second + "R"));
//				visited[R] = true;
//			}
//		}
//	}
//}
//
//int main() {
//	int T;
//	cin >> T;
//	for (int t = 0; t < T; t++) {
//		int a, b; cin >> a >> b;
//		memset(visited, 0, sizeof(visited));
//		string s = DSLR(a, b);
//		cout << s << endl;
//	}
//}