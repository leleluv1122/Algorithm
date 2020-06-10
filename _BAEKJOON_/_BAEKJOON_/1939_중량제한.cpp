#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>

#define endl "\n"
#define MAX 100001
using namespace std;

int N, M;
vector<pair<int, int>> v[MAX];
bool visited[MAX];
int AF, BF;

bool bfs(int a) {
	queue<int> q;
	q.push(AF);
	visited[AF] = true;

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		if (cur == BF)
			return true;

		for (int i = 0; i < v[cur].size(); i++) {
			int next = v[cur][i].first;
			int nextCost = v[cur][i].second;

			if (!visited[next] && a <= nextCost) {
				visited[next] = true;
				q.push(next);
			}
		}
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;

	int maxCost = 0;

	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b, c));
		v[b].push_back(make_pair(a, c));
		maxCost = max(maxCost, c);
	}

	cin >> AF >> BF;

	int low = 0, high = maxCost;
	while (low <= high) {
		memset(visited, false, sizeof(visited));

		int mid = (low + high) / 2;
		if (bfs(mid))
			low = mid + 1;
		else
			high = mid - 1;
	}

	cout << high << endl;
}