#include <iostream>
using namespace std;
int main() {
	int winner, sum = 0;
	for (int i = 0; i < 5; i++) {
		int a, s = 0;
		for (int j = 0; j < 4; j++) {
			cin >> a;
			s += a;
		}
		if (sum < s) {
			sum = s;
			winner = i + 1;
		}
	}
	cout << winner << " " << sum;
}