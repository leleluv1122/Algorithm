#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> operations) {
	deque<int> dq;
	for (string s : operations) {
		int a = stoi(s.substr(2));

		if (s[0] == 'I') {
			dq.push_back(a);
			sort(dq.begin(), dq.end());
		}
		else {
			if (dq.empty())
				continue;
			if (a == 1)
				dq.pop_back();
			else
				dq.pop_front();
		}
	}

	vector<int> answer;
	if (dq.empty()) {
		answer.push_back(0);
		answer.push_back(0);
	}
	else {
		answer.push_back(dq.back());
		answer.push_back(dq.front());
	}

	return answer;
}

int main() {
	vector<string> v;
	v.push_back("I -45");
	v.push_back("I 653");
	v.push_back("D 1");
	v.push_back("I -642");
	v.push_back("I 45");
	v.push_back("I 97");
	v.push_back("D 1");
	v.push_back("D -1");
	v.push_back("I 333");

	vector<int> ans = solution(v);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
}