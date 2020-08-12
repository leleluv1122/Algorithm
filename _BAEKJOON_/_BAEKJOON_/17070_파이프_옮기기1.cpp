#include <iostream>

using namespace std;

int arr[16][16];
int N;
int rst;

// 가로, 세로, 대각선
int gogoA[3] = { 0,1,1 };
int gogoB[3] = { 1,0,1 };

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void pipe(int a, int b, int p) {
	if (a == N - 1 && b == N - 1) {
		rst++;
		return;
	}

	for (int i = 0; i < 3; i++) {
		if ((i == 0 && p == 1) || (i == 1 && p == 0))
			continue;

		int A = a + gogoA[i]; 
		int B = b + gogoB[i];
		if (A >= N || B >= N || arr[A][B] == 1)
			continue;

		if (i == 2 && (arr[a][b + 1] == 1 || arr[a + 1][b] == 1))
			continue;

		pipe(A, B, i);
	}
}


int main(){
	init();
	cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];

	pipe(0, 1, 0);
	cout << rst << "\n";
}