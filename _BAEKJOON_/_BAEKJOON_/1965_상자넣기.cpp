#include <iostream>
#include <algorithm>

#define endl "\n"
using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	int N;

	init();
	cin >> N;

	int* arr = new int[N];
	int* dp = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		dp[i] = 1;
	}

	int many = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[j] + 1, dp[i]);
			}
		}
		many = max(many, dp[i]);
	}

	cout << many << endl;
}