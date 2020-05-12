//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int n;
//	int arr[3];
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	sort(arr, arr + n);
//	int c = 0;
//	while (arr[0] != c) {
//		c++;
//		int cnt = 0;
//		for (int i = 0; i < n; i++) {
//			if (arr[i] % c == 0)
//				cnt++;
//		}
//		if (cnt == n)
//			cout << c << "\n";
//	}
//}