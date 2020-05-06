//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//const int MAX = 1000000 + 1;
//int F, S, G, U, D;
//int visited[MAX];
//int bfs() {
//	int gogo[2] = { U,0 - D };
//	queue<int> q;
//
//	q.push(S);
//	visited[S] = 1;
//	while (!q.empty()) {
//		int t = q.front();
//		q.pop();
//
//		if (t == G)
//			return visited[G] - 1;
//
//		for (int i = 0; i < 2; i++) {
//			int j = t + gogo[i];
//			if (j >= 1 && j <= F && !visited[j]) {
//				q.push(j);
//				visited[j] = visited[t] + 1;
//			}
//		}
//	}
//	return -1;
//}
//int main() {
//	cin >> F >> S >> G >> U >> D;
//	memset(visited, 0, sizeof(visited));
//	
//	int r = bfs();
//	if (r == -1)
//		cout << "use the stairs" << endl;
//	else
//		cout << r << endl;
//}