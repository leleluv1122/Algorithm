#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
	vector<int> answer;
	map<string, int> m;
	char c = words[0][0];
	for (int i = 0; i < words.size(); i++) {
		if (c != words[i][0]) {
			int man = (i + 1) % n;
			if (man == 0)
				man = n;
			int d = i / n + 1;

			answer.push_back(man);
			answer.push_back(d);
			break;
		}

		if (m.count(words[i]) == 0) {
			c = words[i][words[i].size() - 1];
			m.insert({ words[i], 1 });
		}
		else {
			int man = (i + 1) % n;
			if (man == 0)
				man = n;
			int d = i / n + 1;

			answer.push_back(man);
			answer.push_back(d);
			break;
		}
	}

	if (answer.size() == 0) {
		answer.push_back(0);
		answer.push_back(0);
	}

	return answer;
}