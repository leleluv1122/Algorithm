#include <iostream>
#include <cstring>
#define endl "\n"
using namespace std;

int N, K;
int coin[101];
int sum[10001];

int Coin() {
	memset(sum, 0, sizeof(sum));
	sum[0] = 1;

	for (int i = 0; i < N; i++)
		for (int j = coin[i]; j <= K; j++)
			sum[j] += sum[j - coin[i]];

	return sum[K];
}

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	cin >> N >> K;

	for (int i = 0; i < N; i++)
		cin >> coin[i];

	cout << Coin() << endl;
}