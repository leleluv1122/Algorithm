//// testcase 17/26
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string new_id) {
	string answer = "";
	for (int i = 0; i < new_id.size(); i++) {
		if (answer.size() > 14)
			break;
		else if (new_id[i] >= 'A' && new_id[i] <= 'Z') {
			answer += (new_id[i] - 'A' + 'a');
		}
		else if (new_id[i] >= 'a' && new_id[i] <= 'z')
			answer += new_id[i];
		else if (new_id[i] == '-' || new_id[i] == '_')
			answer += new_id[i];
		else if (new_id[i] == '.' && (i == 0 || i == new_id.size() - 1))
			continue;
		else if (new_id[i] == '.') {
			if (new_id[i - 1] == '.')
				continue;
			else if (answer.size() == 0)
				continue;
			else
				answer += new_id[i];
		}
		else if (new_id[i] >= '1' && new_id[i] <= '9')
			answer += new_id[i];
	}

	if (answer[0] == '.')
		answer.erase(0, 1);
	if (answer[answer.size() - 1] == '.')
		answer.erase(answer.size() - 1, 1);

	if (answer.size() == 0) {
		while (answer.size() != new_id.size())
			answer += 'a';
	}

	char c = answer[answer.size() - 1];
	while (answer.size() <= 2)
		answer += c;
	return answer;
}
//
//int main() {
//	//cout << solution("=.=") << "\n";
//	cout << solution("...!@BaT#*..y.abcdefghijklm");
//}