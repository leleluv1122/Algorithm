#include <iostream>
#include <cstring>

#define MAX 31
#define endl "\n"
using namespace std;

int c[MAX][MAX];

void dynamic() {
	memset(c, 0, sizeof(c));

	for (int i = 1; i < MAX; i++)
		c[1][i] = i;

	for (int i = 2; i < MAX - 1; i++) {
		for (int j = i; j < MAX - 1; j++) {
			for (int k = j; k >= i; k--) {
				c[i][j] += c[i - 1][k - 1];
			}
		}
	}
}

int main() {
	int t;
	cin >> t;
	dynamic();
	while (t--) {
		int n, m;
		cin >> n >> m;

		cout << c[n][m] << endl;
	}
}