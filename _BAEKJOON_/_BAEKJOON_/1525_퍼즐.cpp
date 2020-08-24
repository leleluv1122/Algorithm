#include <iostream>
#include <queue>
#include <string>
#include <map>
#include <algorithm>

#define TARGET 123456789
using namespace std;

int gogoA[4] = { 0,1,0,-1 };
int gogoB[4] = { 1,0,-1,0 };

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();

	int start = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) {
			int n; cin >> n;
			if (n == 0)
				n = 9;
			start = start * 10 + n;
		}
	
	queue<int> q;
	map<int, int> m;
	q.push(start);
	m[start] = 0;

	while (!q.empty()) {
		int cur = q.front();
		string c = to_string(cur);
		q.pop();

		if (cur == TARGET)
			break;

		int d = c.find('9');
		int a = d / 3;
		int b = d % 3;

		for (int i = 0; i < 4; i++) {
			int A = a + gogoA[i];
			int B = b + gogoB[i];

			if (A >= 0 && A < 3 && B >= 0 && B < 3) {
				string t = c;
				swap(t[a * 3 + b], t[A * 3 + B]);

				int next = stoi(t);
				if (!m.count(next)) {
					m[next] = m[cur] + 1;
					q.push(next);
				}
			}
		}
	}

	if (!m.count(TARGET))
		cout << -1 << "\n";
	else
		cout << m.at(TARGET) << "\n";
}