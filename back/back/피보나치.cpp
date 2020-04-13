//#include <iostream>
//using namespace std;
//int fibonacci(int n) {
//	static int mem[40] = { 1, 1, };
//	if (n <= 1) return mem[n]; 
//	else if (mem[n] > 0) return mem[n];
//	return mem[n] = fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main() {
//	int T, N;
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//		cin >> N;
//		if (N == 0) cout << "1 0 " << endl;
//		else cout << fibonacci(N - 2) << " " << fibonacci(N - 1) << endl;
//	}
//	return 0;
//}



//#include <iostream>
//using namespace std;
//int fib(int n) {
//	int mm[40] = { 1, 1, };
//	if (n <= 1) return mm[n];
//	else if (mm[n] > 0) return mm[n];
//	return mm[n] = fib(n - 1) + fib(n - 1);
//}
//int main() {
//	int T, N;
//	cin >> T;
//	for (int i = 0; i < T; ++i) {
//		cin >> N;
//		if (N == 0) cout << "1 0" << endl;
//		else if (N == 1) cout << "0 1" << endl;
//		else {
//			cout << fib(N - 2) << " " << fib(N - 1) << endl;
//		}
//	}
//}


//#include <iostream>
//using namespace std;
//int zero, one;
//int fib(int n) {
//	if (n == 0) {
//		zero++;
//		return 0;
//	}
//	else if (n == 1) {
//		one++;
//		return 1;
//	}
//	else {
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main() {
//	int T;
//	cin >> T;
//	for (int i = 0; i < T; ++i) {
//		int N;
//		cin >> N;
//		zero = 0, one = 0;
//		fib(N);
//		cout << zero << " " << one << endl;
//	}
//}