#include <iostream>
#include <deque>

#define endl "\n"
using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int N; cin >> N;

	deque<int> dq;
	while (N--) {
		string s;
		cin >> s;

		if (s == "push_front") {
			int a; cin >> a;
			dq.push_front(a);
		}
		else if (s == "push_back") {
			int a; cin >> a;
			dq.push_back(a);
		}
		else if (s == "pop_front") {
			if (dq.size() == 0)
				cout << -1 << endl;
			else {
				cout << dq.front() << endl;
				dq.pop_front();
			}
		}
		else if (s == "pop_back") {
			if (dq.size() == 0)
				cout << -1 << endl;
			else {
				cout << dq.back() << endl;
				dq.pop_back();
			}
		}
		else if (s == "size")
			cout << dq.size() << endl;
		else if (s == "empty") {
			if (dq.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (s == "front") {
			if (dq.size() == 0)
				cout << -1 << endl;
			else
				cout << dq.front() << endl;
		}
		else if (s == "back") {
			if (dq.size() == 0)
				cout << -1 << endl;
			else 
				cout << dq.back() << endl;
		}
	}
}