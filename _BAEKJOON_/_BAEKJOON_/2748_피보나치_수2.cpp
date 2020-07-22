#include <iostream>
#include <cstring>

#define endl "\n"
using namespace std;

long long fibo[91];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

long long fib(int n) {
	long long& result = fibo[n];

	if (result != -1)
		return result;
	if (n == 0)
		return result = 0;
	if (n == 1)
		return result = 1;
	return result = fib(n - 1) + fib(n - 2);
}

int main() {
	init();
	int n;
	cin >> n;
	memset(fibo, -1, sizeof(fibo));

	cout << fib(n) << endl;
}