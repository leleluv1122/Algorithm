#include <iostream>
#include <vector>

using namespace std;

int sum[10001];

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v;

	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		v.push_back(num);
	}
	sum[0] = 1;

	for (int i = 0; i < n; i++)
		for (int j = v[i]; j <= k; j++)
			sum[j] += sum[j - v[i]];
	cout << sum[k];
}