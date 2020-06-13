#include <iostream>
#include <queue>

#define endl "\n"
#define MAX 100001
using namespace std;

int cnt;
int minsec;
bool visited[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int minSecond(int N, int K) {
	queue<pair<int, int>> q;

	q.push(make_pair(N, 0));
	visited[N] = true;

	while (!q.empty()) {
		int curLocation = q.front().first;
		int curSecond = q.front().second;
		q.pop();

		visited[curLocation] = true;

		if (minsec && minsec == curSecond && curLocation == K)
			cnt++;

		if (!minsec && curLocation == K) {
			minsec = curSecond;
			cnt++;
		}

		if (curLocation + 1 < MAX && !visited[curLocation + 1])
			q.push(make_pair(curLocation + 1, curSecond + 1));
		if (curLocation - 1 >= 0 && !visited[curLocation - 1])
			q.push(make_pair(curLocation - 1, curSecond + 1));
		if (curLocation * 2 < MAX && !visited[curLocation * 2])
			q.push(make_pair(curLocation * 2, curSecond + 1));
	}
	return minsec;
}

int main() {
	init();
	int N, K;
	cin >> N >> K;

	cout << minSecond(N, K) << endl;
	cout << cnt << endl;
}