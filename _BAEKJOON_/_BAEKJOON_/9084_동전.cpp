#include <iostream>
#include <cstring>

#define MAX 21
#define MAX2 10001
#define endl "\n"
using namespace std;

int N, M;
int arr[MAX];
int money[MAX2];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int DP() {
	memset(money, 0, sizeof(money));
	money[0] = 1;

	for (int i = 0; i < N; i++) {
		for (int j = arr[i]; j <= M; j++) {
			money[j] += money[j - arr[i]];
		}
	}

	return money[M];
}

int main() {
	int T;
	init();

	cin >> T;

	while (T--) {
		cin >> N;
		for (int i = 0; i < N; i++)
			cin >> arr[i];

		cin >> M;

		cout << DP() << endl;
	}
}