#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> v[1001];
bool visited[1001];

void yun(int n) {
	for (int i = 0; i < v[n].size(); i++) {
		if (!visited[v[n][i]]) {
			visited[v[n][i]] = true;
			yun(v[n][i]);
		}
	}
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b; cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			yun(i);
			cnt++;
		}
	}
	cout << cnt;
}