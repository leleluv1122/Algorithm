#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int dp[50001];
vector<int> v;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i < 225; i++)
		v.push_back(i * i);
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		int minval = 987654321;
		for (int j = 1; v[j] <= i; j++) {
			int t = i - v[j];
			minval = min(minval, dp[t]);
		}
		dp[i] = minval + 1;
	}
	cout << dp[n];
}