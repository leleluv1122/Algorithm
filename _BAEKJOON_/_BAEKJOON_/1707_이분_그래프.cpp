#include <iostream>
#include <vector>
#include <cstring>

#define endl "\n"
#define MAX 20001
using namespace std;

int V, E, K;
vector<int> v[MAX];
int map[MAX];

void dfs(int a, int color) {
	map[a] = color;

	for (int i = 0; i < v[a].size(); i++) {
		int next = v[a][i];

		if (!map[next])
			dfs(next, 3 - color);
	}
}

bool twominutes_right() {
	for (int i = 0; i < V; i++) 
		for (int j = 0; j < v[i].size(); j++)
			if (map[i] == map[v[i][j]])
				return false;

	return true;
}

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> K;
	while (K--) {
		for (int i = 0; i < MAX; i++)
			v[i].clear();
		memset(map, false, sizeof(map));
		cin >> V >> E;

		for (int i = 0; i < E; i++) {
			int a, b;
			cin >> a >> b;
			v[a].push_back(b);
			v[b].push_back(a);
		}

		for (int i = 0; i < V; i++)
			if (map[i] == 0)
				dfs(i, 1);

		if (twominutes_right())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}