#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 251
#define INF 987654321
#define endl "\n"
using namespace std;

int N, M;
int dist[MAX][MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			dist[i][j] = (i == j ? 0 : INF);

	int u, v, b;
	while (M--) {
		cin >> u >> v >> b;

		if (b == 0) {
			 dist[u][v] = 0;
			 dist[v][u] = 1;
		}
		else
			 dist[v][u] = dist[u][v] = 0;
	}

	for (int k = 1; k <= N; k++) {
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				dist[i][j] = min(dist[i][k] + dist[k][j], dist[i][j]);
			}
		}
	}

	int k;
	cin >> k;

	int xx, yy;
	while (k--) {
		cin >> xx >> yy;

		cout << dist[xx][yy] << endl;
	}
}