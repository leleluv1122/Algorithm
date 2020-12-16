#include <iostream>
#include <cstring>

using namespace std;

int N;
char arr[101][101];;
bool visited[101][101];
int gogoA[4] = { 0,1,0,-1 };
int gogoB[4] = { 1,0,-1,0 };

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void man(int a, int b) {
	for (int i = 0; i < 4; i++) {
		int A = a + gogoA[i];
		int B = b + gogoB[i];
		if (!visited[A][B] && arr[A][B] == arr[a][b]) {
			if (A >= 0 && A < N && B >= 0 && B < N) {
				visited[A][B] = true;
				man(A, B);
			}
		}
	}
}

int main() {
	init();
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];
	memset(visited, false, sizeof(visited));
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j]) {
				visited[i][j] = true;
				man(i, j);
				cnt++;
			}
		}
	}
	cout << cnt << " ";
	
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (arr[i][j] == 'R')
				arr[i][j] = 'G';
	memset(visited, false, sizeof(visited));
	cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j]) {
				visited[i][j] = true;
				man(i, j);
				cnt++;
			}
		}
	}
	cout << cnt;
}