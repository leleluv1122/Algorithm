#include <iostream>
#include <algorithm>
#include <cstring>

#define MAX 10001
#define endl "\n"
using namespace std;

int N, K;
int coin[101];
int sum[MAX];

int Coin() {
	memset(sum, 0, sizeof(sum));

	for (int i = 1; i <= K; i++)
		sum[i] = MAX;

	for (int i = 0; i < N; i++)
		for (int j = coin[i]; j <= K; j++)
			sum[j] = min(sum[j], sum[j - coin[i]] + 1);

	return sum[K] == MAX ? -1 : sum[K];
}

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N >> K;

	for (int i = 0; i < N; i++)
		cin >> coin[i];

	cout << Coin() << endl;
}

//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//#define endl "\n"
//using namespace std;
//int N, K;
//int coin[101];
//int sum[10001];
//int result;
//
//bool compare(int a, int b) {
//	if (a > b)
//		return true;
//	return false;
//}
//
//void Coin() {
//	memset(sum, 0, sizeof(sum));
//	sum[0] = 1;
//	int cnt = 0;
//	for (int i = 0; i < N; i++) {
//		cnt = 0;
//		for (int j = coin[i]; j <= K; j++) {
//			sum[j] += sum[j - coin[i]];
//			if (sum[j - coin[i]])
//				cnt++;
//		}
//		if (sum[K] && cnt)
//			result = min(result, cnt);
//	}
//}
//
//int main() {
//	cin >> N >> K;
//	for (int i = 0; i < N; i++)
//		cin >> coin[i];
//	sort(coin, coin + N, compare);
//	result = 987654321;
//	Coin();
//	if (result == 987654321)
//		cout << -1 << endl;
//	else
//		cout << result << endl;
//}