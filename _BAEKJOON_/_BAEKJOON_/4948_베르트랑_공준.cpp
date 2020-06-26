#include <iostream>
#include <math.h>

#define endl "\n"
using namespace std;

bool sosu[123456 * 2 + 1];

int main() {
	int n;
	
	while (1) {
		cin >> n;
		if (n == 0)
			break;
		int cnt = 0;
		int n2 = n * 2;

		for (int i = 2; i <= n2; i++)
			sosu[i] = true;

		for (int i = 2; i <= sqrt(n2); i++) {
			if (sosu[i]) {
				for (int j = i + i; j <= n2; j += i) {
					if (sosu[j])
						sosu[j] = false;
				}
			}
		}

		for (int i = n + 1; i <= n2; i++)
			if (sosu[i])
				cnt++;

		cout << cnt << endl;
	}
}