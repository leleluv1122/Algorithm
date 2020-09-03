#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n = 7, sum = 0, mini = 101;
	while (n--) {
		int a; cin >> a;
		if (a % 2 == 1) {
			sum += a;
			mini = min(mini, a);
		}
	}
	if (sum == 0) {
		cout << -1;
		exit(0);
	}
	cout << sum << "\n" << mini;
}