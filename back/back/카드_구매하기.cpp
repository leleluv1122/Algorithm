//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N;
//	int arr[1001];
//	int d[1001];
//	arr[0] = d[0] = 0;
//
//	for (int i = 1; i <= N; i++) {
//		cin >> arr[i];
//	}
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= i; j++) {
//			d[i] = max(d[i], d[i - j] + arr[j]);
//		}
//	}
//
//	cout << d[N] << endl;
//}

//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N;
//	int arr[1001];
//	int d[1001];
//	for (int i = 1; i <= N; ++i) {
//		cin >> arr[i];
//	}
//
//	arr[0] = d[0] = 0;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= i; j++) {
//			d[i] = max(d[i], d[i - j] + arr[j]);
//		}
//	}
//	cout << d[N] << endl;
//}