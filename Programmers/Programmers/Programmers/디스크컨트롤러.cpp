#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int solution(vector<vector<int>> jobs) {
	int answer = 0;
	int start = 0, time = 0;
	vector<pair<int, int>> v;
	for (int i = 0; i < jobs.size(); i++)
		v.push_back(make_pair(jobs[i][0], jobs[i][1]));
	sort(v.begin(), v.end(), compare);

	while (!v.empty()) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i].first <= start) {
				start += v[i].second;
				time += start - v[i].first;
				v.erase(v.begin() + i);
				break;
			}

			if (i == v.size() - 1)
				start++;
		}
	}
	answer = time / jobs.size();
	return answer;
}

int main() {
	vector<vector<int>> j;
	j.resize(3);
	j[0].push_back(0);
	j[0].push_back(3);
	j[1].push_back(1);
	j[1].push_back(9);
	j[2].push_back(2);
	j[2].push_back(6);

	int a = solution(j);
	cout << a;
}