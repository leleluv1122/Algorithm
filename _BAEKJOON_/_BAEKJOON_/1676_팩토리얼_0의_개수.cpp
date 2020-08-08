#include <iostream>

using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int N;
	cin >> N;

	int two = 0, five = 0;
	for (int i = 2; i <= N; i *= 2)
		two += N / i;
	for (int i = 5; i <= N; i *= 5)
		five += N / i;

	two < five ? cout << two : cout << five;
	cout << "\n";
}