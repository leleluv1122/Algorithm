#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

int N, K;
pair<int, int> arr[101];
int d[100001];
int h[101];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	init();
	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		int a, b;
		cin >> a >> b;
		arr[i].first = a;
		arr[i].second = b;
	}

	for (int i = 1; i <= N; i++) {
		for (int j = K; j >= 1; j--) {
			if (arr[i].first <= j) {
				d[j] = max(d[j], d[j - arr[i].first] + arr[i].second);
			}
		}
	}
	cout << d[K] << endl;
}