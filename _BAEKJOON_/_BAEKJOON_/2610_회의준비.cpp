#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
#define INF 200
#define MAX 101
using namespace std;

int idx = 0;
vector<int> v[MAX], group[MAX];
bool visited[MAX];
int N, M;
int dist[MAX][MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void dfs(int a) {
	group[idx].push_back(a);
	visited[a] = true;

	for (int i = 0; i < v[a].size(); i++) {
		if (!visited[v[a][i]])
			dfs(v[a][i]);
	}
}

int main() {
	init();
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (i == j)
				dist[i][j] = 0;
			else
				dist[i][j] = INF;
		}
	}

	int a, b;
	while (M--) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
		dist[a][b] = dist[b][a] = 1;
	}

	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			idx++;
			dfs(i);
		}
	}

	for (int k = 1; k <= N; k++)
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

	vector<int> result;

	for (int i = 1; i <= idx; i++) {
		int minValue = INF, minIdx;
		for (auto& x : group[i]) {
			int mx = 0;
			for (auto& y : group[i]) {
				if (dist[x][y] != INF)
					mx = max(mx, dist[x][y]);
			}
			if (mx < minValue) {
				minValue = mx;
				minIdx = x;
			}
		}

		result.push_back(minIdx);
	}

	cout << result.size() << endl;
	sort(result.begin(), result.end());

	for (auto& i : result)
		cout << i << endl;
}