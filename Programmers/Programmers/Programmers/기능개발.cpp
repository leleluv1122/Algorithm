#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;

	int idx = 0;
	int day = 0;
	while (idx != speeds.size()) {
		int cnt = 0;
		day++;
		for (int i = idx; i < speeds.size(); i++) {
			if (progresses[idx] + (speeds[idx] * day) >= 100) {
				idx++; cnt++;
			}
		}
		if (cnt)
			answer.push_back(cnt);
	}

	return answer;
}

int main() {
	vector<int> p;
	p.push_back(95);
	p.push_back(90);
	p.push_back(99);
	p.push_back(99);
	p.push_back(80);
	p.push_back(99);

	vector<int> s;
	s.push_back(1);
	s.push_back(1);
	s.push_back(1);
	s.push_back(1);
	s.push_back(1);
	s.push_back(1);

	vector<int> ans = solution(p, s);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
}