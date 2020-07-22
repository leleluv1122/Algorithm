#include <iostream>
#include <cstring>

#define endl "\n"
#define MAX 301
using namespace std;

int rom[3];
int bed[MAX];
int N;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

bool room() {
	bed[0] = 1;
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 3; j++) {
			if (i - rom[j] < 0)
				continue;
			if (bed[i - rom[j]])
				bed[i] += 1;
		}
	}
	if (bed[N])
		return true;
	return false;
}

int main() {
	init();
	for (int i = 0; i < 3; i++)
		cin >> rom[i];
	cin >> N;

	memset(bed, 0, sizeof(bed));
	if (room()) // true
		cout << 1 << endl;
	else
		cout << 0 << endl;
}