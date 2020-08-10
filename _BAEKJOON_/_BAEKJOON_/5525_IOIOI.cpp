#include <iostream>
#include <string>

#define endl "\n"
using namespace std;

int N, M;
string s;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();

	cin >> N >> M >> s;
	int rst = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i + 1] == 'O' && s[i + 2] == 'I') {
			int o = 0;
			while (s[i] == 'I' && s[i + 1] == 'O') {
				i += 2;
				o++;
				if (s[i] == 'I' && o == N) {
					o--;
					rst++;
				}
			}
		}
	}
	cout << rst << "\n";
}