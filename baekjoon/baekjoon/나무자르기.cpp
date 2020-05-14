//#include <iostream>
//using namespace std;
//const int MAX = 1000000;
//int arr[MAX];
//int N, M;
//int main() {
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//
//	int l = 0, h = 1000000000;
//
//	while (l + 1 < h) {
//		int mid = (l + h) / 2;
//		long long sum = 0;
//		for (int i = 0; i < N; i++)
//			if (arr[i] > mid) 
//				sum += (arr[i] - mid);
//		if (sum >= M) l = mid;
//		else h = mid;
//	}
//	cout << l << "\n";
//}


//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int MAX = 1000000 + 1;
//int arr[MAX];
//int N, M; //나무의 수, 나무길이
//int main() {
//	int m = 0;
//	int t = 0; //제일 큰 나무값
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//		t = max(t, arr[i]);
//	}
//	int sum = 0;
//	while (1) {
//		sum = 0;
//		for (int i = 0; i < N; i++) {
//			if (arr[i] - t > 0) {
//				sum += (arr[i] - t);
//			}
//		}
//		if (sum == M)
//			break;
//		else
//			t--;
//	}
//	cout << t << "\n";
//}