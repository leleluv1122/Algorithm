#include <iostream>
#define endl "\n"
using namespace std;

int main() {
	int n;
	cin >> n;

	int cnt = 1;
	int range = 1;
	int t = 1;

	while (1) {
		if (range >= n)
			break;
		t = 6 * (cnt++);
		range += t;
	}
	cout << cnt << endl;
}