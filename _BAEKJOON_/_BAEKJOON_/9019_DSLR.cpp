#include <iostream>
#include <queue>
#include <string>
#include <cstring>

#define MAX 10001
using namespace std;

bool visited[MAX];

string DSLR(int a, int b) {
	queue<pair<int, string>> q;
	q.push({ a, "" });

	while (!q.empty()) {
		pair<int, string> t = q.front();
		q.pop();

		if (t.first == b)
			return t.second;

		int D = (t.first * 2) % 10000;
		if (!visited[D]) {
			q.push({ D, t.second + "D" });
			visited[D] = true;
		}

		int S = t.first - 1;
		if (t.first == 0)
			S = 9999;
		if (!visited[S]) {
			q.push(make_pair(S, t.second + "S"));
			visited[S] = true;
		}


		int L = (t.first % 1000) * 10 + t.first / 1000;
		if (!visited[L]) {
			q.push(make_pair(L, t.second + "L"));
			visited[L] = true;
		}

		int R = (t.first % 10) * 1000 + (t.first / 10);
		if (!visited[R]) {
			q.push(make_pair(R, t.second + "R"));
			visited[R] = true;
		}
	}
}

int main() {
	int T; cin >> T;

	while (T--) {
		int A, B; cin >> A >> B;
		memset(visited, false, sizeof(visited));
		string s = DSLR(A, B);
		cout << s << "\n";
	}
}