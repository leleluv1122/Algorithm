#include <iostream>
#include <algorithm>
using namespace std;

int n;
int s[300];
int c[300];

int stair() {
	c[0] = s[0];
	c[1] = s[0] + s[1];
	c[2] = max(s[0] + s[2], s[1] + s[2]);

	for (int i = 3; i < n; ++i)
		c[i] = max(s[i] + c[i - 2], c[i - 3] + s[i - 1] + s[i]);
	return c[n - 1];
}

int main() {
	cin >> n;

	for (int i = 0; i < n; ++i)
		cin >> s[i];

	cout << stair() << endl;
}