#include <iostream>
#include <algorithm>
#include <vector>

#define endl "\n"
#define MAX 1001
using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();

	int T, N, M;
	cin >> T;

	cin >> N;
	vector<long long> A(N);
	for (int i = 0; i < N; i++)
		cin >> A[i];

	cin >> M;
	vector<long long> B(M);
	for (int i = 0; i < M; i++)
		cin >> B[i];

	vector<long long> v, v2;

	for (int i = 0; i < N; i++) {
		long long sum = A[i];
		v.push_back(sum);

		for (int j = i + 1; j < N; j++) {
			sum += A[j];
			v.push_back(sum);
		}
	}

	for (int i = 0; i < M; i++) {
		long long sum = B[i];
		v2.push_back(sum);

		for (int j = i + 1; j < M; j++) {
			sum += B[j];
			v2.push_back(sum);
		}
	}

	sort(v.begin(), v.end());
	sort(v2.begin(), v2.end());

	long long answer = 0;
	for (int i = 0; i < v.size(); i++) {
		long long low = lower_bound(v2.begin(), v2.end(), T - v[i]) - v2.begin();
		long long high = upper_bound(v2.begin(), v2.end(), T - v[i]) - v2.begin();

		answer += high - low;
	}

	cout << answer << endl;
}