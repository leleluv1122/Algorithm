#include <iostream>
#include <queue>

#define MAX 100001
using namespace std;

int visited[MAX]; 
int N, K;

int sum() {
	queue<int> q;
	q.push(N);
	visited[N] = 1;

	int n = 0;
	int mini = MAX;
	while (!q.empty()) {
		int t = q.front();
		q.pop();

		if (t == K)
			return visited[t] - 1;

		if (t + 1 < MAX && !visited[t + 1]) {
			q.push(t + 1);
			visited[t + 1] = visited[t] + 1;
		}
		if (t - 1 >= 0 && !visited[t - 1]) {
			q.push(t - 1);
			visited[t - 1] = visited[t] + 1;
		}
		if (t * 2 < MAX && !visited[t * 2]) {
			q.push(t * 2);
			visited[t * 2] = visited[t] + 1;
		}
	}
}

int main() {
	cin >> N >> K;

	cout << sum();
}