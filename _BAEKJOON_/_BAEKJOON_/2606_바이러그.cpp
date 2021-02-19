#include <iostream>
#include <vector>

using namespace std;

vector<int> v[100];
bool visited[100];
int cnt;

void virus(int n) {
	for (int i = 0; i < v[n].size(); i++) {
		int a = v[n][i];
		if (!visited[a]) {
			visited[a] = true;
			virus(a);
			cnt++;
		}
	}
}

int main() {
	int N, M; cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b; cin >> a >> b;
		v[a - 1].push_back(b - 1);
		v[b - 1].push_back(a - 1);
	}
	cnt = 0;
	visited[0] = true;
	virus(0);
	cout << cnt;
}