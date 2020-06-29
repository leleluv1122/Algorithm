#include <iostream>
#include <algorithm>

#define endl "\n"
using namespace std;

int dp[1111][1111];
string a, b;
string ans;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	init();
	cin >> a >> b;

	a = '0' + a;
	b = '0' + b;

	for (int i = 1; i < a.size(); i++)
		for (int j = 1; j < b.size(); j++) {
			dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			if (a[i] == b[j])
				dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
		}

	cout << dp[a.size() - 1][b.size() - 1] << endl; 

	int Asize = a.size() - 1, Bsize = b.size() - 1;
	while (Asize * Bsize) {
		if (dp[Asize][Bsize] == dp[Asize - 1][Bsize])
			Asize--;
		else if (dp[Asize][Bsize] == dp[Asize][Bsize - 1])
			Bsize--;
		else
			ans = a[Asize] + ans, Asize--, Bsize--;
	}

	cout << ans << endl;;
}



// 메모리를 너무 많이쓰는거같은 느낌 
// 다른풀이는 5000 ~ 20000 kb 쓰는데 나 혼자 176916 KB 씀 ㅠㅠ
//#include <iostream>
//#include <algorithm>
//
//#define endl "\n"
//using namespace std;
//
//string A, B;
//string dp[1001][1001];
//string result = "";
//
//void init() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//}
//
//int main() {
//	init();
//	cin >> A >> B;
//
//	for (int i = 1; i <= A.size(); i++) {
//		for (int j = 1; j <= B.size(); j++) {
//			if (A[i - 1] == B[j - 1]) {
//				dp[i][j] = dp[i - 1][j - 1];
//				dp[i][j] += A[i - 1];
//			}
//			else {
//				if (dp[i - 1][j].size() > dp[i][j - 1].size()) {
//					dp[i][j] = dp[i - 1][j];
//				} 
//				else {
//					dp[i][j] = dp[i][j - 1];
//				}
//			}
//		}
//	}
//
//	cout << dp[A.size()][B.size()].size() << endl;
//	cout << dp[A.size()][B.size()] << endl;
//}