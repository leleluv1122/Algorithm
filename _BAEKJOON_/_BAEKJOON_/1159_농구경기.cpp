#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int N;
	cin >> N;
	int arr[26];
	memset(arr, 0, sizeof(arr));
	while (N--) {
		string s;
		cin >> s;
		arr[s[0] - 'a']++;
	}
	string ans = "";
	for (int i = 0; i < 26; i++)
		if (arr[i] >= 5)
			ans += (i + 'a');
	if (ans == "")
		cout << "PREDAJA";
	else
		cout << ans;
}