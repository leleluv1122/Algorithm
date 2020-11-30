#include <iostream>

using namespace std;

bool visited[10];
int arr[10];
int N, M;

void free() {
	for (int i = 1; i <= N; i++)
		visited[i] = false;
}

void NnM(int n) {
	if (n == M) {
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			arr[n] = i;
			visited[i] = true;
			NnM(n + 1);
			visited[i] = false;
		}
	}
}

int main() {
	cin >> N >> M;
	free();
	NnM(0);
}