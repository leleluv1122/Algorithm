#include <iostream>
#include <vector>

#define MAX 9
#define endl "\n"
using namespace std;

int N, M;
int arr[MAX];
vector<int> v;

void N_and_M(int idx, int cnt) {
	if (cnt == M) {
		for (int i = 0; i < v.size(); i++) 
			cout << v[i] << " ";
		cout << endl;
		return;
	}

	for (int i = idx; i < N; i++) {
		v.push_back(arr[i]);
		N_and_M(i, cnt + 1);
		v.pop_back();
	}
}

void init() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int main() {
	init();
	cin >> N >> M;

	for (int i = 0; i < N; i++)
		arr[i] = i + 1;

	N_and_M(0, 0);
}