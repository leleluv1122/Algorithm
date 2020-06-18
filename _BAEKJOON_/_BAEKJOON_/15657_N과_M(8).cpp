#include <iostream>
#include <algorithm>

#define endl "\n"
#define MAX 8 + 1
using namespace std;

int arr[MAX];
int su[MAX];
int n, m;

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void NandM(int idx, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) 
			cout << su[i] << " ";
		cout << endl;
		return;
	}
	for (int i = idx; i < n; i++) {
		su[cnt] = arr[i];
		NandM(i, cnt + 1);
	}
}

int main() {
	init();
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);

	NandM(0, 0);
}