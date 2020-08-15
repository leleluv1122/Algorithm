#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int arr[501][501];
bool visited[501][501];
int Max = 0;
int cnt;

int gogoA[4] = { 0,0,1,-1 };
int gogoB[4] = { 1,-1,0,0 };

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void pic(int a, int b) {
	cnt++;
	for (int i = 0; i < 4; i++) {
		int A = a + gogoA[i];
		int B = b + gogoB[i];

		if (A >= 0 && A < N && B >= 0 && B < M) {
			if (!visited[A][B] && arr[A][B]) {
				visited[A][B] = true;
				pic(A, B);
			}
		}
	}
}

int main() {
	init();
	cin >> N >> M;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> arr[i][j];

	int idx = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			if (!visited[i][j] && arr[i][j]) {
				cnt = 0;
				idx++;
				visited[i][j] = true;
				pic(i, j);

				Max = max(cnt, Max);
			}

	cout << idx << "\n";
	cout << Max << "\n";
}