#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	string s1, s2;
	cin >> s1;
	s2 = s1;
	reverse(s2.begin(), s2.end());
	s1 == s2 ? cout << 1 : cout << 0;
}