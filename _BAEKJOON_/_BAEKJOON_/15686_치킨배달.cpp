#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
#define MAX 50
#define INF 987654321
using namespace std;

int N, M;
int result;
int arr[MAX][MAX];
vector<pair<int, int>> house, chicken;
bool visited[13];

int distance(pair<int, int> a, pair<int, int> b) {
	return abs(a.first - b.first) + abs(a.second - b.second);
}

void chick(int idx, int s) {
	if (s == M) {
		int t = 0;
		for (int i = 0; i < house.size(); i++) {
			int d = INF;
			for (int j = 0; j < chicken.size(); j++) {
				if (visited[j])
					d = min(d, distance(house[i], chicken[j]));
			}
			t += d;
		}
		result = min(result, t);
		return;
	}

	if (idx == chicken.size())
		return;

	visited[idx] = true;
	chick(idx + 1, s + 1);
	visited[idx] = false;
	chick(idx + 1, s);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1)
				house.push_back(make_pair(i, j));
			else if (arr[i][j] == 2)
				chicken.push_back(make_pair(i, j));
		}
	}
	result = INF;
	chick(0, 0);

	cout << result << endl;
}