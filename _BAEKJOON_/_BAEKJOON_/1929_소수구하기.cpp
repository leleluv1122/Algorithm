#include <iostream>
#include <algorithm>
#include <math.h>

#define endl "\n"
#define MAX 1000001
using namespace std;

bool sosu[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int n, m;
	cin >> n >> m;

	for (int i = 2; i <= m; i++)
		sosu[i] = true;

	for (int i = 2; i <= sqrt(m); i++) {
		if (sosu[i]) {
			for (int j = i + i; j <= m; j += i) {
				sosu[j] = false;
			}
		}
	}

	for (int i = n; i <= m; i++)
		if (sosu[i])
			cout << i << endl;
}