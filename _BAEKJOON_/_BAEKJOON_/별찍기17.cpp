#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++)
			cout << " ";
		if (i == 0)
			cout << "*";
		else if (i == n - 1) {
			for (int j = 0; j < n * 2 - 1; j++)
				cout << "*";
		}
		else {
			for (int j = 0; j < i * 2 + 1; j++) {
				if (j == 0)
					cout << "*";
				else if (j == i * 2)
					cout << "*";
				else
					cout << " ";
			}
		}
		cout << "\n";
	}
}