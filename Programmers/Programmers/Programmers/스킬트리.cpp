#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
	int answer = 0;
	map<char, int> m;
	for (int i = 0; i < skill.size(); i++)
		m[skill[i]] = i + 1;

	for (auto skt : skill_trees) {
		int cnt = 1;
		bool check = true;

		for (int i = 0; i < skt.size(); i++) {
			if (m[skt[i]] > cnt) {
				check = false;
				break;
			}
			else if (m[skt[i]] == cnt)
				cnt++;
		}
		if (check)
			answer++;
	}

	return answer;
}

int main() {
	vector<string> v;
	v.push_back("BACDE");
	v.push_back("CBADF");
	v.push_back("AECB");
	v.push_back("BDA");
	v.push_back("AQWER");
	cout << solution("CBD", v);
}

//#include <string>
//#include <vector>
//#include <cstring>
//#include <iostream>
//
//using namespace std;
//
//bool skillss[26];
//
//int solution(string skill, vector<string> skill_trees) {
//	int answer = 0;
//	int size = skill.size();
//	
//	for (int i = 0; i < size; i++)
//		skillss[skill[i] - 'A'] = true;
//	for (int i = 0; i < skill_trees.size(); i++) {
//		bool ddd = false;
//		for (int j = 0; j < skill_trees[i].size(); j++) {
//			if (skillss[skill_trees[i][j] - 'A']) {
//				ddd = true;
//				break;
//			}
//		}
//
//		if (!ddd) {
//			answer++;
//			continue;
//		}
//		int idx = 0, d = 0;
//		for (int j = 0; j < skill_trees[i].size(); j++)
//			if (skill[idx] == skill_trees[i][j]) {
//				idx++; d = j;
//			}
//		if (idx == size) {
//			answer++;
//			continue;
//		}
//		bool trees[26];
//		for (int j = d + 1; j < skill_trees[i].size(); j++)
//			trees[skill_trees[i][j] - 'A'] = true;
//
//		bool b = true;
//		for (int j = 0; j < d; j++) {
//			if (trees[skill_trees[i][j]]) {
//				b = false;
//				break;
//			}
//		}
//		if (b)
//			answer++;
//	}
//	return answer;
//}
//
//int main() {
//	vector<string> v;
//	v.push_back("BACDE");
//	v.push_back("CBADF");
//	v.push_back("AECB");
//	v.push_back("BDA");
//	v.push_back("AQWER");
//	cout << solution("CBD", v);
//}