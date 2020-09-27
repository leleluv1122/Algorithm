#include <iostream>
#include <vector>

#define MAX 100000
using namespace std;

int inorder[MAX + 1];
int postorder[MAX + 1];
int find_root[MAX + 1];

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void func(int s, int e, int s2, int e2) {
	if (s > e)
		return;
	int root = postorder[e2];
	cout << root << " ";
	int pos = find_root[root];

	func(s, pos - 1, s2, s2 + (pos - 1 - s));
	func(pos + 1, e, s2 + pos - s, e2 - 1);
	return;
}

int main() {
	init();
	int n; cin >> n;

	// 중위순회
	for (int i = 0; i < n; i++) {
		cin >> inorder[i];
		find_root[inorder[i]] = i;
	}

	// 후위순회
	for (int i = 0; i < n; i++)
		cin >> postorder[i];

	func(0, n - 1, 0, n - 1);
}