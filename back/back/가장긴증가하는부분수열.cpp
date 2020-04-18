//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//
//	int arr[1000];
//	int d[1000];
//	int sum = 0;
//
//	for (int i = 0; i < n; ++i) {
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < n; ++i) {
//		d[i] = 1;
//		for (int k = 0; k < i; ++k) {
//			if (arr[i] > arr[k]) {
//				d[i] = max(d[i], d[k] + 1);
//			}
//		}
//		sum = max(sum, d[i]);
//	}
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int arr[1000];
//	int d[1000];
//	int sum = 0;
//
//	for (int i = 0; i < n; ++i) {
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < n; ++i) {
//		d[i] = 1;
//
//		for (int j = 0; j < i; ++j) {
//			if (arr[i] > arr[j])
//				d[i] = max(d[i], d[j] + 1);
//		}
//		sum = max(sum, d[i]);
//	}
//
//	cout << sum << endl;
//}



//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	vector<int> A;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; ++i) {
//		int a;
//		cin >> a;
//		A.push_back(a);
//	}
//	sort(A.begin(), A.end());
//	int a = A[0];
//	int cnt = 1;
//	for (int i = 1; i < n; ++i) {
//		if (a == A[i])
//			continue;
//		else {
//			cnt++;
//			a = A[i];
//		}
//	}
//
//	cout << cnt << endl;
//}