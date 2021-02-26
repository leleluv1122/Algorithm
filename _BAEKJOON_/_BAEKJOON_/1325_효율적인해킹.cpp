#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

#define MAX 10001
using namespace std;

int N, M;
vector<int> v[MAX];
int visited[MAX];
int num[MAX];
int cnt;

void hacking(int a) {
	visited[a] = true;

	for (int i = 0; i < v[a].size(); i++) {
		if (!visited[v[a][i]]) {
			cnt++;
			hacking(v[a][i]);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b; cin >> a >> b;
		a--; b--;
		v[b].push_back(a);
	}

	int max_num = 0;
	for (int i = 0; i < N; i++) {
		memset(visited, false, sizeof(visited));
		cnt = 0;
		hacking(i);
		if (max_num < cnt)
			max_num = cnt;
		num[i] = cnt;
	}
	
	for (int i = 0; i < N; i++)
		if (max_num == num[i])
			cout << i + 1 << " ";
}