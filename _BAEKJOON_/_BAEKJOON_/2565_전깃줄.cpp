#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 101
#define endl "\n"
using namespace std;

int N;
vector<pair<int, int>> v;
int dp[MAX];

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end());

	int hih = 0;
	for (int i = 0; i < N; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (v[i].second > v[j].second)
				dp[i] = max(dp[j] + 1, dp[i]);
		}
		hih = max(hih, dp[i]);
	}

	cout << N - hih << endl;
}