#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);

	int idx = 0, cnt = 0;
	string a = "";
	while (1) {
		if (idx == s.size())
			break;

		if (s[idx] != ' ') {
			a += s[idx];
			if (s[idx + 1] == ' ' || idx + 1 == s.size())
				cnt++;
		}
		idx++;
	}
	cout << cnt << "\n";
}