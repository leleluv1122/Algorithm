#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int N;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N;

	vector<pair<int, int>> v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i].first;
		v[i].second = i;
	}
	sort(v.begin(), v.end());
	
	vector<int> ans(N);
	int idx = 0;
	int d = v[0].first;
	for (int i = 0; i < N; i++) {
		if (d == v[i].first) {
			ans[v[i].second] = idx;
		}
		else {
			ans[v[i].second] = ++idx;
			d = v[i].first;
		}
	}

	for (int i = 0; i < N; i++)
		cout << ans[i] << " ";
}