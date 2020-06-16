#include <iostream>
#include <queue>
#include <algorithm>

#define endl "\n"
using namespace std;

int n;
pair<int, int> p[200001];
priority_queue<int> pq;

int main() {
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> p[i].first >> p[i].second;
	}
	sort(p, p + n);

	pq.push(-p[0].second);
	for (int i = 1; i < n; ++i) {
		if (-pq.top() <= p[i].first) {
			pq.pop();
			pq.push(-p[i].second);
		}
		else {
			pq.push(-p[i].second);
		}
	}

	cout << pq.size() << endl;
}