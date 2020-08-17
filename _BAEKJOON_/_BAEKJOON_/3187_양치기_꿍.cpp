#include <iostream>
#include <vector>

using namespace std;
int R, C;
vector<string> y;
int arr[250][250];
bool visited[250][250];
int sheep = 0, wolf = 0;

int gogoA[4] = { 0,1,0,-1 };
int gogoB[4] = { 1,0,-1,0 };

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void yang(int a, int b) {
	if (visited[a][b])
		return;
	visited[a][b] = true;
	if (y[a][b] == 'k')
		sheep++;
	else if (y[a][b] == 'v')
		wolf++;

	for (int i = 0; i < 4; i++) {
		int A = a + gogoA[i];
		int B = b + gogoB[i];

		if (A >= 0 && A < R && B >= 0 && B < C) {
			if (arr[A][B] != -1) {
				yang(A, B);
			}
		}
	}
}

int main() {
	init();
	cin >> R >> C;

	for (int i = 0; i < R; i++) {
		string s; cin >> s;
		y.push_back(s);

		for (int j = 0; j < y[i].size(); j++) {
			if (y[i][j] == '#')
				arr[i][j] = -1;
		}
	}

	int idx = 0;
	int rsheep = 0, rwolf = 0;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			sheep = 0, wolf = 0;
			if (!visited[i][j] && arr[i][j] != -1)
				yang(i, j);

			if (sheep > wolf)
				rsheep += sheep;
			else
				rwolf += wolf;
		}
	}

	cout << rsheep << " " << rwolf << "\n";
}
