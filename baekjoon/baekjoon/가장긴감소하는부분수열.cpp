//#include <iostream>
//#include <algorithm>
//#define MAX 1000 + 1
//using namespace std;
//int main()
//{
//	int N; cin >> N;
//	int arr[MAX];
//	for (int i = 1; i <= N; i++)
//		cin >> arr[i];
//
//	int dp[MAX];
//	int t = 0;
//	for (int i = 1; i <= N; i++) {
//		dp[i] = 1;
//		for (int j = 1; j <= i; j++) {
//			if (arr[i] < arr[j] && dp[j] + 1 > dp[i])
//				dp[i] = dp[j] + 1;
//		}
//		t = max(t, dp[i]);
//	}
//	cout << t << endl;
//}