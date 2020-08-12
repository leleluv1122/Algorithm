#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<int> v;
int su[8];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void NandM(int a, int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++)
			cout << su[i] << " ";
		cout << "\n";
		return;
	}

	for (int i = a; i < v.size(); i++) {
		su[cnt] = v[i];
		NandM(i, cnt + 1);
	}
}

int main() {
	init();
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int a; cin >> a;
		if (find(v.begin(), v.end(), a) == v.end())
			v.push_back(a);
	}
	sort(v.begin(), v.end());

	NandM(0, 0);
}