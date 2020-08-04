#include <iostream>

#define MAX 1000001
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

	int Min = MAX, Max = -MAX;
	int a;
	
	while (N--) {
		cin >> a;

		if (Min > a)
			Min = a;
		if (Max < a)
			Max = a;
	}

	cout << Min << " " << Max << "\n";
}