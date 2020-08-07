#include <iostream>
#include <queue>

#define endl "\n"
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
	while (N--) {
		string s;
		cin >> s;

		if (s == "push") {
			int a; cin >> a;
			q.push(a);
		}
		else if (s == "pop") {
			if (q.size() == 0)
				cout << -1 << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (s == "size")
			cout << q.size() << endl;
		else if (s == "empty") {
			if (q.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (s == "front") {
			if (q.size() == 0)
				cout << -1 << endl;
			else
				cout << q.front() << endl;
		}
		else if (s == "back") {
			if (q.size() == 0)
				cout << -1 << endl;
			else
				cout << q.back() << endl;
		}
	}
}