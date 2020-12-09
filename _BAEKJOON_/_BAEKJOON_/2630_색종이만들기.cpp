#include <iostream>

using namespace std;

int N;
int arr[128][128];
int p1, p2;

void paper(int a, int b, int n) {
	bool bo = true;
	int d = arr[a][b];
	for (int i = a; i < a + n; i++) {
		if (bo)
			for (int j = b; j < b + n; j++) {
				if (arr[i][j] != d) {
					bo = false;
					break;
				}
			}
	}

	if (bo) {
		if (d)
			p2++;
		else
			p1++;
	}
	else {
		paper(a, b, n / 2);
		paper(a + n / 2, b, n / 2);
		paper(a, b + n / 2, n / 2);
		paper(a + n / 2, b + n / 2, n / 2);
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];
	
	p1 = 0, p2 = 0;
	paper(0, 0, N);
	cout << p1 << "\n" << p2;
}