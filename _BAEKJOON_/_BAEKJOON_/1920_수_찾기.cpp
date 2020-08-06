#include <iostream>
#include <algorithm>

#define endl "\n"
#define MAX 100000
using namespace std;

int nrr[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int su(int low, int high, int num) {
	if (low > high)
		return 0;
	else {
		int mid = (low + high) / 2;

		if (nrr[mid] == num)
			return 1;
		else if (nrr[mid] > num)
			return su(low, mid - 1, num);
		else
			return su(mid + 1, high, num);
	}
}

int main() {
	init();

	int N, M;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> nrr[i];
	sort(nrr, nrr + N);

	cin >> M;
	while (M--) {
		int a; cin >> a;

		cout << su(0, N - 1, a) << endl;
	}
}