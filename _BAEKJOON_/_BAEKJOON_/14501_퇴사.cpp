#include <iostream>
#include <algorithm>

#define endl "\n"
using namespace std;

int N;
int arr[16];

int main() {
	cin >> N;

	int MAXs = 0;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		if (i + a > N)
			continue;
		else {
			for (int j = 0; j <= i; j++) {
				arr[i + a] = max(arr[i + a], arr[j] + b);
			}
			MAXs = max(arr[i + a], MAXs);
		}
	}

	cout << MAXs << endl;
}