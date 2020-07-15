#include <iostream>
#include <vector>
#include <algorithm>

#define INF 2e9
#define endl "\n"
using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int N;
	cin >> N;

	vector<int> v(N);
	for (int i = 0; i < N; i++)
		cin >> v[i];
	sort(v.begin(), v.end());

	int ans = INF;
	pair<int, int> ansP;

	int low = 0, high = v.size() - 1;
	while (low < high) {
		int a = v[low];
		int b = v[high];

		if (abs(a + b) < ans) {
			ans = abs(a + b);

			ansP.first = a;
			ansP.second = b;
		}

		if (a + b < 0)
			low++;
		else
			high--;
	}

	cout << ansP.first << " " << ansP.second << endl;
}