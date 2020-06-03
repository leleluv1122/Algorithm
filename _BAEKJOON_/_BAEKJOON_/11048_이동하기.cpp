#include <iostream>
#include <algorithm>
#define MAX 1001
#define endl "\n"
using namespace std;
int N, M;
int candy[MAX][MAX];
int realcandy[MAX][MAX];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			cin >> candy[i][j];

	realcandy[1][1] = candy[1][1];
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			realcandy[i][j] = max(realcandy[i - 1][j] + candy[i][j],
				max(realcandy[i - 1][j - 1] + candy[i][j], realcandy[i][j - 1] + candy[i][j]));
		}
	}
	cout << realcandy[N][M] << endl;
}