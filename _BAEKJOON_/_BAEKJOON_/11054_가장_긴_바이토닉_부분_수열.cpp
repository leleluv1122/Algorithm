#include <iostream>
#include <algorithm>

#define endl "\n"
#define MAX 1000
using namespace std;

int arr[MAX];
int front[MAX], rear[MAX];
int N;

void fdynamic() {
	for (int i = 0; i < N; i++) {
		front[i] = 1;
		for (int j = 0; j <= i; j++) {
			if (arr[i] > arr[j] && front[j] + 1>front[i])
				front[i] = front[j] + 1;
		}
	}
}

void rdynamic() {
	for (int i = N - 1; i >= 0; i--) {
		rear[i] = 1;
		for (int j = N - 1; j >= i; j--) {
			if (arr[i] > arr[j] && rear[j] + 1 > rear[i])
				rear[i] = rear[j] + 1;
		}
	}
}

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	fdynamic();
	rdynamic();
	int result = front[0] + rear[0];
	for (int i = 1; i < N; i++) {
		result = max(result, front[i] + rear[i]);
	}
	cout << result - 1 << endl;
}