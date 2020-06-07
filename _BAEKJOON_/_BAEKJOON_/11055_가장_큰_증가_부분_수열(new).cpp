#include <iostream>
#include <algorithm>
#define endl "\n"

using namespace std;

int N;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N;

	int* arr = new int[N];
	int* dp = new int[N];

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int many = 0;
	for (int i = 0; i < N; i++) {
		dp[i] = arr[i];
		for (int j = 0; j < i; j++)
			if (arr[i] > arr[j])
				dp[i] = max(dp[j] + arr[i], dp[i]);
		many = max(many, dp[i]);
	}

	delete[] arr;
	delete[] dp;

	cout << many << endl;
}