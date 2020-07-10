#include <iostream>
#include <algorithm>
#include <vector>

#define endl "\n"
using namespace std;

int N;
vector<int> dp;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N;
	vector<int> arr(N);

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	dp.push_back(arr[0]);

	for (int i = 1; i < N; i++) {
		if (dp.back() < arr[i]) {
			dp.push_back(arr[i]);
			continue;
		}

		auto it = lower_bound(dp.begin(), dp.end(), arr[i]);
		*it = arr[i];
	}

	cout << N - dp.size() << endl;
}


//#include <iostream>
//#include <algorithm>
//
//#define MAX 201
//#define endl "\n"
//using namespace std;
//
//int N;
//int arr[MAX];
//int dp[MAX];
//
//int main() {
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		cin >> arr[i];
//		dp[i] = 1;
//	}
//
//	for (int i = 1; i <= N; i++)
//		for (int j = 1; j < i; j++)
//			if (arr[i] > arr[j])
//				dp[i] = max(dp[i], dp[j] + 1);
//		
//	int Max = 0;
//	for (int i = 1; i <= N; i++)
//		Max = max(Max, dp[i]);
//
//	cout << N - Max << endl;
//}