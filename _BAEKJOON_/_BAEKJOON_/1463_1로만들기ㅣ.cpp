#include <iostream>
#include <algorithm>

#define MAX 1000001
using namespace std;

int arr[MAX];

int main() {
	int X;
	cin >> X;

	arr[1] = 0;
	for (int i = 2; i <= X; i++) {
		arr[i] = arr[i - 1] + 1;

		if (i % 2 == 0)
			arr[i] = min(arr[i], arr[i / 2] + 1);
		if (i % 3 == 0)
			arr[i] = min(arr[i], arr[i / 3] + 1);
	}
	cout << arr[X];
}