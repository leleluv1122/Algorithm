#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<string> v;
	for (int i = 0; i < 5; i++) {
		string s; cin >> s;
		int d = s.size();
		for (int j = d; j < 15; j++)
			s += ' ';
		v.push_back(s);
	}
	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 5; j++)
			if (v[j][i] != ' ')
				cout << v[j][i];
}