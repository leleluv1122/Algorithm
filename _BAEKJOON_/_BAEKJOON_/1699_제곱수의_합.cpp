#include <iostream>
#include <algorithm>
#include <vector>

#define endl "\n"
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> dp(N + 1, 0);

	for (int i = 1; i <= N; i++) {
		dp[i] = i;
		for (int j = 1; j * j <= i; j++)
			dp[i] = min(dp[i], dp[i - j * j] + 1);

	}
	cout << dp[N] << endl;
}


//#include <iostream>
//#include <algorithm>
//#include <math.h>
//
//#define MAX 100001
//#define endl "\n"
//using namespace std;
//
//int main() {
//	//int a = pow(3, 2);
//	int N;
//	cin >> N;
//	int a = sqrt(N);
//
//	int cnt = 0;
//	int b = 0;
//
//	while (1) {
//		if (b + pow(a, 2) > N) {
//			a--;
//		}
//		else {
//			b += pow(a, 2);
//			cnt++;
//		}
//
//		if (b == N)
//			break;
//	}
//	cout << cnt << endl;
//}