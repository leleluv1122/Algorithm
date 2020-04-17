//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//bool compare(int a, int b) {
//	if (a > b)
//		return true;
//	return false;
//}
//int main() {
//	int N;
//	cin >> N;
//
//	vector<int> A;
//	vector<int> B;
//
//	for (int i = 0; i < N; ++i) {
//		int t = 0;
//		cin >> t;
//		A.push_back(t);
//	}
//	sort(A.begin(), A.end(), compare);
//
//	for (int i = 0; i < N; ++i) {
//		int t = 0;
//		cin >> t;
//		B.push_back(t);
//	}
//	sort(B.begin(), B.end());
//
//	int S = 0;
//	for (int i = 0; i < N; ++i) {
//		S += (A[i] * B[i]);
//	}
//	cout << S << endl;
//}