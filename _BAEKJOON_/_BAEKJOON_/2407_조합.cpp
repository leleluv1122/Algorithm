//#include <iostream>
//
//#define endl "\n"
//using namespace std;
//
//long long con(int a, int b) {
//	long long result = 1;
//
//	int d = a - b + 1;
//
//	for (int i = d; i <= a; i++) {
//		result *= i;
//	}
//	return result;
//}
//
//long long con2(int a) {
//	long long result = 1;
//	for (int i = 1; i <= a; i++)
//		result *= i;
//	return result;
//}
//
//int main() {
//	int n, r;
//	cin >> n >> r;
//
//	long long result;
//
//	long long wi = con(n, r);
//	long long area = con2(r);
//
//	result = wi / area;
//	cout << result << endl;
//}