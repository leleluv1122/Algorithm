#include <iostream>
#include <algorithm>
#include <cstring>

#define MAX 501
using namespace std;

int N, M;
int arr[MAX][MAX];
bool visited[MAX][MAX];
int gogoA[4] = { 0,0,1,-1 };
int gogoB[4] = { 1,-1,0,0 };

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int tetro(int a, int b, int cnt) {
	if (cnt == 4) 
		return arr[a][b];

	int sum = 0;

	for (int i = 0; i < 4; i++) {
		int A = a + gogoA[i];
		int B = b + gogoB[i];

		if (A >= 0 && A < N && B >= 0 && B < M) {
			if (!visited[A][B]) {
				visited[A][B] = true;
				sum = max(sum, arr[a][b] + tetro(A, B, cnt + 1));
				visited[A][B] = false;
			}
		}
	}
	return sum;
}

int fuck(int a, int b) {
	int rst = 0;
	// た
	if (a + 2 < N && b + 1 < M)
		rst = max(rst, arr[a][b] + arr[a + 1][b] + arr[a + 2][b] + arr[a + 1][b + 1]);
	// っ 
	if (a + 2 < N && b >= 0 && b < M)
		rst = max(rst, arr[a][b] + arr[a + 1][b] + arr[a + 2][b] + arr[a + 1][b - 1]);
	// で
	if (a + 1 < N && b - 1 >= 0 && b + 1 < M)
		rst = max(rst, arr[a][b] + arr[a + 1][b - 1] + arr[a + 1][b] + arr[a + 1][b + 1]);
	// ぬ
	if (a + 1 < N && b + 2 < M)
		rst = max(rst, arr[a][b] + arr[a][b + 1] + arr[a][b + 2] + arr[a + 1][b + 1]);
	return rst;
}

int main() {
	init();
	cin >> N >> M;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> arr[i][j];

	int rst = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) {
			visited[i][j] = true;
			rst = max(rst, tetro(i, j, 1));
			rst = max(rst, fuck(i, j));
			visited[i][j] = false;
		}

	cout << rst << "\n";
}