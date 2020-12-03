#include <iostream>
#include <cstring>
#define MAX 51
using namespace std;

int N, M, K;
int arr[MAX][MAX];
bool visited[MAX][MAX];
int gogoA[4] = { 0,1,0,-1 };
int gogoB[4] = { 1,0,-1,0 };

void baechu(int a, int b) {
	if (visited[a][b])
		return;
	visited[a][b] = true;

	for (int i = 0; i < 4; i++) {
		int A = a + gogoA[i];
		int B = b + gogoB[i];

		if (A >= 0 && A < N && B >= 0 && B < M)
			if (arr[A][B])
				baechu(A, B);
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		memset(arr, 0, sizeof(arr));
		memset(visited, 0, sizeof(visited));
		cin >> M >> N >> K;
		while (K--) {
			int a, b; cin >> a >> b;
			arr[b][a] = 1;
		}

		int cnt = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (arr[i][j] && !visited[i][j]) {
					baechu(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
}