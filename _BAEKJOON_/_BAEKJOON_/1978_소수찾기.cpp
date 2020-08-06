#include <iostream>
#include <cstring>

using namespace std;

bool sosu[1001];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void huum() {
	memset(sosu, true, sizeof(sosu));

	sosu[1] = false;
	for (int i = 2; i <= 32; i++) {
		if (sosu[i]) {
			for (int j = (i * 2); j <= 1000; j += i)
				sosu[j] = false;
		}
	}
}

int main() {
	init();
	int N;
	cin >> N;

	huum();

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;
		if (sosu[a])
			cnt++;
	}
	cout << cnt << "\n";
}