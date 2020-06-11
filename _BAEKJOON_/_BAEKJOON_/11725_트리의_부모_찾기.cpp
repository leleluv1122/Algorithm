#include <iostream>
#include <vector>

#define endl "\n"
#define MAX 100001
using namespace std;

int N;
vector<int> v[MAX];
int sunsu[MAX];
bool visited[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void tree(int a) {
	visited[a] = true;

	for (int i = 0; i < v[a].size(); i++) {
		int next = v[a][i];
		
		if (!visited[next]) {
			sunsu[next] = a;
			tree(next);
		}
	}
}

int main() {
	init();
	cin >> N;

	for (int i = 0; i < N - 1; i++) {
		int a, b;
		cin >> a >> b;
		
		v[a].push_back(b);
		v[b].push_back(a);
	}

	tree(1);

	for (int i = 2; i <= N; i++)
		cout << sunsu[i] << endl;
}