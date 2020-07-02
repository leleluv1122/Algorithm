#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
#define MAX 1000001
using namespace std;

int n;
int p[MAX];

vector<pair<int, int>> v;
vector<int> dp;
vector<int> no;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> n;

	int a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end());
	dp.push_back(v[0].second);

	for (int i = 1; i < n; i++) {
		if (dp.back() < v[i].second) {
			dp.push_back(v[i].second);
			p[i] = dp.size() - 1;
			continue;
		}

		auto lt = lower_bound(dp.begin(), dp.end(), v[i].second);
		*lt = v[i].second;
		p[i] = lt - dp.begin();
	}

	int cnt = dp.size();
	cnt--;

	for (int i = n - 1; i >= 0; i--) {
		if (p[i] == cnt) {
			cnt--;
			continue;
		}
		no.push_back(v[i].first);
	}
	
	cout << no.size() << endl;
	for (int i = no.size() - 1; i >= 0; i--)
		cout << no[i] << endl;
}





////// ¿ÖÆ²·ÇÁö..?
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//#define endl "\n"
//#define MAX 100001
//using namespace std;
//
//int N;
//pair<int, int> line[MAX];
//int dp[MAX];
//vector<int> no;
//
//void init() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//}
//
//int main() {
//	init();
//	cin >> N;
//
//	int a, b;
//	for (int i = 0; i < N; i++)
//		cin >> line[i].first >> line[i].second;
//	sort(line, line + N);
//
//	int length = 0;
//	dp[0] = line[0].second;
//
//	for (int i = 1; i < N; i++) {
//		if (dp[length] < line[i].second) {
//			dp[++length] = line[i].second;
//			continue;
//		}
//
//		int idx = lower_bound(dp, dp + length, line[i].second) - dp;
//		dp[idx] = line[i].second;
//	}
//}