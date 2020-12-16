#include <iostream>
#include <queue>
#include <algorithm>

#define endl "\n"
using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int N; cin >> N;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	while (N--) {
		int x; cin >> x;
		if (x) {
			pq.push(make_pair(abs(x), x));
		}
		else {
			if (pq.empty())
				cout << 0 << endl;
			else {
				cout << pq.top().second << endl;
				pq.pop();
			}
		}
	}
}