#include <iostream>
#include <cstring>
#define endl "\n"
using namespace std;

int arr[10];
int A, B, C;
int sum;

int main() {
	memset(arr, 0, sizeof(arr));
	cin >> A >> B >> C;
	sum = A * B * C;

	while (sum) {
		int a = sum % 10;
		arr[a] += 1;
		sum /= 10;
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i] << endl;
}