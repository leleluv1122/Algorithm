#include <iostream>
#include <algorithm>
#include <cstring>

#define endl "\n"
#define MAX 1000001
#define INF 987654321
using namespace std;

pair<int, int> arr[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void dp(int N) {
	arr[1] = make_pair(0, 0);

	for (int i = 2; i <= N; i++) {
		arr[i] = make_pair(arr[i - 1].first + 1, i - 1);
		if (i % 2 == 0) {
			if (arr[i].first > arr[i / 2].first + 1)
				arr[i] = make_pair(arr[i / 2].first + 1, i / 2);
		}
		if (i % 3 == 0) {
			if (arr[i].first > arr[i / 3].first + 1)
				arr[i] = make_pair(arr[i / 3].first + 1, i / 3);
		}
	}
}

int main() {
	init();
	int N;
	cin >> N;

	dp(N);
	cout << arr[N].first << endl;

	int i = N;
	cout << i << " ";
	while (arr[i].first) {
		cout << arr[i].second << " ";
		i = arr[i].second;
	}
	cout << endl;
}