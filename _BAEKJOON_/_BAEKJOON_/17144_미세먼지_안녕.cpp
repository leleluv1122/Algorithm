#include <iostream>

#define endl "\n"
#define INF 2e9
using namespace std;

int R, C, T;
int monji[51][51];
int map[51][51];
pair<int, int> air_cleaner[2];
int gogoA[4] = { 0,1,0,-1 };
int gogoB[4] = { 1,0,-1,0 };

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void input() {
	cin >> R >> C >> T;
	int idx = 0;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> monji[i][j];
			if (monji[i][j] == -1) {
				air_cleaner[idx].first = i;
				air_cleaner[idx].second = j;
				idx++;
			}
		}
	}
}

void copy(int A[][51], int B[][51]) {
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			A[i][j] = B[i][j];
}

void dust_wind() {
	copy(map, monji);

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (monji[i][j] != 0 && monji[i][j] != -1) {
				int cnt = 0;
				int val = monji[i][j] / 5;

				for (int k = 0; k < 4; k++) {
					int A = i + gogoA[k];
					int B = j + gogoB[k];

					if (A >= 0 && A < R && B >= 0 && B < C) {
						if (monji[A][B] != -1) {
							map[A][B] = map[A][B] + val;
							cnt++;
						}
					}
				}
				map[i][j] = map[i][j] - (cnt * val);
			}
		}
	}

	copy(monji, map);
}

void move_dust() {
	for (int i = air_cleaner[0].first - 1; i > 0; i--)
		monji[i][0] = monji[i - 1][0];
	for (int i = 0; i < C - 1; i++)
		monji[0][i] = monji[0][i + 1];
	for (int i = 1; i <= air_cleaner[0].first; i++)
		monji[i - 1][C - 1] = monji[i][C - 1];
	for (int i = C - 1; i > 0; i--)
		monji[air_cleaner[0].first][i] = monji[air_cleaner[0].first][i - 1];
	monji[air_cleaner[0].first][1] = 0;


	for (int i = air_cleaner[1].first + 1; i < R - 1; i++)
		monji[i][0] = monji[i + 1][0];
	for (int i = 0; i < C - 1; i++)
		monji[R - 1][i] = monji[R - 1][i + 1];
	for (int i = R - 1; i >= air_cleaner[1].first; i--)
		monji[i][C - 1] = monji[i - 1][C - 1];
	for (int i = C - 1; i > 1; i--)
		monji[air_cleaner[1].first][i] = monji[air_cleaner[1].first][i - 1];
	monji[air_cleaner[1].first][1] = 0;
}

int main() {
	init();
	input();
	
	for (int i = 0; i < T; i++) {
		dust_wind();
		move_dust();
	}

	int sum = 0;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (monji[i][j] == -1)
				continue;
			sum += monji[i][j];
		}
	}

	cout << sum << endl;
}