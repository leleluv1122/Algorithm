#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

#define MAX 102
#define INF 987654321
using namespace std;

int N, M;
int cnt, step;
vector<int> v[MAX];
bool visited[MAX];

void kevin(int a, int goal, int cnt) {
	if (a == goal) {
		step = min(step, cnt);
		return;
	}
	for (int i = 0; i < v[a].size(); i++) {
		if (!visited[v[a][i]]) {
			visited[a] = true;
			kevin(v[a][i], goal, cnt + 1);
			visited[a] = false;
		}
	}
}

int main() {
	int cnt, person;
	cin >> N >> M;
	while (M--) {
		int a, b; cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	cnt = INF;
	person = INF;
	int result;
	for (int i = 1; i <= N; i++) {
		memset(visited, false, sizeof(visited));
		result = 0;
		for (int j = 1; j <= N; j++) {
			step = INF;
			if (i == j)
				continue;
			else {
				kevin(i, j, 0);
				result += step;
			}
		}
		if (cnt > result) {
			cnt = result;
			person = i;
		}
		else if (cnt == result)
			person = min(person, i);
	}
	cout << person;
}