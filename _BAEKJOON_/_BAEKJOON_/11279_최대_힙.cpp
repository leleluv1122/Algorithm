#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int N;
priority_queue<int> q;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N;

	
	while (N--) {
		int x; cin >> x;
		if (!x) {
			if (q.empty())
				cout << x << "\n";
			else {
				cout << q.top() << "\n";
				q.pop();
			}
		}
		else
			q.push(x);
	}
}