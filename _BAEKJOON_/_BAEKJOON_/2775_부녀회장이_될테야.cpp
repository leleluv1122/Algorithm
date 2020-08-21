#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int t, k, n;
	int a[15][15];
	memset(a, 0, sizeof(a));
	for (int i = 1; i < 15; i++) {
		a[0][i] = i;
	}
	for (int i = 1; i <= 14; i++) {
		for (int j = 1; j <= 14; j++) {
			a[i][j] = a[i][j - 1] + a[i - 1][j];
		}
	}
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		cout << a[k][n] << endl;
	}
}

//#include <iostream>
//
//using namespace std;
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int home(int floor, int ho) {
//	if (floor == 0)
//		return ho;
//
//	int result = 0;
//	for (int i = 1; i <= ho; i++)
//		result += home(floor - 1, i);
//	return result;
//}
//
//int main() {
//	init();
//	int T;
//	cin >> T;
//
//	while (T--) {
//		int a, b;
//		cin >> a >> b;
//
//		int rst = 0;
//		for (int i = 1; i <= b; i++) {
//			rst += home(a - 1, i);
//		}
//		cout << rst << "\n";
//	}
//}