//#include <iostream>
//#include <algorithm>
//using namespace std;
//pair<int, int> arr[1001];
//int res[1001];
//int N;
//
//int main()
//{
//	cin >> N;
//	for (int i = 1; i <= N; i++)
//		cin >> arr[i].second >> arr[i].first;
//
//	sort(arr + 1, arr + N + 1);
//
//	for (int i = N; i > 0; i--) {
//		if (res[arr[i].second == 0])
//			res[arr[i].second] = arr[i].first;
//		else {
//			int idx = arr[i].second;
//
//			while (idx >= 1) {
//				if (res[idx] == 0) {
//					res[idx] = arr[i].first;
//					break;
//				}
//				idx--;
//			}
//		}
//	}
//	int sum = 0;
//	for (int i = 1; i <= 1000; i++) {
//		sum += res[i];
//	}
//	cout << sum << endl;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//pair<int, int> arr[1001];
//int res[1001];
//int N;
//
//int main() {
//	cin >> N;
//	for (int i = 1; i <= N; i++)
//		cin >> arr[i].second >> arr[i].first;
//
//	sort(arr + 1, arr + N + 1);
//
//	for (int i = N; i >= 1; i--) {
//
//		if (res[arr[i].second] == 0) {
//			res[arr[i].second] = arr[i].first;
//		}
//
//		else {
//			int idx = arr[i].second;
//			while (idx >= 1) {
//				if (res[idx] == 0) {
//					res[idx] = arr[i].first;
//					break;
//				}
//				idx--;
//			}
//		}
//	}
//
//	int sum = 0;
//	for (int i = 1; i <= N; i++) {
//		sum += res[i];
//	}
//
//	cout << sum;
//}