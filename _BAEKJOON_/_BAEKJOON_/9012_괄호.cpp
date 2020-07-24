#include <iostream>
#include <string>
#include <stack>

#define endl "\n"
using namespace std;

int main() {
	int n;
	cin >> n;

	while (n--) {
		string s;
		cin >> s;

		stack<char> st;
		bool b = true;
		for (int i = 0; i < s.size(); i++) {
			if (i == 0 && s[i] == ')') {
				b = false;
				break;
			}
			if(s[i] == '(')
				st.push(s[i]);
			else if (s[i] == ')') {
				if (st.empty()) {
					b = false;
					break;
				}
				else if (st.top() == '(')
					st.pop();
			}
		}

		if (!st.empty())
			b = false;

		if (b)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}