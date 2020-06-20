#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

vector<long long> v;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void file() {
	int k;
	cin >> k;
	v.resize(k);

	for (int i = 0; i < k; i++)
		cin >> v[i];

	long long result = 0;

	priority_queue<long long> pq;
	for (int i = 0; i < k; i++)
		pq.push(-v[i]);

	while (1) {
		if (pq.size() == 1)
			break;
		long long a = -pq.top();
		pq.pop();
		long long b = -pq.top();
		pq.pop();

		result += (a + b);
		pq.push(-(a + b));

	}
	cout << result << endl;
}

int main() {
	init();
	int t; cin >> t;
	while (t--)
		file();
}