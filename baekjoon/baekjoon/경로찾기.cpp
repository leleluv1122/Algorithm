//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//const int MAX = 100 + 1;
//int N;
//vector<int> v[MAX];
//bool visited[MAX];
//int c[MAX][MAX];
//int t = 0;
//void kyungro(int a) {
//	if (visited[a])
//		return;
//	visited[a] = 1;
//	
//	for (int i = 0; i < v[a].size(); i++) {
//		int d = v[a][i];
//		c[t][d] = 1;
//		kyungro(d);
//	}
//}
//
//int main() {
//	cin >> N;
//	memset(c, 0, sizeof(c));
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			int a; cin >> a;
//			if (a == 1) {
//				v[i].push_back(j);
//			}
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		t = i;
//		memset(visited, 0, sizeof(visited));
//		if (!visited[i]) {
//			kyungro(i);
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cout << c[i][j] << " ";
//		}
//		cout << endl;
//	}
//}