#include <iostream>

#define MAX 100001
#define MOD 9901
using namespace std;

int arr[MAX][3];

int dong(int idx, int pre) {
	if (arr[idx][pre] > 0)
		return arr[idx][pre] % MOD;
	if (idx == 0) return 1;

	int cnt = 0;
	cnt = dong(idx - 1, 0) % MOD;
	if (pre != 1)
		cnt = (cnt + dong(idx - 1, 1)) % MOD;
	if (pre != 2)
		cnt = (cnt + dong(idx - 1, 2)) % MOD;
	return arr[idx][pre] = cnt % MOD;
}

int main() {
	int N;
	cin >> N;

	cout << dong(N, 0);
}