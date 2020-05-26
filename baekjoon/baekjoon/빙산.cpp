#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int N, M;
int bing[300][300];
int bing2[300][300];
int gogoA[4] = { 0,1,0,-1 };
int gogoB[4] = { 1,0,-1,0 };
vector<pair<int, int>> v;
bool visited[300][300];

void kind(int a, int b) {
	if (visited[a][b])
		return;
	visited[a][b] = true;

	for (int i = 0; i < 4; i++) {
		int A = a + gogoA[i];
		int B = b + gogoB[i];

		if (A >= 0 && A < N && B >= 0 && B < M) {
			if (!visited[A][B] && bing[A][B])
				kind(A, B);
		}
	}
}

int main() {
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> bing[i][j];
			if (bing[i][j] != 0)
				v.push_back(make_pair(i, j));
		}
	}
	int n = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)
			bing2[i][j] = bing[i][j];
	}
	int year = 0;
	int d = 0;
	bool b = false;
	while (1) {
		for (int i = 0; i < v.size(); i++) {
			pair<int, int> p = v[i];
			int cnt = 0;
			for (int j = 0; j < 4; j++) {
				int A = p.first + gogoA[j];
				int B = p.second + gogoB[j];

				if (A >= 0 && A < N && B >= 0 && B < M) {
					if (bing[A][B] == 0)
						cnt++;
				}
			}
			bing2[p.first][p.second] -= cnt;
			if (bing2[p.first][p.second] < 0)
				bing2[p.first][p.second] = 0;
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++)
				bing[i][j] = bing2[i][j];
		}

		memset(visited, false, sizeof(visited));
		d = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (bing[i][j] != 0 && !visited[i][j]) {
					kind(i, j);
					d++;
				}
			}
		}
		year++;
		if (d > 1)
			break;
		if (d == 0) {
			b = true;
			break;
		}
	}
	if (b)
		cout << 0 << "\n";
	else
		cout << year << "\n";
}