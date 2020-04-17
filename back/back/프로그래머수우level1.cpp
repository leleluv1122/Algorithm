#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(pair<double, int> a, pair<double, int> b)
{
	if (a.first == b.first) {
		if (a.second < b.second) {
			return true;
		}
		else {
			return false;
		}
	}
	else if (a.first > b.first) {
		return true;
	}
	else {
		return false;
	}
}
vector<int> solution(int N, vector<int> stages)
{
	vector<int> answer;
	vector<pair<double, int>> reserve;
	sort(stages.begin(), stages.end());
	for (int k = 1; k <= N; k++) {
		int playerCnt = 0;
		int failCnt = 0;

		for (int i = 0; i < stages.size(); i++) {
			if (stages[i] >= k) {
				playerCnt++;
			}
			if (stages[i] == k) {
				failCnt++;
			}
		}
		if (failCnt == 0) {
			reserve.push_back({ 0, k });
		}
		else {
			reserve.push_back({ (double)failCnt / playerCnt, k });
		}
	}
	sort(reserve.begin(), reserve.end(), cmp);
	for (int i = 0; i < reserve.size(); i++)
	{
		answer.push_back(reserve[i].second);
		cout << reserve[i].first << endl;
	}
	return answer;
}


//#include <iostream>
//#include <vector>
//#include <string.h>
//using namespace std;
//
//string solution(string s) {
//	cin >> s;
//
//	int l = 0;
//	for (int i = 0; i < s.length(); ++i) {
//		l++;
//	}
//
//	string answer = "";
//
//	if (l % 2 == 0) {
//		answer += s[l / 2 - 1];
//		answer += s[l / 2];
//	}
//	else {
//		answer = s[l / 2];
//	}
//	return answer;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	string s;
//
//	cin >> s;
//
//	int l = 0;
//	for (int i = 0; i < s.length(); ++i) {
//		l++;
//	}
//
//	string answer = "";
//
//	if (l % 2 == 0) {
//		answer += s[l / 2 - 1];
//		answer += s[l / 2];
//	}
//	else {
//		answer = s[l / 2];
//	}
//	cout << answer << endl;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	char s[100];
//
//	cin >> s;
//
//	int l = strlen(s);
//
//	string answer = "";
//
//	if (l % 2 == 0) {
//		answer += s[l / 2 - 1];
//		answer += s[l / 2];
//	}
//	else {
//		answer = s[l / 2];
//	}
//	cout << answer << endl;
//}