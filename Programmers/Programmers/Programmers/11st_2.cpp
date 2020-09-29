#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<string>& S) {
	vector<int> ans;
	bool b = false;
	int sz = S[0].size();
	for (int i = 0; i < S.size(); i++) {
		if (b)
			break;
		for (int j = 0; j < S.size(); j++) {
			if (b)
				break;
			if (i == j)
				continue;
			for (int k = 0; k < sz; k++) {
				if (S[i][k] == S[j][k]) {
					ans.push_back(i);
					ans.push_back(j);
					ans.push_back(k);
					b = true;
					break;
				}
			}
		}
	}
	return ans;
}

int main() {
	vector<string> s;
	/*s.push_back("abc");
	s.push_back("bca");
	s.push_back("dbe");*/

	/*s.push_back("zzzz");
	s.push_back("ferz");
	s.push_back("zdsr");
	s.push_back("fgtd");*/

	/*s.push_back("gr");
	s.push_back("sd");
	s.push_back("rg");*/

	vector<int> ans = solution(s);

	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
}