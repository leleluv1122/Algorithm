#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

#define endl "\n"
#define MAX 100001
using namespace std;

vector<pair<int, int>> arr[MAX];
int V;
int visited[MAX];
int real_max;
int topNode = 0;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void tree(int a, int maxnum) {
	if (visited[a])
		return;
	visited[a] = true;

	if (real_max < maxnum) {
		real_max = maxnum;
		topNode = a;
	}

	for (int i = 0; i < arr[a].size(); i++) {
		tree(arr[a][i].first, maxnum + arr[a][i].second);
	}
}

int main() {
	init();
	cin >> V;
	
	for (int i = 0; i < V; i++) {
		int a; cin >> a;
		while (1) {
			int b, c;
			cin >> b;
			if (b == -1)
				break;
			cin >> c;

			arr[a].push_back(make_pair(b, c));
		}
	}

	real_max = 0;
	memset(visited, false, sizeof(visited));
	tree(1, 0);

	memset(visited, false, sizeof(visited));
	real_max = 0;
	tree(topNode, 0);

	cout << real_max << endl;
}