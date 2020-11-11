#include <iostream>
#include <algorithm>

using namespace std;

int arr[100000];
int N, K;

int main() {
	cin >> N >> K;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int sum = 0;
	int idx = 0;
	int max_val = -987654321;
	for (int i = 0; i < N; i++) {
		sum += arr[i];
		idx++;
		if (idx == K) {
			max_val = max(max_val, sum);
			sum -= arr[i - K + 1];
			idx--;
		}
	}
	cout << max_val;
}