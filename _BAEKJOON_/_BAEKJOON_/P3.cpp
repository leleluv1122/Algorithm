#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int aa = 987654321, bb = 987654321;

void Plus(int n, int cnt) {
	if (n < 10) {
		if (cnt < bb) {
			aa = n;
			bb = cnt;
		}
		return;
	}
	if (cnt > bb)
		return;

	string s = to_string(n);

	for (int i = 1; i < s.size(); i++) {
		string s1 = "", s2 = "";
		for (int j = 0; j < i; j++)
			s1 += s[j];
		for (int j = i; j < s.size(); j++)
			s2 += s[j];

		if (s1[0] != '0' && s2[0] != '0') {
			int f = atoi(s1.c_str()), g = atoi(s2.c_str());
			Plus(f + g, cnt + 1);
		}
	}
}

vector<int> solution(int n) {
	vector<int> answer;
	if (n < 10) {
		answer.push_back(0);
		answer.push_back(n);
	}
	else {
		Plus(n, 0);
		answer.push_back(bb);
		answer.push_back(aa);
	}
	return answer;
}

//int main() {
//	vector<int> v = solution(73425);
//	cout << v[0] << " " << v[1];
//}