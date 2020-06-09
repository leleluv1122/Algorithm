#include <iostream>
#include <vector>

#define endl "\n"
#define MAX 9
using namespace std;

int N, M;
bool visited[MAX];
vector<int> v;

void dfs(int idx, int cnt) {
	if (cnt == M) {
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
		cout << endl;
		return;
	}

	for (int i = idx; i <= N; i++) {
		if (visited[i])
			continue;
		visited[i] = true;

		v.push_back(i);
		dfs(i, cnt + 1);

		v.pop_back();
		visited[i] = false;
	}
}

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	init();
	cin >> N >> M;
	
	dfs(1, 0);
}