#include <iostream>
#include <stack>

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

	stack<int> st;
	while (N--) {
		string s;
		cin >> s;

		if (s == "push") {
			int a; cin >> a;
			st.push(a);
		}
		else if (s == "pop") {
			if (st.size() == 0)
				cout << -1 << endl;
			else {
				cout << st.top() << endl;
				st.pop();
			}
		}
		else if (s == "size")
			cout << st.size() << endl;
		else if (s == "empty") {
			if (st.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (s == "top") {
			if (st.size() == 0)
				cout << -1 << endl;
			else
				cout << st.top() << endl;
		}
	}
}