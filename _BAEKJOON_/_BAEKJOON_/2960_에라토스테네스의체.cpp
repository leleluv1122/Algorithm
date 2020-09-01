#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
bool arr[1001];
int main() {
	int n, k; cin >> n >> k;

	int cnt = 0, idx = 2, d = 2;
	while (1) {
		if (!arr[idx]) {
			arr[idx] = true;
			cnt++;
			if (cnt == k) {
				cout << idx << "\n";
				break;
			}
		}
		idx += d;
		if (idx > n) {
			d++;
			idx = d;
		}
	}
}