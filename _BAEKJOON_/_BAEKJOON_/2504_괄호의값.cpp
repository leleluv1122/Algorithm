#include <iostream>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s; cin >> s;
	stack<char> st;

	long long rst = 0;
	int t = 1;
	bool b = false;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			t *= 2;
			st.push('(');
		}
		else if (s[i] == '[') {
			t *= 3;
			st.push('[');
		}

		else if (s[i] == ')' && (st.empty() || st.top() != '(')) {
			b = true;
			break;
		}
		else if (s[i] == ']' && (st.empty() || st.top() != '[')) {
			b = true;
			break;
		}
		else if (s[i] == ')') {
			if (s[i - 1] == '(')
				rst += t;
			st.pop();
			t /= 2;
		}
		else if (s[i] == ']') {
			if (s[i - 1] == '[')
				rst += t;
			st.pop();
			t /= 3;
		}
	}

	if (b || !st.empty())
		cout << 0;
	else
		cout << rst;
}