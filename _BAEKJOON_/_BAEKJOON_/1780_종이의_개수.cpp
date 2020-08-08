#include <iostream>
#include <vector>

#define endl "\n"
using namespace std;

vector<vector<int>> p;
int zero = 0, one = 0, minus_one = 0;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void paper(int a, int na, int b, int nb) {
	int d = p[a][b];
	bool bb = true;

	for (int i = a; i < a + na; i++) {
		if (bb) {
			for (int j = b; j < b + nb; j++) {
				if (p[i][j] != d) {
					bb = false;
					break;
				}
			}
		}
	}

	if (bb) {
		if (d == 0)
			zero++;
		else if (d == -1)
			minus_one++;
		else if (d == 1)
			one++;
		return;
	}

	int pp = na / 3;
	int ll = nb / 3;

	paper(a, pp, b, ll);
	paper(a + pp, pp, b, ll);
	paper(a + pp * 2, pp, b, ll);

	paper(a, pp, b + ll, ll);
	paper(a + pp, pp, b + ll, ll);
	paper(a + pp * 2, pp, b + ll, ll);

	paper(a, pp, b + ll * 2, ll);
	paper(a + pp, pp, b + ll * 2, ll);
	paper(a + pp * 2, pp, b + ll * 2, ll);
}

int main() {
	init();
	int N;
	cin >> N;
	p.resize(N);

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			int a; cin >> a;
			p[i].push_back(a);
		}

	paper(0, N, 0, N);

	cout << minus_one << endl;
	cout << zero << endl;
	cout << one << endl;
}