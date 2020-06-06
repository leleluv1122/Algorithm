#include <iostream>
#define endl "\n"

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;

	int m = 1;
	int d = 1;
	int day = 0;
	// mon : 0 ~ sun : 6
	while (1) {
		if (m == x && d == y)
			break;
		if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d == 31) {
			d = 1;
			m++;
			day++;
		}
		else if ((m == 4 || m == 6 || m == 9 || m == 11) && d == 30) {
			d = 1;
			m++;
			day++;
		}
		else if ((m == 2) && d == 28) {
			d = 1;
			m++;
			day++;
		}
		else {
			d++;
			day++;
		}
	}

	switch (day % 7) {
	case 0:
		cout << "MON" << endl;
		break;
	case 1:
		cout << "TUE" << endl;
		break;
	case 2:
		cout << "WED" << endl;
		break;
	case 3:
		cout << "THU" << endl;
		break;
	case 4:
		cout << "FRI" << endl;
		break;
	case 5:
		cout << "SAT" << endl;
		break;
	case 6:
		cout << "SUN" << endl;
		break;
	}
}