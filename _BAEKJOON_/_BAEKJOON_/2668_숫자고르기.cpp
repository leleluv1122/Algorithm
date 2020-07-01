#include <iostream>

#define MAX 101
#define endl "\n"
using namespace std;

int N;
int cnt;

int node[MAX];
bool visited[MAX];
bool cycle[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

bool dfs(int a, int num) {
	if (visited[num])
		return false;
	visited[num] = true;

	if (a == num || dfs(a, node[num])) {
		cnt++;
		cycle[num] = true;
		return true;
	}
	return false;
}

int main() {
	init();
	cin >> N;

	for (int i = 1; i <= N; i++)
		cin >> node[i];

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++)
			visited[j] = cycle[j];
		dfs(i, node[i]);
	}

	cout << cnt << endl;
	for (int i = 1; i <= N; i++)
		if (cycle[i])
			cout << i << endl;
}