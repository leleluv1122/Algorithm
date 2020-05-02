//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//const int MAX = 100 + 1;
//int M, N, K;
//int arr[MAX][MAX], visited[MAX][MAX];
//vector<int> v;
//int dd;
//int gogoA[4] = { 1,0,-1,0 };
//int gogoB[4] = { 0,1,0,-1 };
//void monun(int a, int b) {
//	if (visited[a][b])
//		return;
//	visited[a][b] = 1;
//
//	for (int i = 0; i < 4; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//
//		if (A >= 0 && A < M && B >= 0 && B < N) {
//			if (arr[A][B] == 0)
//				monun(A, B);
//		}
//	}
//	dd++;
//}
//
//int main() {
//	cin >> M >> N >> K;
//	memset(arr, 0, sizeof(arr));
//	memset(visited, 0, sizeof(visited));
//	for (int t = 0; t < K; t++) {
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		for (int i = y1; i < y2; i++) {
//			for (int j = x1; j < x2; j++) {
//				arr[i][j] = 1;
//			}
//		}
//	}
//
//	for (int i = M - 1; i >= 0; i--) {
//		for (int j = 0; j < N; j++) {
//			if (visited[i][j] == 0 && arr[i][j] == 0) {
//				dd = 0;
//				monun(i, j);
//				v.push_back(dd);
//			}
//		}
//	}
//	
//	sort(v.begin(), v.end());
//	cout << v.size() << endl;
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//}