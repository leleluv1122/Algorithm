#include <iostream>
#include <queue>
#include <vector>

#define endl "\n"
#define MAX 51
using namespace std;

int N, M;
vector<int> true_person;
vector<int> party[MAX];
bool p[MAX];

int main() {
	queue<int> q;

	cin >> N >> M;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a; cin >> a;
		true_person.push_back(a);
	}


	for (int i = 0; i < M; i++) {
		int n; cin >> n;
		for (int j = 0; j < n; j++) {
			int a; cin >> a;
			party[i].push_back(a);
			for (int k = 0; k < true_person.size(); k++) {
				if (true_person[k] == party[i][j])
					q.push(i);
			}
		}
	}

	while (!q.empty()) {
		int a = q.front();
		q.pop();
		p[a] = true;

		for (int i = 0; i < party[a].size(); i++) {
			int c = party[a][i];

			for (int j = 0; j < M; j++) {
				for (int k = 0; k < party[j].size(); k++) {
					if (party[j][k] == c && !p[j]) {
						q.push(j);
					}
				}
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i < M; i++) {
		if (p[i] == false)
			cnt++;
	}

	cout << cnt << endl;
}