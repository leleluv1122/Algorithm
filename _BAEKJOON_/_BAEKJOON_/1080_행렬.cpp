#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n, m, cnt = 0;
vector<string> a;
vector<string> b;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void XOR(int x, int y) {
	cnt++;
	for (int i = x; i < x+3; i++) {
		for (int j = y; j < y+3; j++) {
			if (a[i][j] == '0') 
				a[i][j] = '1';
			else 
				a[i][j] = '0';
		}
	}
}

int main() {
	init();
	cin >> n >> m;

	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		a.push_back(s);
	}

	for (int i = 0; i < n; i++) {
		cin >> s;
		b.push_back(s);
	}

	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < m - 2; j++) {
			if (a[i][j] != b[i][j]) {
				XOR(i, j);
			}
		}
	}

	bool flag = true;
	for (int i = 0; i < n; i++) {
		if (flag) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] != b[i][j]) {
					cout << "-1\n";
					flag = false;
					break;
				}
			}
		}
	}

	if (flag) 
		cout << cnt << endl;
}