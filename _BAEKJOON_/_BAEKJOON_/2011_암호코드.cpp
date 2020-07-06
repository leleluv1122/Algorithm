#include <iostream>
#include <string>

#define endl "\n"
#define MOD 1000000
#define MAX 5001
using namespace std;

int arr[MAX];
int dp[MAX];
string s;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int dynamic() {
	dp[0] = 1;

	for (int i = 1; i <= s.size(); i++) {
		if (arr[i] >= 1 && arr[i] <= 9)
			dp[i] = (dp[i - 1] + dp[i]) % MOD;
		if (i == 1)
			continue;

		int t = arr[i] + arr[i - 1] * 10;

		if (10 <= t && t <= 26)
			dp[i] = (dp[i - 2] + dp[i]) % MOD;
	}

	return dp[s.size()];
}

int main() {
	init();

	cin >> s;

	for (int i = 1; i <= s.size(); i++)
		arr[i] = s[i - 1] - '0';
	
	if (s.size() == 1 && s[0] == 0)
		cout << 0 << endl;
	else
		cout << dynamic() << endl;
}