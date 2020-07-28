#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 50
#define endl "\n"
#define INF 987654321
using namespace std;

int map[MAX][MAX];
int N;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void friends() {
	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (map[i][j] > map[i][k] + map[k][j])
					map[i][j] = map[i][k] + map[k][j];
			}
		}
	}
}

int main() {
	init();
	cin >> N;

	for (int i = 0; i < N; i++) {
		string s; cin >> s;

		for (int j = 0; j < s.size(); j++) {
			if (i == j)
				map[i][j] = 0;
			else
				map[i][j] = s[j] == 'Y' ? 1 : INF;
		}
	}

	friends();

	int rst = 0;
	for (int i = 0; i < N; i++) {
		int cnt = 0;
		for (int j = 0; j < N; j++) {
			if (i == j)
				continue;
			else if (map[i][j] <= 2)
				cnt++;
		}
		rst = max(rst, cnt);
	}

	cout << rst << endl;
}