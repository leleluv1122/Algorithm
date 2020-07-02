#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
vector<int> v;
vector<int> dp;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> n;

	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}

	dp.push_back(v[0]);
	for (int i = 1; i < n; i++) {
		if (dp.back() < v[i]) {
			dp.push_back(v[i]);
			continue;
		}

		auto it = lower_bound(dp.begin(), dp.end(), v[i]);
		*it = v[i];
	}

	cout << n - dp.size() << endl;
}