#include <iostream>



//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//#define MAX 101
//using namespace std;
//
//int arr[MAX][MAX];
//int mrr[MAX][MAX]; // melting
//int N, M;
//int gogoA[4] = { 0,1,0,-1 };
//int gogoB[4] = { 1,0,-1,0 };
//vector<pair<int, int>> v;
//int Cheese;
//
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int melting() {
//	queue<pair<int, int>> q;
//	for (int i = 0; i < v.size(); i++)
//		q.push(v[i]);
//	Cheese = v.size();
//	v.clear();
//	
//	int time = 0;
//	while (1) {
//		if (q.empty()) {
//			if (!v.empty()) {
//				for (int i = 0; i < N; i++)
//					for (int j = 0; j < M; j++)
//						arr[i][j] = mrr[i][j];
//
//				for (int i = 0; i < v.size(); i++)
//					q.push(v[i]);
//				Cheese = v.size();
//				v.clear();
//				time++;
//			}
//			else
//				break;
//		}
//
//		pair<int, int> t = q.front();
//		q.pop();
//
//		int cnt = 0;
//		for (int i = 0; i < 4; i++) {
//			int A = t.first + gogoA[i];
//			int B = t.second + gogoB[i];
//
//			if (cnt == 0) {
//				if (A >= 0 && A < N && B >= 0 && B < M) {
//					if (arr[A][B] == 0)
//						cnt++;
//				}
//			}
//			else
//				break;
//		}
//		if (cnt != 0) {
//			mrr[t.first][t.second] = 0;
//		}
//		else {
//			v.push_back(t);
//		}
//	}
//	return time;
//}
//
//int main() {
//	init();
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++) {
//			cin >> arr[i][j];
//			mrr[i][j] = arr[i][j];
//			if (arr[i][j] == 1)
//				v.push_back(make_pair(i, j));
//		}
//
//	cout << melting() + 1 << "\n";
//	cout << Cheese << "\n";
//}