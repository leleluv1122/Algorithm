#include <string>
#include <queue>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int low[20001];
bool visited[20001];
vector<int> v[20001];

int solution(int n, vector<vector<int>> edge) {
	int answer = 0;
	for (int i = 0; i < edge.size(); i++) {
		v[edge[i][0]].push_back(edge[i][1]);
		v[edge[i][1]].push_back(edge[i][0]);
	}

	queue<pair<int, int>> q;
	visited[1] = true;
	for (int i = 0; i < v[1].size(); i++) {
		q.push(make_pair(v[1][i], 1));
		visited[v[1][i]] = true;
	}
	low[1] = 0;
	int maxval = 0;
	while (!q.empty()) {
		int cur = q.front().first;
		int cnt = q.front().second;
		q.pop();
		
		if (low[cur])
			low[cur] = min(low[cur], cnt);
		else
			low[cur] = cnt;
		maxval = max(maxval, low[cur]);

		for (int i = 0; i < v[cur].size(); i++) {
			if (!visited[v[cur][i]]) {
				visited[v[cur][i]] = true;
				q.push({ v[cur][i], cnt + 1 });
			}
		}
	}

	for (int i = 1; i <= n; i++)
		if (low[i] == maxval)
			answer++;
	return answer;
}


int main() {
	vector<vector<int>> s;
	s.resize(7);

	s[0].push_back(3);
	s[0].push_back(6);
	s[1].push_back(4);
	s[1].push_back(3);
	s[2].push_back(3);
	s[2].push_back(2);
	s[3].push_back(1);
	s[3].push_back(3);
	s[4].push_back(1);
	s[4].push_back(2);
	s[5].push_back(2);
	s[5].push_back(4);
	s[6].push_back(5);
	s[6].push_back(2);

	int d = solution(6, s);
	cout << d;
}