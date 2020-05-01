//#include <iostream>
//#include <vector>
//using namespace std;
//const int MAX = 1000 + 1;
//
//int M, N;
//vector<int> v[MAX];
//bool visited[MAX];
//
//void jungjum(int a) {
//	visited[a] = true;
//
//	for (int i = 0; i < v[a].size(); i++) {
//		int next = v[a][i];
//
//		if (!visited[next])
//			jungjum(next);
//	}
//}
//
//int main() {
//	cin >> N >> M;
//
//	for (int i = 0; i < M; i++) {
//		int a, b; cin >> a >> b;
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//	int cnt = 0;
//
//	for (int i = 1; i <= N; i++) {
//		if (!visited[i]) {
//			jungjum(i);
//			cnt++;
//		}
//	}
//	cout << cnt << endl;
//}