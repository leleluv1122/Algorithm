#include <iostream>
using namespace std;
int main() {
	int sum, n = 9;
	cin >> sum;

	while (n--) {
		int a; cin >> a;
		sum -= a;
	}
	cout << sum;
}