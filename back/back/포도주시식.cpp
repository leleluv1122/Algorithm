// 6    6 10 13 9 8 1


//#include <iostream>
//#include <algorithm>
//using namespace std;
//int n;
//int m[10001] = { 0 };
//int arr[10001];
//int maxx() {
//	m[1] = arr[1];
//	m[2] = arr[1] + arr[2];
//	if (n == 1)
//		return m[1];
//	else if (n == 2)
//		return m[2];
//	else {
//		for (int i = 3; i <= n; ++i) {
//			m[i] = max(m[i - 1], max(arr[i] + m[i - 2], m[i - 3] + arr[i - 1] + arr[i]));
//		}
//		return m[n];
//	}
//	
//}
//int main() {
//	cin >> n;
//	
//	for (int i = 1; i <= n; ++i) {
//		cin >> arr[i];
//	}
//
//	cout << maxx() << endl;
//}