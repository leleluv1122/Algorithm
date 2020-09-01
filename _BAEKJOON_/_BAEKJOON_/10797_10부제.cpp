#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int d = 5;
	int rst = 0;
	while (d--) {
		int a; cin >> a;
		if (a == n)
			rst++;
	}
	cout << rst;
}