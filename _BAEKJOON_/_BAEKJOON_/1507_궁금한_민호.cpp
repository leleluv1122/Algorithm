#include <iostream>
#include <cstring>

#define endl "\n"
#define MAX 20
using namespace std;

int N, result;
int g[MAX][MAX];
bool road[MAX][MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void curious_minho() {
	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (i == j || k == i || k == j)
					continue;
				else if (g[i][j] > g[i][k] + g[k][j]) {
					result = -1;
					return;
				}
				else if (g[i][j] == g[i][k] + g[k][j])
					road[i][j] = false;
			}
		}
	}
}

int main() {
	init();
	cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> g[i][j];

	memset(road, true, sizeof(road));
	curious_minho();

	if (result == -1) {
		cout << result << endl;
		exit(0);
	}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (road[i][j])
				result += g[i][j];

	cout << result / 2 << endl;
}