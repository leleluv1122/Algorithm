#include <iostream>

#define MAX 10001
#define endl "\n"
using namespace std;

bool selfs[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void self_su() {
	for (int i = 1; i <= 10000; i++) {
		int ans = i;
		int a = i;
		while (a) {
			ans += a % 10;
			a /= 10;
		}

		if(ans < MAX)
			selfs[ans] = true;
	}
}

int main() {
	init();
	self_su();

	for (int i = 1; i <= 10000; i++)
		if (!selfs[i])
			cout << i << endl;
}