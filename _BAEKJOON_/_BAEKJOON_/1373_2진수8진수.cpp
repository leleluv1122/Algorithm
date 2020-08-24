#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s; cin >> s;

	if (s.size() == 1 && s[0] == '0') {
		cout << 0;
		exit(0);
	}

	reverse(s.begin(), s.end());
	int R = 1;
	int d = 0;
	string result;
	for (int i = 0; i < s.size(); i++) {
		d += R * (s[i] - '0');
		R *= 2;
		if (i % 3 == 2) {
			char c = d + '0';
			result += c;
			d = 0, R = 1;
		}
	}
	if (d != 0) {
		char c = d + '0';
		result += c;
	}
	reverse(result.begin(), result.end());
	cout << result;
}