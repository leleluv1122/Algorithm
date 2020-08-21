#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N, K; cin >> N >> K;
	queue<int> q;
	for (int i = 1; i <= N; i++)
		q.push(i);

	vector<int> v;
	while (!q.empty()) {
		for (int i = 1; i < K; i++) {
			int a = q.front(); q.pop();
			q.push(a);
		}
		v.push_back(q.front()); q.pop();
	}

	cout << "<";
	for (int i = 0; i < v.size(); i++) {
		if (i == v.size() - 1)
			cout << v[i];
		else
			cout << v[i] << ", ";
	}
	cout << ">";
}