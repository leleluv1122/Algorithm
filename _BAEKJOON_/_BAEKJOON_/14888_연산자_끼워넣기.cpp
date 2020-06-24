#include <iostream>
#include <algorithm>

#define INF 1000000001
#define endl "\n"
using namespace std;

int N;
int arr[12], Oper[4];
int MAXNUM, MINNUM;

void dfs(int plus, int minus, int mul, int div, int cnt, int sum) {
	if (cnt == N) {
		MAXNUM = max(MAXNUM, sum);
		MINNUM = min(MINNUM, sum);
		return;
	}

	if (plus > 0)
		dfs(plus - 1, minus, mul, div, cnt + 1, sum + arr[cnt]);
	if (minus > 0)
		dfs(plus, minus - 1, mul, div, cnt + 1, sum - arr[cnt]);
	if (mul > 0)
		dfs(plus, minus, mul - 1, div, cnt + 1, sum * arr[cnt]);
	if (div > 0)
		dfs(plus, minus, mul, div - 1, cnt + 1, sum / arr[cnt]);

}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	for (int i = 0; i < 4; i++)
		cin >> Oper[i];

	MAXNUM = -INF;
	MINNUM = INF;

	dfs(Oper[0], Oper[1], Oper[2], Oper[3], 1, arr[0]);

	cout << MAXNUM << endl;
	cout << MINNUM << endl;
}