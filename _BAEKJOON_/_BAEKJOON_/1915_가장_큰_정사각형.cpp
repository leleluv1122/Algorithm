#include <iostream>
#include <algorithm>

#define MAX 1001
using namespace std;

int n, m;
int arr[MAX][MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		string s; cin >> s;
		for (int j = 1; j <= m; j++)
			s[j - 1] == '0' ? arr[i][j] = 0 : arr[i][j] = 1;
	}

	int max_len = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (arr[i][j] != 0) {
				arr[i][j] = min(arr[i - 1][j - 1], min(arr[i - 1][j], arr[i][j - 1])) + 1;
				max_len = max(max_len, arr[i][j]);
			}
		}
	}
	cout << max_len * max_len;
}