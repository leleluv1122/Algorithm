#include <iostream>

#define endl "\n"
using namespace std;

int N;
char tree[27][2];

void firstS(int a) {
	if (a + 'A' == '.')
		return;

	printf("%c", a + 'A'); 
	firstS(tree[a][0] - 'A');
	firstS(tree[a][1] - 'A');
	return;
}

void middleS(int a) {
	if (a + 'A' == '.')
		return;

	middleS(tree[a][0] - 'A');
	printf("%c", a + 'A');
	middleS(tree[a][1] - 'A');
	return;
}

void lastS(int a) {
	if (a + 'A' == '.')
		return;

	lastS(tree[a][0] - 'A');
	lastS(tree[a][1] - 'A');
	printf("%c", a + 'A');
	return;
}

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		char a, b, c;
		cin >> a >> b >> c;

		tree[a - 'A'][0] = b;
		tree[a - 'A'][1] = c;
	}

	firstS(0);
	cout << endl;

	middleS(0);
	cout << endl;

	lastS(0);
	cout << endl;
}