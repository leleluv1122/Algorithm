#include <iostream>
#include <vector>
#include <cstring>

#define MAX 1001
#define endl "\n"
using namespace std;

vector<int> v[MAX];
bool visited[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void cycle(int a) {
	if (visited[a])
		return;
	visited[a] = true;

	for (int i = 0; i < v[a].size(); i++) {
		if (!visited[v[a][i]])
			cycle(v[a][i]);
	}
}

int main() {
	init();
	int T;
	cin >> T;
	
	while (T--) {
		for (int i = 0; i < MAX; i++)
			v[i].clear();
		memset(visited, false, sizeof(visited));

		int n;
		cin >> n;

		int a;
		for (int i = 1; i <= n; i++) {
			cin >> a;
			v[i].push_back(a);
		}

		int result = 0;
		for (int i = 1; i <= n; i++) {
			if (!visited[i]) {
				cycle(i);
				result++;
			}
		}

		cout << result << endl;
	}
}