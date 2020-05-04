//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//const int MAX = 100;
//int N;
//int arr[MAX][MAX], jam[MAX][MAX], visited[MAX][MAX];
//
//int gogoA[4] = { 0,1,0,-1 };
//int gogoB[4] = { 1,0,-1,0 };
//
//vector<int> v;
//int d = 0;
//
//void jamgim(int a, int b) {
//	if (visited[a][b])
//		return;
//	visited[a][b] = 1;
//
//	for (int i = 0; i < 4; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//
//		if (A >= 0 && A < N && B >= 0 && B < N) {
//			if (arr[A][B] >= d)
//				jamgim(A, B);
//		}
//	}
//}
//
//bool compare(int a, int b) {
//	if (a > b)
//		return true;
//	return false;
//}
//
//int main() {
//	cin >> N;
//	int m = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> arr[i][j];
//			m = max(m, arr[i][j]);
//		}
//	}
//
//	while (d <= m) {
//		memset(visited, 0, sizeof(visited));
//		d++;
//		int cnt = 0;
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				if (visited[i][j] == 0 && arr[i][j] >= d) {
//					jamgim(i, j);
//					cnt++;
//				}
//			}
//		}
//		v.push_back(cnt);
//	}
//	sort(v.begin(), v.end(), compare);
//	cout << v[0] << endl;
//}