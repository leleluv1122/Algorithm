#include <iostream>
#include <string>

#define endl "\n"
using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();

	int ha = 0, sa = 0;

	string s;
	getline(cin, s);

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ':' && s[i + 1] == '-') {
			if (s[i + 2] == ')')
				ha++;
			else if (s[i + 2] == '(')
				sa++;
		}
	}

	if (ha == 0 && sa == 0)
		cout << "none" << endl;
	else if (ha > sa)
		cout << "happy" << endl;
	else if (ha == sa)
		cout << "unsure" << endl;
	else
		cout << "sad" << endl;
}