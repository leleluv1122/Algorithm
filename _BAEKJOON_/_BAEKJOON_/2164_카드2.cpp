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
	int N;
	cin >> N;

	queue<int> q;
	for (int i = 1; i <= N; i++)
		q.push(i);

	while (1) {
		if (q.size() == 1) {
			cout << q.front() << "\n";
			break;
		}
		q.pop();
		int a = q.front();
		q.pop();
		q.push(a);
	}
}