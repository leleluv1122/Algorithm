#include <iostream>

using namespace std;

int N;
int arr[64][64];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void tree(int a, int na, int b, int nb) {
	int d = arr[a][b];

	bool bb = true;
	for (int i = a; i < a + na; i++) {
		if (bb) {
			for (int j = b; j < b + nb; j++)
				if (arr[i][j] != d)
					bb = false;
		}
	}
			
	if (bb) {
		cout << d;
		return;
	}
	else {
		cout << "(";
		tree(a, na / 2, b, nb / 2);
		tree(a, na / 2, b + nb / 2, nb / 2);
		tree(a + na / 2, na / 2, b, nb / 2);
		tree(a + na / 2, na / 2, b + nb / 2, nb / 2);
		cout << ")";
	}
}

int main() {
	init();
	cin >> N;
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		for (int j = 0; j < s.size(); j++) {
			arr[i][j] = s[j] - '0';
		}
	}

	tree(0, N, 0, N);
}