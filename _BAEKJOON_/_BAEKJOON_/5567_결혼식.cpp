#include <iostream>
#include <vector>
#include <queue>

#define MAX 501
#define endl "\n"
using namespace std;

vector<int> v[MAX];
bool visited[MAX];

int wedding(int start) {
	queue<int> q;

	int result = 0;
	for (int i = 0; i < v[start].size(); i++) {
		q.push(v[start][i]);
		result++;
		visited[v[start][i]] = true;
	}
	visited[start] = true;

	while (!q.empty()) {
		int t = q.front();
		q.pop();

		for (int i = 0; i < v[t].size(); i++) {
			int of = v[t][i];
			if (!visited[of]) {
				visited[of] = true;
				result++;
			}
		}
	}

	return result;
}

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int n, m;
	cin >> n >> m;
	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	cout << wedding(1) << endl;
}