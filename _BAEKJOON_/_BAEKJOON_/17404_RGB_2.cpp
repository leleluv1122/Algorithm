#include <iostream>
#include <algorithm>

#define MAX 1001
#define INF 987654321
#define endl "\n"
using namespace std;

int n;
int arr[MAX][3];
int rgb_0[MAX][3];
int rgb_1[MAX][3];
int rgb_2[MAX][3];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];

	rgb_0[0][0] = arr[0][0];
	rgb_0[0][1] = INF;
	rgb_0[0][2] = INF;

	for (int i = 1; i < n; i++) {
		if (i != n - 1)
			rgb_0[i][0] = arr[i][0] + min(rgb_0[i - 1][1], rgb_0[i - 1][2]);
		rgb_0[i][1] = arr[i][1] + min(rgb_0[i - 1][0], rgb_0[i - 1][2]);
		rgb_0[i][2] = arr[i][2] + min(rgb_0[i - 1][0], rgb_0[i - 1][1]);
	}

	rgb_1[0][0] = INF;
	rgb_1[0][1] = arr[0][1];
	rgb_1[0][2] = INF;

	for (int i = 1; i < n; i++) {
		rgb_1[i][0] = arr[i][0] + min(rgb_1[i - 1][1], rgb_1[i - 1][2]);
		if (i != n - 1)
			rgb_1[i][1] = arr[i][1] + min(rgb_1[i - 1][0], rgb_1[i - 1][2]);
		rgb_1[i][2] = arr[i][2] + min(rgb_1[i - 1][0], rgb_1[i - 1][1]);
	}

	rgb_2[0][0] = INF;
	rgb_2[0][1] = INF;
	rgb_2[0][2] = arr[0][2];

	for (int i = 1; i < n; i++) {
		rgb_2[i][0] = arr[i][0] + min(rgb_2[i - 1][1], rgb_2[i - 1][2]);
		rgb_2[i][1] = arr[i][1] + min(rgb_2[i - 1][0], rgb_2[i - 1][2]);
		if (i != n - 1)
			rgb_2[i][2] = arr[i][2] + min(rgb_2[i - 1][0], rgb_2[i - 1][1]);
	}

	int r0 = min(rgb_0[n - 1][1], rgb_0[n - 1][2]);
	int r1 = min(rgb_1[n - 1][0], rgb_1[n - 1][2]);
	int r2 = min(rgb_2[n - 1][0], rgb_2[n - 1][1]);

	int result = min(r0, min(r1, r2));
	cout << result << endl;
}