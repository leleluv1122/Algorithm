#include <iostream>
#include <cstring>

#define endl "\n"
using namespace std;

long long fib[68];

long long fibo(int num) {
	long long& result = fib[num];

	if (result != -1)
		return result;

	if (num < 2)
		return result = 1;
	if (num == 2)
		return result = 2;
	if (num == 3)
		return result = 4;
	return result = fibo(num - 1) + fibo(num - 2) + fibo(num - 3) + fibo(num - 4);
}

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	
	int T;
	cin >> T;

	int n;
	memset(fib, -1, sizeof(fib));
	while (T--) {
		cin >> n;

		cout << fibo(n) << endl;
	}
}