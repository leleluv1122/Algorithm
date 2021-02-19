#include <iostream>
#include <map>

using namespace std;

map<string, string> m;

int main() {
	int N, M; cin >> N >> M;
	while (N--) {
		string s1, s2; cin >> s1 >> s2;
		m.insert({ s1, s2 });
	}
	while (M--) {
		string s; cin >> s;
		cout << m[s] << "\n";
	}
}