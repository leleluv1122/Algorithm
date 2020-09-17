#include <iostream>
#include <string>

using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int T; cin >> T;

	while (T--) {
		string s; cin >> s;

		cout << s[0] << s[s.size() - 1] << "\n";
	}
}