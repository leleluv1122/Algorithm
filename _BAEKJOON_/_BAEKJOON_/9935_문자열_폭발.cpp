#include <iostream>
#include <string>

#define MAX 1000001
using namespace std;

string s, bomb;
char rst[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> s >> bomb;

	int idx = 0;
	for (int i = 0; i < s.length(); i++) {
		rst[idx++] = s[i];

		if (rst[idx - 1] == bomb[bomb.length() - 1]) {
			if (idx - bomb.length() < 0)
				continue;

			bool b = true;
			for (int j = 0; j < bomb.length(); j++) {
				if (rst[idx - j - 1] != bomb[bomb.length() - j - 1]) {
					b = false;
					break;
				}
			}

			if (b)
				idx -= bomb.length();
		}
	}

	if (!idx)
		cout << "FRULA";
	else 
		for (int i = 0; i < idx; i++)
			cout << rst[i];
	cout << "\n";
}