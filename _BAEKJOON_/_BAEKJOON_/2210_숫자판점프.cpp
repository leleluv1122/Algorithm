#include <iostream>
#include <set>

using namespace std;

int su[5][5];
int gogoA[4] = { 0,1,0,-1 };
int gogoB[4] = { 1,0,-1,0 };
set<int> st;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void jump(int a, int b, int cnt, int sum) {
	if (cnt == 6) {
		st.insert(sum);
		return;
	}

	for (int i = 0; i < 4; i++) {
		int A = a + gogoA[i];
		int B = b + gogoB[i];

		if (A < 0 || A >= 5 || B < 0 || B >= 5)
			continue;

		jump(A, B, cnt + 1, sum * 10 + su[A][B]);
	}
}

int main() {
	init();
	
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> su[i][j];

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			jump(i, j, 1, su[i][j]);

	cout << st.size() << "\n";
}