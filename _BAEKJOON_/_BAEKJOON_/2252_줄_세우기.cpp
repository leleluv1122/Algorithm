#include <iostream>
#include <queue>
#include <vector>

#define endl "\n"
using namespace std;

int N, M;
vector<int> v[32001];
int end_person[32001];
queue<int> q;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main() {
	init(); 
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		end_person[b]++;
		v[a].push_back(b);
	}

	for (int i = 1; i <= N; i++)
		if (!end_person[i])
			q.push(i);

	while (!q.empty()) {
		int temp = q.front();
		q.pop();
		
		cout << temp << " ";

		for (int i = 0; i < v[temp].size(); i++) {
			int next = v[temp][i];

			end_person[next]--;
			if (!end_person[next])
				q.push(next);
		}
	}
}