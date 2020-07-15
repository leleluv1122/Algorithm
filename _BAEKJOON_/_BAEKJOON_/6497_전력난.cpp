#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 200001
#define endl "\n"
using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

struct road {
	int x, y, cost;

	bool operator < (const road& r) const {
		return cost < r.cost;
	}
};

int uf[MAX];
road r[MAX];

int find(int a) {
	if (uf[a] < 0)
		return a;
	return uf[a] = find(uf[a]);
}

bool merge(int a, int b) {
	a = find(a);
	b = find(b);

	if (a == b)
		return false;
	uf[b] = a;
	return true;
}


int main() {
	init();

	int m, n;
	while (1) {
		cin >> m >> n;
		if (m == 0 && n == 0)
			break;

		int total = 0;
		for (int i = 0; i < n; i++) {
			cin >> r[i].x >> r[i].y >> r[i].cost;
			total += r[i].cost;
		}
		sort(r, r + n);

		int idx = 0, result = 0;
		fill(uf, uf + m, -1);
		for (int i = 0; ; i++) {
			if (merge(r[i].x, r[i].y)) {
				result += r[i].cost;

				idx++;
				if (idx == m - 1)
					break;
			}
		}

		int ans = total - result;
		cout << ans << endl;
	}
}