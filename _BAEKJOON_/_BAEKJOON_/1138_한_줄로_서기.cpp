#include <iostream>

#define endl "\n"
#define MAX 11
using namespace std;

int N;
int line[MAX];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();

	cin >> N;
	for (int i = 0; i < N; i++) {
		int l;
		cin >> l;

		for (int j = 0; j < N; j++) {
			if (l == 0 && line[j] == 0) {
				line[j] = i + 1;
				break;
			}
			else if (line[j] == 0) {
				l--;
			}
		}
	}

	for (int i = 0; i < N; i++)
		cout << line[i] << " ";
	cout << endl;
}