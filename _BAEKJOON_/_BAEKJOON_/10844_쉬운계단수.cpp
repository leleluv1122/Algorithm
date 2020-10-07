#include <iostream>
#define MOD 1000000000
using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int N; cin >> N;
	
	int arr[101][10];

	for (int i = 0; i < 10; i++)
		arr[1][i] = 1;

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0)
				arr[i][j] = arr[i - 1][j + 1] % MOD;
			else if (j == 9)
				arr[i][j] = arr[i - 1][j - 1] % MOD;
			else
				arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % MOD;
		}
	}

	int ans = 0;
	for (int i = 1; i < 10; i++)
		ans = (ans + arr[N][i]) % MOD;
	cout << ans;
}