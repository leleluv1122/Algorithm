//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//const int MAX = 99999 + 1;
//int N, T, G;
//int visited[MAX];
//
//int talchul() {
//	queue<int> q;
//	q.push(N);
//	visited[N] = 1;
//
//	while (!q.empty()) {
//		int t = q.front();
//		q.pop();
//		if (visited[t] - 1 > T)
//			break;
//		if (t == G)
//			return visited[t] - 1;
//
//		int A = t + 1;
//		if (A < MAX && !visited[A]) {
//			visited[A] = visited[t] + 1;
//			q.push(A);
//		}
//		int nono = t * 2;
//		if (nono >= MAX)
//			continue;
//
//		int B = nono;
//		int n = 1;
//		while (nono) {
//			nono /= 10;
//			n *= 10;
//		}
//		n /= 10;
//		B -= n;
//
//		if (B < MAX && !visited[B]) {
//			visited[B] = visited[t] + 1;
//			q.push(B);
//		}
//	}
//	return -1;
//}
//
//int main() {
//	cin >> N >> T >> G;
//	memset(visited, 0, sizeof(visited));
//	int r = talchul();
//	if (r == -1)
//		cout << "ANG" << endl;
//	else
//		cout << r << endl;
//}