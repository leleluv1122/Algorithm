#include <iostream>
#include <string>
#include <vector>

#define endl "\n"
using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	string s;
	cin >> s;

	int sz = s.size() / 10 + 1;
	vector<string> sv(sz);

	int idx = 0, cnt = 0;

	for (int i = 0; i < s.size(); i++) {
		sv[idx] += s[i];
		cnt++;
		if (cnt == 10) {
			idx++;
			cnt = 0;
		}
	}

	for (int i = 0; i < sv.size(); i++)
		cout << sv[i] << endl;
}