#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int N, M;
	cin >> N >> M;

	map<string, string> m;
	string s1, s2;
	for (int i = 0; i < N; i++) {
		cin >> s1 >> s2;

		m.insert({ s1, s2 });
	}

	while (M--) {
		string s;
		cin >> s;

		cout << m.at(s) << "\n";
	}
}