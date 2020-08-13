#include <iostream>

using namespace std;

long long a[5][5], ans[5][5], c[5][5], n, b;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void cal(long long a[5][5], long long b[5][5]) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			c[i][j] = 0;
			for (int k = 0; k < n; k++) 
				c[i][j] += a[i][k] * b[k][j];
			c[i][j] %= 1000;
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = c[i][j];
}

int main() {
	init();
	cin >> n >> b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
		ans[i][i] = 1;
	}

	while (b > 0) {
		if (b % 2 == 1)
			cal(ans, a);
		cal(a, a);
		b /= 2;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << ans[i][j] << ' ';
		cout << '\n';
	}
}





//// timeout
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int arr[5][5];
//int jegop[5][5];
//int real_j[5][5];
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	int N, B;
//	cin >> N >> B;
//
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++) {
//			cin >> arr[i][j];
//			jegop[i][j] = arr[i][j];
//		}
//
//	while (B > 0) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				for (int k = 0; k < N; k++) {
//					real_j[i][j] += jegop[i][k] * arr[k][j] % 1000;
//				}
//			}
//		}
//
//		for (int i = 0; i < N; i++)
//			for (int j = 0; j < N; j++)
//				jegop[i][j] = real_j[i][j] % 1000;
//		memset(real_j, 0, sizeof(real_j));
//	}
//
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++)
//			cout << jegop[i][j] << " ";
//		cout << "\n";
//	}
//}