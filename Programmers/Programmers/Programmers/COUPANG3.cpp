#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(int k, vector<int> score) {
	int answer = -1;
	
	vector<vector<pair<int, int>>> v;
	v.resize(score.size());
	vector<string> ss;
	int t = score[0];
	int idx = 0;

	for (int i = 1; i < score.size(); i++) {
		int tsz = t - score[i];
		string s = to_string(tsz);
		if (find(ss.begin(), ss.end(), s) == ss.end()) {
			ss.push_back(s);
			v[idx].push_back(make_pair(i - 1, i));
			idx++;
		}
		else {
			int d = find(ss.begin(), ss.end(), s) - ss.begin();
			v[d].push_back(make_pair(i - 1, i));
		}
		t = score[i];
	}

	vector<int> erase_;
	for (int i = 0; i < idx; i++) {
		if (v[i].size() >= k) {
			for (int j = 0; j < v[i].size(); j++) {
				if (find(erase_.begin(), erase_.end(), v[i][j].first) == erase_.end())
					erase_.push_back(v[i][j].first);
				if (find(erase_.begin(), erase_.end(), v[i][j].second) == erase_.end())
					erase_.push_back(v[i][j].second);
			}
		}
	}
	
	answer = score.size() - erase_.size();
	return answer;
}

int main() {
	//int sc[8] = { 24,22,20,10,5,3,2,1 };
	int sc[11] = { 1300000000,700000000,668239490,618239490,568239490,568239486,518239486,157658638,157658634,100000000,100 };
	
	vector<int> s;
	for (int i = 0; i < 11; i++)
		s.push_back(sc[i]);

	//cout << solution(3, s);
	cout << solution(2, s);
}