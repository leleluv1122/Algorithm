#include <iostream>
#include <string>
#include <map>
#include <algorithm>

#define endl "\n"
#define MAX 100000
using namespace std;

int N, M;
map<string, int> map_name;
string name[MAX + 1];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N >> M;

	string names;
	for (int i = 1; i <= N; i++) {
		cin >> names;
		
		name[i] = names;
		map_name.insert({ names, i });
	}
	

	while (M--) {
		char s[21];
		cin >> s;

		if (s[0] >= '0' && s[0] <= '9')
			cout << name[atoi(s)] << endl;
		else
			cout << map_name[string(s)] << endl;
	}
}