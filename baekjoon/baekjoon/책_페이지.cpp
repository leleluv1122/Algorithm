//#include <iostream>
//using namespace std;
//long long check[10];
//void calc(long long n, long long ten) {
//	while (n > 0) {
//		check[n % 10] += ten;
//		n /= 10;
//	}
//}
//void solve(long long A, long long B, long long ten) {
//	while (A % 10 != 0 && A <= B) {
//		calc(A, ten);
//		A++;
//	}
//	if (A > B) return;
//	while (B % 10 != 9 && B >= A) {
//		calc(B, ten);
//		B--;
//	}
//	long long cnt = (B / 10 - A / 10 + 1);
//	for (int i = 0; i < 10; ++i)
//		check[i] += cnt * ten;
//	solve(A / 10, B / 10, ten * 10);
//}
//int main() {
//	long long n;
//	cin >> n;
//	solve(1, n, 1);
//	for (int i = 0; i < 10; ++i)
//		cout << check[i] << " ";
//}



//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//int N;
//int arr[10];
//int main() {
//	cin >> N;
//	memset(arr, 0, sizeof(arr));
//	for (int i = 1; i <= N; i++) {
//		string s = to_string(i);
//		for (int j = 0; j < s.size(); j++) {
//			arr[s[j] - '0'] += 1;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//		cout << arr[i] << " ";
//}