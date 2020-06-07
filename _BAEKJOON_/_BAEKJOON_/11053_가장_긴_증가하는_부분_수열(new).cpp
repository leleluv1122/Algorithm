#include <iostream>
#include <algorithm>

#define MAX 1001
#define endl "\n"

using namespace std;

int N;

int main() {
	cin >> N;

	int* arr = new int[N];
	int* dp = new int[N];

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int many = 0;
	for (int i = 0; i < N; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++)
			if (arr[i] > arr[j])
				dp[i] = max(dp[i], dp[j] + 1);
		many = max(many, dp[i]);
	}

	delete[] arr;
	delete[] dp;
	
	cout << many << endl;
}