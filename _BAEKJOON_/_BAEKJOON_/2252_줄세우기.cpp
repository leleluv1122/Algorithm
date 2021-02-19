#include <iostream>
#include <vector>
#include <queue>

#define MAX 32001
using namespace std;

vector<int> st[MAX];
int end_p[MAX];
int N, M;
queue<int> q;

int main() {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int A, B; cin >> A >> B;
		end_p[B]++;
		st[A].push_back(B);
	}

	for (int i = 1; i <= N; i++)
		if (!end_p[i])
			q.push(i);

	while (!q.empty()) {
		int t = q.front();
		q.pop();

		cout << t << " ";

		for (int i = 0; i < st[t].size(); i++) {
			int next = st[t][i];

			end_p[next]--;
			if (!end_p[next])
				q.push(next);
		}
	}
}