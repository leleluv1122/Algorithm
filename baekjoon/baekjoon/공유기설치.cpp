//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int MAX = 200000;
//int N, C;
//int arr[MAX];
//
//bool share(int mid) {
//	int n = 1;
//	int a = arr[0];
//	for (int i = 1; i < N; i++) {
//		if (arr[i] - a >= mid) {
//			n++;
//			a = arr[i];
//		}
//	}
//	if (n >= C)
//		return true;
//	return false;
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> N >> C;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//	int result = 0;
//	sort(arr, arr + N);
//	int low = 1, high = arr[N - 1] - arr[0];
//	while (low <= high) {
//		int mid = (low + high) / 2;
//
//		if (share(mid)) {
//			result = max(result, mid);
//			low = mid + 1;
//		}
//		else
//			high = mid - 1;
//
//	}
//	printf("%d\n", result);
//}


//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int MAX = 200000;
//int N, C;
//int arr[MAX];
//bool share(int mid) {
//	int manini = MAX;
//	int n = 1;
//	int a = arr[0];
//	for (int i = 1; i < N; i++) {
//		if (arr[i] - a > mid) {
//			manini = min(manini, arr[i] - a);
//			n++;
//			a = arr[i];
//		}
//		if (i == N - 1) {
//			manini = min(manini, arr[i] - a);
//			n++;
//		}
//	}
//	return C >= n;
//}
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> N >> C;
//	for (int i = 0; i < N; i++) 
//		cin >> arr[i];
//	
//	int result = 0;
//	sort(arr, arr + N);
//	int low = 1, high = arr[N - 1] - arr[0];
//	while (low <= high) {
//		int mid = (low + high) / 2;
//
//		if (share(mid)) {
//			result = mid;
//			high = mid - 1;
//		}
//		else 
//			low = mid + 1;
//		
//	}
//	printf("%d\n", result);
//}