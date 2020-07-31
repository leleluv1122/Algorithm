#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
#define MAX 1000000001
using namespace std;

int N;
vector<int> v;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N;

	v.resize(N);
	for (int i = 0; i < N; i++)
		cin >> v[i];
	sort(v.begin(), v.end());

	if (v[0] != 1)
		cout << 1 << endl;
	else {
		int sum = v[0];
		for (int i = 1; i < N; i++) {
			if (v[i] > sum + 1)
				break;
			sum += v[i];
		}
		cout << sum + 1 << endl;
	}
}