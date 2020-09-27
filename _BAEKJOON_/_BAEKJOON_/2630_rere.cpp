#include <iostream>

#define MAX 128
#define endl "\n"
using namespace std;

int N;
int paper[MAX][MAX];
int A = 0, B = 0;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void color(int a, int b, int na, int nb) {
	int check = paper[a][b];

	for (int i = a; i < na; i++) {
		for (int j = b; j < nb; j++) {
			if ((check == 1 && paper[i][j] == 0) || (check == 0 && paper[i][j] == 1))
				check = 2;
			if (check == 2) {
				color(a, b, (a + na) / 2, (b + nb) / 2);
				color((a + na) / 2, b, na, (b + nb) / 2);
				color(a, (b + nb) / 2, (a + na) / 2, nb);
				color((a + na) / 2, (b + nb) / 2, na, nb);
				return;
			}
		}
	}

	if (check == 0)
		A++;
	else
		B++;
	return;
}

int main() {
	init();
	cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> paper[i][j];

	color(0, 0, N, N);
	cout << A << endl << B << endl;
}