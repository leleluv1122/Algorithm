//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int MAX = 1000001;
//int dp[MAX];
//int main() {
//	int N; cin >> N;
//	
//	fill(dp, dp + MAX, 1000000000);
//	dp[1] = 0;
//	for (int i = 1; i < N; i++) {
//		dp[i + 1] = min(dp[i + 1], dp[i] + 1);
//		if (i * 2 < MAX) dp[i * 2] = min(dp[i * 2], dp[i] + 1);
//		if (i * 3 < MAX) dp[i * 3] = min(dp[i * 3], dp[i] + 1);
//	}
//	cout << dp[N] << endl;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int N; cin >> N;
//	vector<int> dp(N + 3, 0);
//	dp[1] = 1;
//	for (int i = 0; i <= N; i++) {
//		dp[i + 2] += dp[i];
//		dp[i + 1] += dp[i];
//	}
//	cout << dp[N];
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int N; cin >> N;
//	vector<int> dp(N + 1, 0);
//	dp[1] = 1;
//	for (int i = 2; i <= N; i++)
//		dp[i] = dp[i - 2] + dp[i - 1];
//	cout << dp[N] << endl;
//}


//#include <cstdio>
//#include <vector>
//using namespace std;
//vector<int> dp;
//int fibonacci(int n) {
//	if (n == 0) return 0;
//	if (n == 1) return 1;
//	if (dp[n] != -1) return dp[n];
//	dp[n] = fibonacci(n - 2) + fibonacci(n - 1);
//	return dp[n];
//}
//
//int main() {
//	int N;
//	scanf_s("%d", &N);
//	dp.resize(N + 1, -1);
//	printf("%d\n", fibonacci(N));
//}