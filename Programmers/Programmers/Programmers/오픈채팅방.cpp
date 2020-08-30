#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> record) {
	map<string, string> m; // uid, name
	for (int i = 0; i < record.size(); i++) {
		string arr[2];
		int idx = 0;
		string t;
		for (int j = 0; j < record[i].size(); j++) {
			if (record[i][j] == ' ') {
				arr[idx] = t;
				t = "";
				idx++;
				continue;
			}
			t += record[i][j];
		}
		
		if (arr[0] == "Enter") {
			if (m.count(arr[1]) != 0)
				m.at(arr[1]) = t;
			else
				m.insert({ arr[1], t });
		}
		else if (arr[0] == "Change") {
			m.at(arr[1]) = t;
		}
	}

	vector<string> answer;
	for (int i = 0; i < record.size(); i++) {
		string arr[2];
		int idx = 0;
		string t;
		for (int j = 0; j < record[i].size(); j++) {
			if (record[i][j] == ' ') {
				arr[idx] = t;
				t = "";
				idx++;
				continue;
			}
			t += record[i][j];
		}

		if (arr[0] == "Enter") {
			string s = m[arr[1]];
			s += "´ÔÀÌ µé¾î¿Ô½À´Ï´Ù.";
			answer.push_back(s);
		}
		else if (arr[0] == "Leave") {
			string s = m[t];
			s += "´ÔÀÌ ³ª°¬½À´Ï´Ù.";
			answer.push_back(s);
		}
	}

	return answer;
}

int main() {
	vector<string> v;
	v.push_back("Enter uid1234 Muzi");
	v.push_back("Enter uid4567 Prodo");
	v.push_back("Leave uid1234");
	v.push_back("Enter uid1234 Prodo");
	v.push_back("Change uid4567 Ryan");

	vector<string> answer = solution(v);

	for (int i = 0; i < answer.size(); i++)
		cout << answer[i] << "\n";
}