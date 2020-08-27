#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<int> solution(string msg) {
	vector<int> answer;
	map<string, int> m;
	int idx = 27;

	string ss = "";

	for (int i = 0; i < msg.size(); i++) {
		ss = "";
		ss += msg[i];
		ss += msg[i + 1];

		int j = 2;
		if (m.count(ss) > 0) {
			while (1) {
				ss += msg[i + j];
				if (m.count(ss) > 0) {
					j++;
				}
				else {
					answer.push_back(m[ss.substr(0, ss.length() - 1)]);
					break;
				}
			}
			m.insert({ ss, idx++ });
			i += j - 1;
		}
		else {
			answer.push_back(msg[i] - 'A' + 1);
			m.insert({ ss, idx++ });
		}
	}

	return answer;
}

int main() {
	string ssss = "TOBEORNOTTOBEORTOBEORNOT";
	vector<int> v = solution(ssss);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}