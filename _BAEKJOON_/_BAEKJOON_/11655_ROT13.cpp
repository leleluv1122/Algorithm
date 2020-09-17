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
	string s;
	getline(cin, s);

	for (int i = 0; i < s.size(); i++) {
		char c = s[i];

		if (c == ' ') {
			cout << c;
			continue;
		}

		if (c >= 'A' && c <= 'Z') {
			int d = c + 13;
			if (d > 'Z')
				d -= 26;
			c = d;
		}
		else if (c >= 'a' && c <= 'z') {
			int d = c + 13;
			if (d > 'z')
				d -= 26;
			c = d;
		}
		cout << c;
	}
}