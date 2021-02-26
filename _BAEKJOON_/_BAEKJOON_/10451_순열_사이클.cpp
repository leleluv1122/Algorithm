#include <iostream>
#include <vector>
#include <cstring>

#define MAX 1001
using namespace std;
vector<int> v[MAX];
bool visited[MAX];

void cycle(int a) {
	if (visited[a])
		return;
	visited[a] = true;

	for (int i = 0; i < v[a].size(); i++)
		if (!visited[v[a][i]])
			cycle(v[a][i]);
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		for (int i = 0; i < MAX; i++)
			v[i].clear();
		memset(visited, false, sizeof(visited));

		int N; cin >> N;
		for (int i = 1; i <= N; i++) {
			int a; cin >> a;
			v[i].push_back(a);
		}

		int result = 0;
		for (int i = 1; i <= N; i++) {
			if (!visited[i]) {
				cycle(i);
				result++;
			}
		}
		cout << result << "\n";
	}
}