#include <iostream>
#include <string>
#include <stack>
using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int T; cin >> T;
	string bufferflush;
	getline(cin, bufferflush);

	for (int j = 0; j < T; j++) {
		string s;
		getline(cin, s);
		stack<char> st;

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ') {
				while (!st.empty()) {
					cout << st.top();
					st.pop();
				}
				cout << ' ';
			}
			else if (i == s.size() - 1) {
				st.push(s[i]);
				while (!st.empty()) {
					cout << st.top();
					st.pop();
				}
			}
			else
				st.push(s[i]);
		}
		cout << "\n";
	}
}