//#include <iostream>
//using namespace std;
//const int mod = 1000000000;
//int main() {
//	int arr[101][10];
//	int N;
//	int sum = 0;
//	cin >> N;
//
//	for (int i = 0; i < 10; ++i)
//		arr[1][i] = 1;
//
//	for (int i = 2; i <= N; ++i) {
//		for (int j = 0; j <= 9; ++j) {
//			if (j == 0)
//				arr[i][j] = arr[i - 1][j + 1] % mod;
//			else if (j == 9)
//				arr[i][j] = arr[i - 1][j - 1] % mod;
//			else {
//				arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % mod;
//			}
//		}
//	}
//	for (int i = 1; i < 10; ++i) {
//		sum = (sum + arr[N][i]) % mod;
//	}
//	cout << sum << endl;
//}














//#include <iostream>
//using namespace std;
//const int mod = 1000000000;
//int main() {
//	int arr[101][10];
//	int N;
//	int sum = 0;
//	cin >> N;
//
//	for (int i = 0; i < 10; ++i)
//		arr[1][i] = 1;
//
//	for (int i = 2; i <= N; ++i) {
//		for (int k = 0; k < 10; ++k) {
//			if (k == 0)
//				arr[i][k] = arr[i - 1][1] % mod;
//			else if (k == 9)
//				arr[i][k] = arr[i - 1][8] % mod;
//			else
//				arr[i][k] = (arr[i - 1][k - 1] + arr[i - 1][k + 1]) % mod;
//		}
//	}
//
//	for (int i = 1; i < 10; ++i)
//		sum = (sum + arr[N][i]) % mod;
//
//	cout << sum << endl;
//}