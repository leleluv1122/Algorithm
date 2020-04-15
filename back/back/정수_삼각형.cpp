//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[501][501] = { 0 };
//int N;
//
//int main() {
//	cin >> N;
//
//	for (int i = 1; i <= N; ++i) {
//		for (int j = 1; j <= i; ++j) {
//			cin >> arr[i][j];
//		}
//	}
//
//	for (int i = 2; i <= N; ++i) {
//		for (int j = 1; j <= i; ++j) {
//			arr[i][j] = max(arr[i - 1][j - 1] + arr[i][j], arr[i - 1][j] + arr[i][j]);
//		}
//	}
//
//	int m = 0;
//	for (int i = 1; i <= N; ++i) {
//		if (m < arr[N][i])
//			m = arr[N][i];
//	}
//
//	cout << m << endl;
//}












//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[501][501] = { 0 };
//int N;
//
//int main() {
//	cin >> N;
//
//	for (int i = 1; i <= N; ++i) {
//		for (int k = 1; k <= i; ++k) {
//			cin >> arr[i][k];
//		}
//	}
//
//	for (int i = 1; i <= N; ++i) {
//		for (int k = 1; k <= i; ++k) {
//			arr[i][k] += max(arr[i - 1][k - 1], arr[i - 1][k]);
//		}
//	}
//
//	int m = 0;
//	for (int i = 1; i <= N; ++i) {
//		if (m < arr[N][i]) {
//			m = arr[N][i];
//		}
//	}
//
//	cout << m << endl;
//}