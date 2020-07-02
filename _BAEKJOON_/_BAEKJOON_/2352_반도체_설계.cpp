#include <iostream>
#include <algorithm>

#define endl "\n"
#define MAX 40001
using namespace std;

int n;
int port[MAX];
int dp[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> port[i];

	int len = 1;
	dp[1] = port[1];

	for (int i = 2; i <= n; i++) {
		if (dp[len] < port[i]) {
			dp[++len] = port[i];
			continue;
		}

		int idx = lower_bound(dp + 1, dp + len + 1, port[i]) - dp;
		dp[idx] = port[i];
	}

	cout << len << endl;
}



///// O(n^2)이라 시간초과
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//#define MAX 40001
//#define endl "\n"
//using namespace std;
//
//int n;
//vector<int> v;
//int dp[MAX];
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		int a;
//		cin >> a;
//		v.push_back(a);
//	}
//
//	int high = 0;
//	for (int i = 0; i < n; i++) {
//		dp[i] = 1;
//		for (int j = 0; j < i; j++) {
//			if (v[i] > v[j])
//				dp[i] = max(dp[j] + 1, dp[i]);
//		}
//		high = max(high, dp[i]);
//	}
//
//	cout << high << endl;
//}