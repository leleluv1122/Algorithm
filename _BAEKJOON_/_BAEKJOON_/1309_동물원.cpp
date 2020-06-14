#include <iostream>
#include <algorithm>

#define MAX 100001
#define MOD 9901
using namespace std;

int arr[3][MAX];
int N;

int lion() {
	// 0:X 1:left 2:right
	arr[0][1] = arr[1][1] = arr[2][1] = 1; // 첫번째줄

	for (int i = 2; i <= N; i++) {
		arr[0][i] = arr[0][i - 1] + arr[1][i - 1] + arr[2][i - 1];
		arr[0][i] %= MOD;

		arr[1][i] = arr[0][i - 1] + arr[2][i - 1];
		arr[1][i] %= MOD;

		arr[2][i] = arr[0][i - 1] + arr[1][i - 1];
		arr[2][i] %= MOD;
	}

	return arr[0][N] + arr[1][N] + arr[2][N];
}

int main() {
	cin >> N;
	
	cout << lion() % MOD << endl;
}