#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>

#define MAX 10000
using namespace std;

vector<int> v[MAX];
int dh, hd;

int gouu(int a, int b) {
	queue<int> q;
	for (int i = 0; i < v[a].size(); i++)
		q.push(v[a][i]);

	int ans = 0;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		if (cur == b) {
			ans++;
			continue;
		}

		for (int i = 0; i < v[cur].size(); i++) {
			int next = v[cur][i];
			q.push(next);
		}
	}
	return ans;
}

int solution(string depar, string hub, string dest, vector<vector<string>> roads) {
	int answer = -1;
	map<string, int> m;
	int idx = 0;
	for (int i = 0; i < roads.size(); i++) {
		int a, b;
		if (m.count(roads[i][0]))
			a = m[roads[i][0]];
		else {
			a = idx;
			m.insert({ roads[i][0], idx++ });
		}

		if (m.count(roads[i][1]))
			b = m[roads[i][1]];
		else {
			b = idx;
			m.insert({ roads[i][1], idx++ });
		}

		v[a].push_back(b);
	}

	int dep = m[depar], hu = m[hub], des = m[dest];

	dh = gouu(dep, hu);
	hd = gouu(hu, des);

	answer = dh * hd;
	return answer;
}

int main() {
	string srr[12][2] = { {"ULSAN","BUSAN"} , {"DAEJEON", "ULSAN"},{"DAEJEON", "GWANGJU"},{"SEOUL", "DAEJEON"},{"SEOUL", "ULSAN"},{"DAEJEON", "DAEGU"},{"GWANGJU", "BUSAN"},{"DAEGU", "GWANGJU"},{"DAEGU", "BUSAN"}, {"ULSAN", "DAEGU"}, {"GWANGJU", "YEOSU"},{"BUSAN", "YEOSU"}};

	vector<vector<string>> roads;
	roads.resize(12);
	for (int i = 0; i < 12; i++) {
		roads[i].push_back(srr[i][0]);
		roads[i].push_back(srr[i][1]);
	}

	cout << solution("SEOUL", "DAEGU", "YEOSU", roads);
}