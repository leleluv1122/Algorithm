#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

#define endl "\n"
#define MAX 10001
using namespace std;

int N;
vector<pair<int, int>> v[MAX];
bool visited[MAX];
int answer = 0, endpoint = 0;

void tree(int a, int length) {
	if (visited[a])
		return;

	visited[a] = true;
	if (answer < length) {
		answer = length;
		endpoint = a;
	}

	for (int i = 0; i < v[a].size(); i++)
		tree(v[a][i].first, length + v[a][i].second);
}

int main() {
	cin >> N;

	for (int i = 0; i < N - 1; i++) {
		int node1, node2, weight;
		cin >> node1 >> node2 >> weight;

		v[node1].push_back(make_pair(node2, weight));
		v[node2].push_back(make_pair(node1, weight));
	}

	tree(1, 0);

	answer = 0;
	memset(visited, false, sizeof(visited));

	tree(endpoint, 0);
	cout << answer << endl;
}