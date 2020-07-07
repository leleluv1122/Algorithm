#include <iostream>
#include <deque>
#include <vector>
#include <stack>

#define MAX 100001
#define endl "\n"
using namespace std;

int N, K;
int visited[MAX];
vector<int> parent[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int dynamic() {
	deque<pair<int, int>> dq;
	dq.push_back(make_pair(N, 0));
	visited[N] = true;

	while (!dq.empty()) {
		int cost = dq.back().second;
		int distance = dq.back().first;
		dq.pop_back();

		if (distance == K)
			return cost;

		int gogo[3] = { distance * 2, distance - 1, distance + 1 };

		for (int i = 0; i < 3; i++) {
			if (gogo[i] < MAX && gogo[i] >= 0) {
				if (!visited[gogo[i]]) {
					visited[gogo[i]] = true;

					if (gogo[i] == distance * 2) {
						dq.push_back(make_pair(gogo[i], cost + 1));
						parent[gogo[i]].push_back(distance);
					}
					else {
						dq.push_front(make_pair(gogo[i], cost + 1));
						parent[gogo[i]].push_back(distance);
					}
				}
			}
		}
	}
}

int main() {
	init();
	cin >> N >> K;

	cout << dynamic() << endl;

	int a = K;

	deque<int> d;
	d.push_back(a);
	while (a != N) {
		a = parent[a].front();
		d.push_back(a);
	}
	
	while (!d.empty()) {
		int c = d.back();
		cout << c << " ";
		d.pop_back();
	}
	cout << endl;
}