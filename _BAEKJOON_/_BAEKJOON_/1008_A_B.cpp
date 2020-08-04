#include <iostream>

using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int A, B;
	cin >> A >> B;

	printf("%.9f\n", (double)A / B);
}