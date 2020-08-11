#include <iostream>
#include <map>

using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();

	int T; cin >> T;
	map<string, int> m;

	while (T--) {
		m.clear();
		int mul = 1;
		int n; cin >> n;

		for (int i = 0; i < n; i++) {
			string a, name; cin >> a >> name;
			if (m.find(name) == m.end())
				m.insert({ name, 1 });
			else
				m[name]++;
		}

		int rst = 1;
		for (auto i : m) 
			rst *= (i.second + 1);
		rst -= 1;
		cout << rst << "\n";
	}
}