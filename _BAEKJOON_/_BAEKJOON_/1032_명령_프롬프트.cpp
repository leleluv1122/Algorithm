#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n; cin >> n;
	vector<string> v;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		v.push_back(s);
	}
	string s = v[0];
	for (int i = 1; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			if (v[i][j] != s[j])
				s[j] = '?';
		}
	}
	cout << s;
}