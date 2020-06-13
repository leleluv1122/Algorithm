#include <iostream>
#include <algorithm>
using namespace std;

int alltime[10001];
int main() {
	int N, T;
	cin >> N >> T;

	while (N--) {
		int time, score;
		cin >> time >> score;

		for (int i = T; i >= time; i--) {
			alltime[i] = max(alltime[i], alltime[i - time] + score);
		}
	}

	cout << alltime[T] << "\n";
}