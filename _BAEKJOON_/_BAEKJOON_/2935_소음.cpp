#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	string A, B;
	char c;
	cin >> A >> c >> B;
	string ans = "";
	if (c == '+') {
		if (A.size() != B.size()) {
			int big = max(A.size(), B.size());
			int small = min(A.size(), B.size());
			for (int i = big; i > 0; i--) {
				if (i == big || i == small)
					ans += '1';
				else
					ans += '0';
			}
		}
		else {
			ans += '2';
			for (int i = 0; i < A.size() - 1; i++)
				ans += '0';
		}
	}
	else {
		ans += '1';
		for (int i = 0; i < A.size() - 1; i++)
			ans += '0';
		for (int i = 0; i < B.size() - 1; i++)
			ans += '0';
	}
	cout << ans;
}