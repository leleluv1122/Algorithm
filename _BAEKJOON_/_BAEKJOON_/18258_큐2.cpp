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
	deque<int> dq;
	while (N--) {
		string s; cin >> s;
		if (s == "push") {
			int n; cin >> n;
			dq.push_back(n);
		}
		else if (s == "pop") {
			if (dq.size()) {
				cout << dq.front() << endl;
				dq.pop_front();
			}
			else
				cout << "-1" << endl;
		}
		else if (s == "size")
			cout << dq.size() << endl;
		else if (s == "empty") {
			if (dq.size())
				cout << "0" << endl;
			else
				cout << "1" << endl;
		}
		else if (s == "front") {
			if (dq.size())
				cout << dq.front() << endl;
			else
				cout << "-1" << endl;
		}
		else if (s == "back") {
			if (dq.size())
				cout << dq.back() << endl;
			else
				cout << "-1" << endl;
		}
	}
}