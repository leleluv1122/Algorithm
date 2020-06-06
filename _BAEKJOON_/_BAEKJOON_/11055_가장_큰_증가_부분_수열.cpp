#include <iostream>
#include <algorithm>

#define MAX 1001
#define endl "\n"
using namespace std;

int arr[MAX];
int dp[MAX];
int result = 0;
int N;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		dp[i] = arr[i];
	}


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j])
				dp[i] = max(dp[j] + arr[i], dp[i]);
		}
		result = max(dp[i], result);
	}
	cout << result << endl;
}