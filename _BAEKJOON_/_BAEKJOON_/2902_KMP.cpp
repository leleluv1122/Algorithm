#include <iostream>
using namespace std;
int main() {
	string s, name; cin >> s;
	for (int i = 0; i < s.size(); i++)
		if (s[i] >= 'A' && s[i] <= 'Z')
			name += s[i];
	cout << name;
}