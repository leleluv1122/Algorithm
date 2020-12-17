#include <iostream>

using namespace std;

int arr[11];

int main() {
	int N, K, cnt = 0; 
	cin >> N >> K;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	for (int i = N - 1; i >= 0; i--) {
		if (K - arr[i] >= 0) {
			K -= arr[i];
			cnt++; i++;
		}
	}
	cout << cnt;
}