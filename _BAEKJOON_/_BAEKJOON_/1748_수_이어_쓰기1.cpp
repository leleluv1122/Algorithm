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
	int N;
	cin >> N;
	long long sum = 0;
	int Length = 1;

	int Start = 1, End = 10;
	while (1) {
		bool b = false;

		for (int i = Start; i < End; i++) {
			if (i > N) {
				b = true;
				break;
			}
			sum += Length;
		}

		if (b)
			break;

		Start *= 10;
		End *= 10;
		Length++;
	}

	cout << sum << endl;
}