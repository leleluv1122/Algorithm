//#include <iostream>
//using namespace std;
//int N;
//int d[11];
//int main() {
//	int n;
//	cin >> n;
//	d[1] = 1;
//	d[2] = 2;
//	d[3] = 4;
//
//	for (int i = 0; i < n; ++i) {
//		cin >> N;
//
//		for (int j = 4; j <= N; ++j) {
//			d[j] = d[j - 1] + d[j - 2] + d[j - 3];
//		}
//		cout << d[N] << endl;
//	}
//}