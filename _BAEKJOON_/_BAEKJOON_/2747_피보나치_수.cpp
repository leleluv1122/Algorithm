#include <iostream>
#include <cstring>

#define endl "\n"
#define MAX 46
using namespace std;

int fib[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int Fibo(int a) {
	int& result = fib[a];

	if (result != -1)
		return result;
	if (a == 0)
		return result = 0;
	if (a == 1)
		return result = 1;
	return result = Fibo(a - 1) + Fibo(a - 2);
}

int main() {
	init();
	int n;
	cin >> n;

	memset(fib, -1, sizeof(fib));
	cout << Fibo(n) << endl;
}