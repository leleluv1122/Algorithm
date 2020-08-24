#include <string>
#include <vector>

using namespace std;

bool visited[200][200];

void computer(int a, vector<vector<int>>& com, int n) {
	for (int i = 0; i < n; i++) {
		int d = com[a][i];
		if (!visited[a][i] && d) {
			visited[a][i] = true;
			visited[i][a] = true;
			computer(i, com, n);
		}
	}
}

int solution(int n, vector<vector<int>> computers) {
	int answer = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;
			if (!visited[i][j] && computers[i][j]) {
				answer++;
				visited[i][j] = true;
				visited[j][i] = true;
				computer(i, computers, n);
				computer(j, computers, n);
			}
		}
	}

	for (int i = 0; i < n; i++)
		if (!visited[i][i])
			answer++;

	return answer;
}