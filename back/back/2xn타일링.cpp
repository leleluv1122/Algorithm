//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int r[1001] = { 0, 1, 2, };
//int rect(int n) {
//	if (r[n] > 0)
//		return r[n];
//	else if (r[n] > 0) return r[n];
//	else {
//		r[n] = rect(n - 1) + rect(n - 2);
//		return r[n] % 10007;
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//
//	cout << rect(n) << endl;
//}