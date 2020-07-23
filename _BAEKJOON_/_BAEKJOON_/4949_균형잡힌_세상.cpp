#include <iostream>
#include <vector>
#include <string>
#include <stack>

#define endl "\n"
using namespace std;

vector<char> v;
string s;

int main() {
	while (1) {
		getline(cin, s);
		if (s == ".")
			break;

		int idx = 0;
		v.clear();
		while (idx != s.size()) {
			if (s[idx] == '[' || s[idx] == ']' || s[idx] == '(' || s[idx] == ')') {
				v.push_back(s[idx]);
			}
			idx++;
		}

		stack<char> st;
		bool b = true;
		for (int i = 0; i < v.size(); i++) {
			if (st.empty() && (v[i] == ')' || v[i] == ']')) {
				b = false;
				break;
			}

			if (v[i] == '[' || v[i] == '(')
				st.push(v[i]);
			else if (st.top() == '[') {
				if (v[i] == ']')
					st.pop();
				else {
					b = false;
					break;
				}
			}
			else if (st.top() == '(') {
				if (v[i] == ')')
					st.pop();
				else {
					b = false;
					break;
				}
			}
		}
		if (b && !st.empty())
			b = false;
		if (b)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}