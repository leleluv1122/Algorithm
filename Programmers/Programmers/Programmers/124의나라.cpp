#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

char s[3] = { '4', '1', '2' };

string solution(int n) {
	string ans = "";
	int d = 3;
	while (n) {
		int a = n % d;
		if (d > n) {
			int dd = d / 3;
			if (0 <= n && n < dd)
				ans += '1';
			else if (dd <= n && n < dd * 2)
				ans += '2';
			else if (dd * 2 <= n && n < d)
				ans += '4';
			break;
		}
		else {
			ans += s[a % 3];
			n /= d;
		}
		d *= 3;
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

int main() {
	cout << solution(7) << endl;
}