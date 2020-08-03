#include <iostream>
#include <algorithm>

#define endl "\n"
using namespace std;

bool visited[21];
string s; int i;
int M;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}


int main() {
	init();
	cin >> M;
	
	while (M--) {
		cin >> s;

		if (s == "add") {
			cin >> i;

			visited[i] = true;
		}
		else if (s == "remove") {
			cin >> i;

			visited[i] = false;
		}
		else if (s == "check") {
			cin >> i;

			if (visited[i])
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (s == "toggle") {
			cin >> i;

			if (visited[i])
				visited[i] = false;
			else
				visited[i] = true;
		}
		else if (s == "all") {
			for (int i = 1; i <= 20; i++)
				visited[i] = true;
		}
		else if (s == "empty") {
			for (int i = 1; i <= 20; i++)
				visited[i] = false;
		}
	}
}