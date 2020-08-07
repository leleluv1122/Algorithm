#include <iostream>
#include <queue>

using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int N, K;
	cin >> N >> K;

	queue<int> q;
	for (int i = 1; i <= N; i++)
		q.push(i);

	int idx = 0;
	cout << "<";
	while (!q.empty()) {
		idx++;
		if (idx == K) {
			cout << q.front();
			q.pop();
			idx = 0;
			if (!q.empty())
				cout << ", ";
		}
		else {
			int a = q.front();
			q.pop();
			q.push(a);
		}
	}
	cout << ">\n";
}