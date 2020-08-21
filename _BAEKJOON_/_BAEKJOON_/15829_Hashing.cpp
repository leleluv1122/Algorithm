#include <iostream>

#define MOD 1234567891
using namespace std;

int main() {
	int n;
	cin >> n;

	long long result = 0, R = 1;

	for (int i = 0; i < n; i++) {
		char c; cin >> c;
		int d = c - 'a' + 1;

		result = (result + d * R) % MOD;
		R = (R * 31) % MOD;
	}
	cout << result << "\n";
}



//// 50Á¡
//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//int main() {
//	int n; cin >> n;
//	int result = 0;
//	for (int i = 0; i < n; i++) {
//		char c; cin >> c;
//		int d = c - 'a' + 1;
//		if (i == 0)
//			result += d;
//		else
//			result += pow(31, i) * d;
//	}
//
//	cout << result << "\n";
//}