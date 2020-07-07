#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

#define endl "\n"
using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int n, x;
	priority_queue<int, vector<int>, greater<int>> pq;

	cin >> n;
	for (int i = 0; i < n * n; i++) {
		cin >> x;

		if (pq.size() < n)
			pq.push(x);
		else 
			if (pq.top() < x) {
				pq.pop();
				pq.push(x);
			}
	}

	cout << pq.top() << endl;
}