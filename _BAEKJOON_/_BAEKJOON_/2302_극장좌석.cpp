#include <iostream>

#define endl "\n"
#define MAX 41
using namespace std;

int N, M;
bool vip[MAX];
int moving[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void movie() {
	moving[0] = 1;
	moving[1] = 1;

	for (int i = 2; i <= N; i++) {
		moving[i] = moving[i - 1] + moving[i - 2];
	}
}

int main() {
	init();
	cin >> N >> M;
	
	for (int i = 0; i < M; i++) {
		int a; cin >> a;
		vip[a - 1] = true;
	}

	int cnt = 0;
	int result = 1;
	movie();
	for (int i = 0; i < N; i++) {
		if (vip[i]) {
			result *= moving[cnt];
			cnt = 0;
			continue;
		}

		cnt++;
		if (i == N - 1) {
			result *= moving[cnt];
		}
	}

	cout << result << endl;
}