#include <iostream>
#include <cstring>

#define MAX 100 + 1
#define endl "\n"
using namespace std;

int n;
bool door[MAX];

void dynamic(int a) {
	for (int i = 0; i < n; i++) {
		if ((i + 1) % a == 0) {
			if (door[i])
				door[i] = false;
			else
				door[i] = true;
		}
	}
}

int number() {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (door[i] == true)
			cnt++;
	}
	return cnt;
}

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int t;
	cin >> t;
	while (t--) {
		memset(door, true, sizeof(door));
		cin >> n;
		for (int i = 2; i <= n; i++) {
			dynamic(i);
		}
		cout << number() << endl;
	}
}