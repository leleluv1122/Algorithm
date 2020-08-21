#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#include <vector>

#define endl "\n"
using namespace std;

int arr[500000];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int N; cin >> N;

	map<int, int> m;
	int sum = 0;
	int low = 4001, high = -4001;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		low = min(low, arr[i]);
		high = max(high, arr[i]);
		sum += arr[i];
		if (m.count(arr[i]) == 0)
			m.insert({ arr[i], 1 });
		else
			m.at(arr[i])++;
	}
	sort(arr, arr + N);

	int cnt = 0;
	vector<int> v;
	for (int i = 0; i < N; i++)
		cnt = max(cnt, m.at(arr[i]));
	for (int i = 0; i < N; i++)
		if (cnt == m.at(arr[i]))
			if (find(v.begin(), v.end(), arr[i]) == v.end())
				v.push_back(arr[i]);
	sort(v.begin(), v.end());

	cout << round((double)sum / N) << endl;
	cout << arr[N / 2] << endl;
	if (v.size() == 1)
		cout << v[0] << endl;
	else
		cout << v[1] << endl;
	cout << high - low << endl;
}