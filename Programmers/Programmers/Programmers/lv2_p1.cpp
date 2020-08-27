#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s) {
	bool answer = true;
	stack<char> st;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ')') {
			if (st.size() == 0) {
				answer = false;
				break;
			}
			else
				st.pop();
		}
		else
			st.push(s[i]);
	}

	if (st.size() > 0)
		answer = false;

	return answer;
}