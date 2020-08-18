#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int N, high = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		high = max(high, arr[i]);
	}

	double result = 0;
	for (int i = 0; i < N; i++)
		result += (double)arr[i] / high * 100;

	printf("%.7f\n", result / N);
}