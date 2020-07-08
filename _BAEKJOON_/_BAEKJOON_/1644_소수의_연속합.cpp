#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>

#define MAX 4000000
#define endl "\n"
using namespace std;

int N;
vector<int> s;
bool arr[MAX + 1];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N;

	if (N == 1) {
		cout << 0 << endl;
		exit(0);
	}

	memset(arr, true, sizeof(arr));

	for (int i = 2; i <= MAX; i++) {
		if (arr[i]) {
			for (int j = i + i; j <= MAX; j += i)
				if (arr[j])
					arr[j] = false;
		}
	}

	for (int i = 2; i <= N; i++)
		if (arr[i])
			s.push_back(i);

	int cnt = 0;
	int a = 0, b = 0;
	while (1) {
		int sum = 0;
		for (int i = a; i <= b; i++)
			sum += s[i];

		if (sum < N)
			b++;
		else if (sum == N) {
			cnt++;
			b++;
		}
		else if (sum > N)
			a++;

		if (b == s.size())
			break;
	}

	cout << cnt << endl;
}