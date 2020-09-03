#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

string solution(string number, int k) {
	string answer = "";
	int size = number.size() - k;
	stack<char> st;

	for (int i = 0; i < number.size(); i++) {
		char cur = number[i];
		while (!st.empty() && k > 0) {
			char top = st.top();
			if (top < cur) {
				st.pop();
				k--;
			}
			else
				break;
		}
		st.push(cur);
	}

	while (st.size() != size)
		st.pop();
	
	while (!st.empty()) {
		answer += st.top();
		st.pop();
	}

	reverse(answer.begin(), answer.end());
	return answer;
}

int main() {
	cout << solution("1924", 2);
}














//string solution(string number, int k) {
//	string answer = "";
//	int size = number.size() - k;
//	stack<char> st;
//
//	for (int i = 0; i < number.size(); i++) {
//		char cur = number.at(i);
//		while (!st.empty() && k > 0) {
//			char top = st.top();
//			if (top < cur) {
//				st.pop();
//				k--;
//			}
//			else
//				break;
//		}
//		st.push(cur);
//	}
//
//	while (st.size() != size)
//		st.pop();
//
//	while (!st.empty()) {
//		answer += st.top();
//		st.pop();
//	}
//	reverse(answer.begin(), answer.end());
//	return answer;
//}