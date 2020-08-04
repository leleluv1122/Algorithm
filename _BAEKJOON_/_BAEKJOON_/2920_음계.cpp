#include <iostream>

using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();

	int arr[8];

	for (int i = 0; i < 8; i++)
		cin >> arr[i];

	bool as = true;
	for (int i = 0; i < 8; i++)
		if (arr[i] != i + 1) {
			as = false;
			continue;
		}

	if (as) {
		cout << "ascending" << "\n";
		exit(0);
	}

	bool de = true;
	for (int i = 0; i < 8; i++)
		if (arr[i] != 8 - i) {
			de = false;
			continue;
		}
	if (de) {
		cout << "descending" << "\n";
		exit(0);
	}

	cout << "mixed" << "\n";
}