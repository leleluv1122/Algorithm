#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(string begin, string target, vector<string> words) {
	int answer = 0;

	int ss = 0;
	for (int i = 0; i < words.size(); i++)
		if (words[i] == target)
			ss++;

	if (!ss)
		return answer;

	queue<pair<string, int>> q;
	q.push({ begin, 0 });

	while (!q.empty()) {
		string t = q.front().first;
		int cnt = q.front().second;
		q.pop();

		if (t == target) {
			answer = cnt;
			break;
		}

		for (int i = 0; i < words.size(); i++) {
			int d = 0, f;
			char c;
			for (int j = 0; j < words[i].size(); j++) {
				if (t[j] != words[i][j]) {
					d++;
					c = words[i][j];
					f = j;
				}
			}
			if (d == 1) {
				string tt = t;
				tt[f] = c;
				q.push({ tt, cnt + 1 });
			}
		}
	}

	return answer;
}

int main() {
	vector<string> v;
	v.push_back("hot");
	v.push_back("dot");
	v.push_back("dog");
	v.push_back("lot");
	v.push_back("log");
	v.push_back("cog");
	cout << solution("hit", "cog", v);
}