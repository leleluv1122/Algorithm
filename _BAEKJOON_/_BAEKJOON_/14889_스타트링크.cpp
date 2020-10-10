#include <iostream>
#include <vector>
#include <math.h>

#define MAX 20
using namespace std;

int N;
int arr[MAX][MAX];
vector<int> t1;
vector<int> t2;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];

	int ans = -1;
	for (int i = 0; i < (1 << N); i++) {
		t1.clear();
		t2.clear();
		for (int j = 0; j < N; j++) {
			if ((i & (1 << j)) == 0)
				t1.push_back(j);
			else
				t2.push_back(j);
		}

		if (t1.size() > N / 2 || t2.size() > N / 2)
			continue;

		int t1sum = 0, t2sum = 0;
		for (int i = 0; i < N / 2; i++) {
			for (int j = 0; j < N / 2; j++) {
				if (i == j)
					continue;
				t1sum += arr[t1[i]][t1[j]];
				t2sum += arr[t2[i]][t2[j]];
			}
		}

		int diff = t1sum - t2sum;
		if (diff < 0)
			diff = -diff;
		if (ans == -1 || ans > diff)
			ans = diff;
	}

	cout << ans;
}