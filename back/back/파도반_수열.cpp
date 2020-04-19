//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int N;
//	vector<int> a;
//	cin >> N;
//	for (int i = 0; i < N; ++i) {
//		int b;
//		cin >> b;
//		a.push_back(b);
//	}
//	long long arr[101] = { 0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9 };
//
//	for (int i = 0; i < a.size(); ++i) {
//		int s = a[i];
//		for (int i = 11; i <= s; ++i) {
//			arr[i] = arr[i - 1] + arr[i - 5];
//		}
//		cout << arr[s] << endl;
//	}
//}