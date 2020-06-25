#include <iostream>
#include <algorithm>

#define endl "\n"
using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
}

int Singgi(int num, int div) {
	int result = 0;

	while (num) {
		result += num % div;
		num /= div;
	}

	return result;
}

int main() {
	init();

	int result;
	for (int i = 1000; i < 10000; i++) {
		result = Singgi(i, 10);

		if (result == Singgi(i, 12) && result == Singgi(i, 16))
			cout << i << endl;
		
	}
}