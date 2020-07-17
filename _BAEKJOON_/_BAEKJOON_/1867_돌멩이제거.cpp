#include<iostream>
#include<vector>
#include<cstring>

#define MAX 501
#define endl "\n"
using namespace std;

int d[MAX];
bool visited[MAX];
vector<int> v[MAX];

bool dfs(int x) {
	for (int i = 0; i < v[x].size(); i++) {
		int a = v[x][i];

		if (visited[a])
			continue;
		visited[a] = true;

		if (d[a] == 0 || dfs(d[a])) {
			d[a] = x;
			return true;
		}
	}
	return false;
}

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int N, M;
	cin >> N >> M;

	int x, y;
	for (int i = 1; i <= M; i++) {
		cin >> x >> y;
		v[x].push_back(y);
	}

	int ans = 0;
	for (int i = 1; i <= N; i++) {
		memset(visited, false, sizeof(visited));
		if (dfs(i))
			ans++;
	}
	cout << ans << endl;
}