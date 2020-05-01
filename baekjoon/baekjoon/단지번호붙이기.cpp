//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//const int MAX = 25 + 1;
//int N;
//string arr[MAX]; 
//int visited[MAX][MAX], d[MAX][MAX];
//vector<int> rst;
//int gogoA[4] = { 0,1,0,-1 }, gogoB[4] = { 1,0,-1,0 };
//int dd = 0;
//void dangi(int a, int b) {
//	if (visited[a][b])
//		return;
//	visited[a][b] = 1;
//
//	for (int i = 0; i < 4; i++) {
//		int A = a + gogoA[i];
//		int B = b + gogoB[i];
//
//		if (A >= 0 && A < N && B >= 0 && B < N) {
//			if (d[A][B]) {
//				dangi(A, B);
//			}
//		}
//	}
//	dd++;
//}
//bool compare(int a, int b) {
//	if (a < b)
//		return true;
//	return false;
//}
//int main() {
//	cin >> N;
//	
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 0; i < N; i++) {
//		string s = arr[i];
//		for (int j = 0; j < s.size(); j++) {
//			d[i][j] = s[j] - '0';
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (visited[i][j] == 0 && d[i][j] == 1) {
//				dd = 0;
//				dangi(i, j);
//				rst.push_back(dd);
//			}
//		}
//	}
//	sort(rst.begin(), rst.end(), compare);
//
//	cout << rst.size() << endl;
//	for (int i = 0; i < rst.size(); i++)
//		cout << rst[i] << endl;
//}

//for (int i = 0; i < N; i++) {
//	for (int j = 0; j < N; j++)
//		cout << d[i][j] << " ";
//	cout << endl;
//}