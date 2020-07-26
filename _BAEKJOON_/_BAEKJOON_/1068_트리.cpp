#include <iostream>
#include <vector>

#define endl "\n"
using namespace std;

int N, P;
vector<vector<int>> v;
int result;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void tree(int top) {
	if (top == P)
		return;
	int sz = v[top].size();

	switch (sz) {
	case 0:
		result++; return;
		break;
	case 1:
		if (v[top][0] == P) {
			result++; break;
		}
	default:
		for (int i = 0; i < sz; i++)
			tree(v[top][i]);
		break;
	}
}

int main() {
	init();
	int top = 0;
	cin >> N;
	v.resize(N);

	for (int i = 0; i < N; i++) {
		int a; cin >> a;
		if (a == -1)
			top = i;
		else
			v[a].push_back(i);
	}

	cin >> P;

	result = 0;
	tree(top);

	cout << result << endl;
}