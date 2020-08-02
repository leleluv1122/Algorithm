#include <iostream>

#define endl "\n"
using namespace std;

int N;
int paper[128][128];
int A = 0, B = 0;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void color_paper(int a, int b, int Na, int Nb) {
	int ck = paper[a][b];

	for (int i = a; i < Na; i++) {
		for (int j = b; j < Nb; j++) {
			if ((ck == 0 && paper[i][j] == 1) || (ck == 1 && paper[i][j] == 0))
				ck = 2;
			if (ck == 2) {
				color_paper(a, b, (a + Na) / 2, (b + Nb) / 2);
				color_paper(a, (b + Nb) / 2, (a + Na) / 2, Nb);
				color_paper((a + Na) / 2, b, Na, (b + Nb) / 2);
				color_paper((a + Na) / 2, (b + Nb) / 2, Na, Nb);
				return;
			}
		}
	}
	if (ck == 0) 
		++A;
	else if (ck == 1)
		++B;
	return;
}

int main() {
	init();
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> paper[i][j];

	color_paper(0, 0, N, N);

	cout << A << endl;
	cout << B << endl;
}