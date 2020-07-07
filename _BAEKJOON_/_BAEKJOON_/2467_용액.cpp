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

	int i = 0, j = v.size() - 1;
	int total = INF;
	pair<int, int> result;

	while (i < j) {
		int a = v[i];
		int b = v[j];

		if (abs(a + b) < total) {
			total = abs(a + b);

			result.first = v[i];
			result.second = v[j];
		}

		if (a + b < 0)
			i++;
		else
			j--;
	}

	cout << result.first << " " << result.second << endl;
}