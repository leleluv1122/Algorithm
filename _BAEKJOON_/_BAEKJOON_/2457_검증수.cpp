#include <iostream>

using namespace std;

int main() {
	int a = 0;
	for (int i = 0; i < 5; i++) {
		int d; cin >> d;
		d *= d;

		a += (d % 10);
	}

	cout << a % 10 << "\n";
}