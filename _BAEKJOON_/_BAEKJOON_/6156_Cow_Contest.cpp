#include <iostream>
#include <algorithm>

#define endl "\n"
#define MAX 101
#define INF 987654321
using namespace std;

int N, M;
int cow[MAX][MAX];

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
			cow[i][j] = INF;
	
	int u, v;
	while (M--) {
		cin >> u >> v;
		cow[u][v] = 1;
	}

	for (int k = 1; k <= N; k++)
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				cow[i][j] = min(cow[i][j], cow[i][k] + cow[k][j]);
	
	int result = 0;

	for (int i = 1; i <= N; i++) {
		int cnt = 0;
		for (int j = 1; j <= N; j++) {
			if (i == j)
				continue;
			if (cow[i][j] != INF)
				cnt++;
		}

		for (int j = 1; j <= N; j++) {
			if (i == j)
				continue;
			if (cow[j][i] != INF)
				cnt++;
		}
		
		if (cnt == N - 1)
			result++;
	}
	cout << result << endl;
}