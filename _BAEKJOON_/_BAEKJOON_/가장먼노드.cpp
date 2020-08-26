#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

#define MAX 20001
using namespace std;

int arr[MAX];
bool visited[MAX];
vector<int> v[MAX];

int solution(int n, vector<vector<int>> edge) {
	int answer = 0;
	for (int i = 0; i < edge.size(); i++) {
		v[edge[i][0]].push_back(edge[i][1]);
		v[edge[i][1]].push_back(edge[i][0]);
	}

	queue<int> q;
	q.push(1);
	visited[1] = true;
	arr[1] = 0;
	int maxval = 0;
	
	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int i = 0; i < v[cur].size(); i++) {
			if (!visited[v[cur][i]]) {
				q.push(v[cur][i]);
				visited[v[cur][i]] = true;
				arr[v[cur][i]] = arr[cur] + 1;
				maxval = max(maxval, arr[v[cur][i]]);
			}
		}
	}

	for (int i = 1; i <= n; i++)
		if (arr[i] == maxval)
			answer++;

	return answer;
}
int main() {
	vector<vector<int>> edge;
	edge.resize(7);
	edge[0].push_back(3);
	edge[0].push_back(6);

	edge[1].push_back(4);
	edge[1].push_back(3);

	edge[2].push_back(3);
	edge[2].push_back(2);

	edge[3].push_back(1);
	edge[3].push_back(3);

	edge[4].push_back(1);
	edge[4].push_back(2);

	edge[5].push_back(2);
	edge[5].push_back(4);

	edge[6].push_back(5);
	edge[6].push_back(2);
	cout << solution(6, edge);
}