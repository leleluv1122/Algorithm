#include <iostream>
#define MAX 51
using namespace std;

int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };

int back_dx[4] = { 1,0,-1,0 };
int back_dy[4] = { 0,-1,0,1 };

int ans;
int arr[MAX][MAX];
int n, m, r, c, d;

void Dfs(int x, int y, int direction) {
	if (arr[x][y] == 1)
		return;
	if (arr[x][y] == 0) {
		arr[x][y] = 2;
		ans++;
	}

	for (int i = 0; i < 4; i++) {
		int nd = direction - 1 < 0 ? 3 : direction - 1;
		int nx = x + dx[nd], ny = y + dy[nd];
		if (!arr[nx][ny]) {
			Dfs(nx, ny, nd);
			return;
		}
		else
			direction = nd;
	}

	int nx = x + back_dx[direction], ny = y + back_dy[direction];

	Dfs(nx, ny, direction);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m >> r >> c >> d;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	Dfs(r, c, d);
	cout << ans << "\n";
}