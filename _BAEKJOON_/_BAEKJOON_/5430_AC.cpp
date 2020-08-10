#include <iostream>
#include <deque>
#include <algorithm>
#include <string>

using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	int T;
	cin >> T;

	while (T--) {
		string s; cin >> s;
		int a; cin >> a;
		deque<int> v;
		
		string arr; cin >> arr;
		string t;
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] == '[')
				continue;
			else if ('0' <= arr[i] && arr[i] <= '9')
				t += arr[i];
			else if (arr[i] == ',' || arr[i] == ']') {
				if (!t.empty()) {
					v.push_back(stoi(t));
					t.clear();
				}
			}
		}

		bool b = true;
		bool rever = true;
		for (int i = 0; i < s.size(); i++) {
			if (b) {
				if (s[i] == 'R')
					rever = 1 - rever;
				else if (s[i] == 'D') {
					if (v.size() == 0) {
						b = false;
						cout << "error\n";
						break;
					}
					else {
						if (rever)
							v.pop_front();
						else
							v.pop_back();
					}
				}
			}
		}

		if (b) {
			if (rever) {
				cout << "[";
				while (!v.empty()) {
					cout << v.front();
					v.pop_front();
					if (!v.empty())
						cout << ",";
				}
				cout << "]\n";
			}
			else {
				cout << "[";
				while (!v.empty()) {
					cout << v.back();
					v.pop_back();
					if (!v.empty())
						cout << ",";
				}
				cout << "]\n";
			}
		}
	}
}