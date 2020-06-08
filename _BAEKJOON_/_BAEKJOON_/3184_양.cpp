#include <iostream>

#define endl "\n"
#define MAX 250 + 1
using namespace std;

int R, C;
int yaya, nene; // ¾ç ´Á´ë

int reya, rene; // ÃÑ¾ç, ÃÑ´Á´ë
string yang[MAX];
int strip[MAX][MAX];
bool visited[MAX][MAX];
int gogoA[4] = { 0,1,0,-1 };
int gogoB[4] = { 1,0,-1,0 };

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void nanum(int a, int b) {
	visited[a][b] = true;
	if (yang[a][b] == 'o')
		yaya++;
	if (yang[a][b] == 'v')
		nene++;


	for (int i = 0; i < 4; i++) {
		int A = a + gogoA[i];
		int B = b + gogoB[i];

		if (A >= 0 && A < R && B >= 0 && B < C) {
			if (strip[A][B] != -1 && !visited[A][B]) {
				nanum(A, B);
			}
		}
	}
}

int main() {
	init();
	cin >> R >> C;

	for (int i = 0; i < R; i++) {
		cin >> yang[i];
		for (int j = 0; j < C; j++) {
			if (yang[i][j] == '#')
				strip[i][j] = -1;
		}
	}

	int n = 1;
	reya = 0, rene = 0;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			yaya = 0, nene = 0;
			if (yang[i][j] != '#' && !visited[i][j])
				nanum(i, j);

			if (yaya > nene)
				reya += yaya;
			else if (yaya <= nene)
				rene += nene;
		}
	}

	cout << reya << " " << rene << endl;
}