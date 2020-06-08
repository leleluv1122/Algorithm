#include <iostream>

#define endl "\n"
using namespace std;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();

	int w = 3;
	while (w--) {
		int a, b, c, d;
		int cnt = 0;
		cin >> a >> b >> c >> d;

		if (!a)
			cnt++;
		if (!b)
			cnt++;
		if (!c)
			cnt++;
		if (!d)
			cnt++;

		switch (cnt) {
		case 0:
			cout << "E" << endl;
			break;
		case 1:
			cout << "A" << endl;
			break;
		case 2:
			cout << "B" << endl;
			break;
		case 3:
			cout << "C" << endl;
			break;
		case 4:
			cout << "D" << endl;
			break;
		}
	}
}