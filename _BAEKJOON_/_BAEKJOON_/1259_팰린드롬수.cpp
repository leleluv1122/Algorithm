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

	while (1) {
		int a; cin >> a;
		if (a == 0)
			break;
		string s = to_string(a);
		
		string rs;
		for (int i = s.size() - 1; i >= 0; i--)
			rs += s[i];

		if (s == rs)
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
	}
}