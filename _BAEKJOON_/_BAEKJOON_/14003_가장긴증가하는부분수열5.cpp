#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

#define endl "\n"
#define MAX 1000001
using namespace std;

int N;
vector<int> v;
vector<int> dp;
stack<int> ans;
int p[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N;
	int a;
	for (int i = 0; i < N; i++) {
		cin >> a;
		v.push_back(a);
	}

	dp.push_back(v[0]);

	for (int i = 1; i < N; i++) {
		if (dp.back() < v[i]) {
			dp.push_back(v[i]);
			p[i] = dp.size() - 1;
			continue;
		}

		auto it = lower_bound(dp.begin(), dp.end(), v[i]);
		*it = v[i];
		p[i] = it - dp.begin();
	}

	int cnt = dp.size() - 1;

	for (int i = N - 1; i >= 0; i--) {
		if (p[i] == cnt) {
			ans.push(v[i]);
			cnt--;
			continue;
		}
	}

	cout << ans.size() << endl;
	while (!ans.empty()) {
		cout << ans.top() << " ";
		ans.pop();
	}
	cout << endl;
}