#include <iostream>
#include <math.h>
using namespace std;

int N;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

bool sosu(int a) {
	if (a == 0 || a == 1)
		return false;

	for (int i = 2; i <= sqrt(a); i++)
		if (a % i == 0)
			return false;
	return true;
}

void calc(int n, int len) {
	if (len == N) {
		cout << n << "\n";
		return;
	}

	for (int i = 1; i <= 9; i++) {
		if (sosu(n * 10 + i))
			calc(n * 10 + i, len + 1);
	}
}

int main() {
	init();
	cin >> N;

	calc(2, 1);
	calc(3, 1);
	calc(5, 1);
	calc(7, 1);
}



//// memory over
//#include <iostream>
//#include <math.h>
//#include <cstring>
//
//#define MAX 100000000
//using namespace std;
//
//bool sosu[MAX];
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	int N;
//	cin >> N;
//
//
//	int a = pow(10, N - 1);
//	int b = pow(10, N);
//
//	memset(sosu, true, sizeof(sosu));
//	sosu[0] = false;
//	sosu[1] = false;
//	for (int i = 2; i < sqrt(b); i++) {
//		if (sosu[i]) {
//			for (int j = i + i; j < b; j += i) {
//				if (sosu[j])
//					sosu[j] = false;
//			}
//		}
//	}
//
//	for (int i = a; i < b; i++) {
//		bool d = true;
//		int c = i;
//		while (c) {
//			if (sosu[c]) {
//				c /= 10;
//			}
//			else {
//				d = false;
//				break;
//			}
//		}
//		if (d)
//			cout << i << "\n";
//	}
//}