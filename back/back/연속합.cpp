//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[100001];
//int s[100001] = { 0 };
//
//int main() {
//	int n;
//	cin >> n;
//
//	for (int i = 0; i < n; ++i) {
//		cin >> arr[i];
//		s[i] = arr[i];
//	}
//
//	int m = s[0];
//	for (int i = 1; i < n; ++i) {
//		s[i] = max(s[i], s[i - 1] + arr[i]);
//		if (s[i] > m)
//			m = s[i];
//	}
//	cout << m << endl;
//}



//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n;
//int arr[100000];
//int s[100000];
//
//int main() {
//	cin >> n;
//
//	for (int i = 0; i < n; ++i) {
//		cin >> arr[i];
//		s[i] = arr[i];
//	}
//
//	s[0] = arr[0];
//	for (int i = 1; i < n; ++i) {
//		s[i] = max(s[i], s[i - 1] + arr[i]);
//	}
//
//	int m = s[0];
//	for (int i = 1; i < n; ++i) {
//		if (m < s[i])
//			m = s[i];
//	}
//
//	cout << m << endl;
//}