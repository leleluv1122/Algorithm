#include <iostream>
#include <cstring>

#define MAX 101
using namespace std;

int N;
int arr[MAX][MAX];
int rgb[MAX][MAX];
bool visited[MAX][MAX];
int gogoA[4] = { 0,1,0,-1 };
int gogoB[4] = { 1,0,-1,0 };

void RGB(int a, int b) {
	for (int i = 0; i < 4; i++) {
		int A = a + gogoA[i];
		int B = b + gogoB[i];
		if (A >= 0 && A < N && B >= 0 && B < N) {
			if (!visited[A][B] && arr[a][b] == arr[A][B]) {
				visited[A][B] = true;
				RGB(A, B);
			}
		}
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		for (int j = 0; j < N; j++) {
			if (s[j] == 'R')
				arr[i][j] = 1;
			else if (s[j] == 'G') 
				arr[i][j] = 3;
			else if (s[j] == 'B')
				arr[i][j] = 2;
		}
	}

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j]) {
				visited[i][j] = true;
				RGB(i, j);
				cnt++;
			}
		}
	}
	cout << cnt << " ";
	memset(visited, false, sizeof(visited));
	cnt = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (arr[i][j] == 3)
				arr[i][j] = 1;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j]) {
				visited[i][j] = true;
				RGB(i, j);
				cnt++;
			}
		}
	}
	cout << cnt;
}