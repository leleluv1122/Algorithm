#include <iostream>
#include <algorithm>

using namespace std;

int arr[26];

int main() {
	string s;
	cin >> s;

	int maxi = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			arr[s[i] - 'a']++;
			maxi = max(maxi, arr[s[i] - 'a']);
		}
		else {
			arr[s[i] - 'A']++;
			maxi = max(maxi, arr[s[i] - 'A']);
		}
	}

	int rst;
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (arr[i] == maxi) {
			cnt++;
			rst = i;
		}
	}

	if (cnt == 1)
		printf("%c\n", rst + 'A');
	else
		cout << '?' << "\n";
}