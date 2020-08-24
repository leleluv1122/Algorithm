#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "leo";
	map<string, pair<int, int>> m; // name, 완주값, 참여값
	for (int i = 0; i < participant.size(); i++) {
		if (m.count(participant[i]) == 0)
			m.insert({ participant[i], {0, 1} });
		else
			m[participant[i]].second++;
	}
	
	for (int i = 0; i < completion.size(); i++)
		m[completion[i]].first++;
	
	for (auto a : m) {
		if (a.second.first != a.second.second) {
			answer = a.first;
			break;
		}
	}

	return answer;
}