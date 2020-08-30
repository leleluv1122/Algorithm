#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int arr[10];
	int cnt = 1;
	for (int i = 0; i < 10; i++)
		arr[i] = 1;
	while (n) {
		int d = n % 10;
		n /= 10;

		if (d == 9 || d == 6) {
			if (arr[9] > 0)
				arr[9]--;
			else if (arr[6] > 0)
				arr[6]--;
			else {
				cnt++;
				for (int i = 0; i < 10; i++)
					arr[i]++;
				arr[9]--;
			}
		}
		else {
			if (arr[d] < 1) {
				cnt++;
				for (int i = 0; i < 10; i++)
					arr[i]++;
				arr[d]--;
			}
			else
				arr[d]--;
		}
	}
	cout << cnt;
}