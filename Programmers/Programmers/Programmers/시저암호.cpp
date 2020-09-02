#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
	string answer = "";
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ')
			answer += ' ';
		else if (s[i] >= 'A' && s[i] <= 'Z') {
			int a = (s[i] - 'A' + n) % 26;
			answer += (a + 'A');
		}
		else if (s[i] >= 'a' && s[i] <= 'z') {
			int a = (s[i] - 'a' + n) % 26;
			answer += (a + 'a');
		}
	}

	return answer;
}