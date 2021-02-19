#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 101
using namespace std;

int N, M, K;
int cnt;
int arr[MAX][MAX];
bool visited[MAX][MAX];
vector<int> v;
int gogoA[4] = { 0,1,0,-1 };
int gogoB[4] = { 1,0,-1,0 };

void monun(int a, int b) {
	if (visited[a][b])
		return;
	visited[a][b] = true;

	for (int i = 0; i < 4; i++) {
		int A = a + gogoA[i];
		int B = b + gogoB[i];

		if (A >= 0 && A < M && B >= 0 && B < N)
			if (!arr[A][B])
				monun(A, B);
	}
	cnt++;
}

int main() {
	cin >> M >> N >> K;
	for (int t = 0; t < K; t++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = y1; i < y2; i++)
			for (int j = x1; j < x2; j++)
				arr[i][j] = 1;
	}

	for (int i = M - 1; i >= 0; i--) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j] && !arr[i][j]) {
				cnt = 0;
				monun(i, j);
				v.push_back(cnt);
			}
		}
	}
	sort(v.begin(), v.end());
	cout << v.size() << "\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}