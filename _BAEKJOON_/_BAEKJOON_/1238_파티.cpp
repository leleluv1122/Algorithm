#include <iostream>
#include <algorithm>

#define MAX 1001
using namespace std;

int N, M, X;
int road[MAX][MAX];

void party() {
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (road[j][i] == 0)
				continue;
			for (int k = 1; k <= N; k++) {
				if (road[i][k] == 0 || j == k)
					continue;
				if (road[j][k] == 0 || road[j][k] > road[j][i] + road[i][k])
					road[j][k] = road[j][i] + road[i][k];
			}
		}
	}
}

int main() {
	cin >> N >> M >> X;
	while (M--) {
		int a, b, t;
		cin >> a >> b >> t;
		road[a][b] = t;
	}

	party();
	int time = 0;
	for (int i = 1; i <= N; i++)
		time = max(time, road[i][X] + road[X][i]);
	cout << time;
}