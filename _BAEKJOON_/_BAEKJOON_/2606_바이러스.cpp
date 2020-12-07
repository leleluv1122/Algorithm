#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v[100];
bool visited[100];
int cnt;

void warm(int a) {
	for (int i = 0; i < v[a].size(); i++) {
		int d = v[a][i];
		if (!visited[d]) {
			visited[d] = true;
			warm(d);
			cnt++;
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	while (m--) {
		int a, b; cin >> a >> b;
		v[a - 1].push_back(b - 1);
		v[b - 1].push_back(a - 1);
	}

	cnt = 0;
	visited[0] = true;
	warm(0);
	cout << cnt;
}