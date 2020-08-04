#include <iostream>

#define endl "\n"
using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();

	int T;
	cin >> T;

	while (T--) {
		string s;
		cin >> s;

		int total = 0;
		int a = 0;

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'X')
				a = 0;
			else
				total += ++a;
			
		}

		cout << total << endl;
	}
}