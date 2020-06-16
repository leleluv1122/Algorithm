#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 8
#define endl "\n"
using namespace std;

int N, M;
vector<int> v;
int arr[MAX];
bool visited[MAX];

void gogo(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) 
			cout << arr[i] << " ";
		cout << endl;

		return;
	}

	for (int i = 0; i < v.size(); i++) {
		if (visited[i])
			continue;

		visited[i] = true;
		arr[cnt] = v[i];
		gogo(cnt + 1);

		visited[i] = false;
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
	v.resize(N);
	for (int i = 0; i < N; i++)
		cin >> v[i];
	sort(v.begin(), v.end());

	gogo(0);
}