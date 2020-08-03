#include <iostream>
#include <queue>

#define endl "\n"
using namespace std;

int N;
priority_queue<int> pq;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N;

	while (N--) {
		int a;
		cin >> a;

		if (a == 0) {
			if (pq.empty())
				cout << 0 << endl;
			else {
				cout << pq.top() << endl;
				pq.pop();
			}
		}
		else {
			pq.push(a);
		}
	}
}