#include <cstdio>

int main() {

	int t, i, j, x, y, sum, n, m, k;
	int arr[301][301] = { 0, };
	int dp[301][301] = { 0, };

	scanf_s("%d %d", &n, &m);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			scanf_s("%d", &arr[i][j]);
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] + arr[i][j] - dp[i - 1][j - 1];
		}
	}

	scanf_s("%d", &k);

	for (t = 0; t < k; t++) {
		scanf_s("%d %d %d %d", &x, &y, &i, &j);
		printf("%d\n", dp[i][j] - dp[i][y - 1] - dp[x - 1][j] + dp[x - 1][y - 1]);
	}

	return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int x = 0;
//	int y = 0;
//
//	scanf_s("%d", &x);
//	scanf_s("%d", &y);
//
//	int** arr = NULL;
//
//	arr = (int**)malloc(sizeof(int*) * x);
//	for (int i = 0; i < x; ++i)
//		arr[i] = (int*)malloc(sizeof(int) * y);
//
//	arr[0][0] = 0;
//
//	for (int i = 0; i < x; ++i) {
//		for (int j = 0; j < y; ++j) {
//			scanf_s("%d", &arr[i][j]);
//		}
//	}
//
//	int answer = 0;
//
//	for (int i = 0; i < x; ++i) {
//		for (int j = 0; j < y; ++j) {
//			answer += arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < x; ++i)
//		free(arr[i]);
//
//
//}