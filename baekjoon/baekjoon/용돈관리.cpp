//#include <iostream>
//using namespace std;
//int N, M;
//const int MAX = 100000;
//int arr[MAX];
//
//bool money(int mid) {
//	int sum = 0;
//	int n = 1;
//
//	for (int i = 0; i < N; i++) {
//		if (arr[i] > mid)
//			return false;
//		sum += arr[i];
//		if (sum > mid) {
//			sum = arr[i];
//			n++;
//		}
//	}
//	return n <= M;
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> N >> M;
//
//	int sum = 0;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//		sum += arr[i];
//	}
//
//	int l = 1, h = sum;
//	int result = 0;
//	while (l <= h) {
//		int mid = (l + h) / 2;
//		if (money(mid)) {
//			h = mid - 1;
//			result = mid;
//		}
//		else
//			l = mid + 1;
//	}
//	cout << result;
//}