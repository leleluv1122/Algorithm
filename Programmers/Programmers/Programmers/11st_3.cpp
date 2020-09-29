#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
bool visited[200001];

int solution(vector<int>& A) {
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < A.size(); i++) {
		if (!visited[A[i]])
			visited[A[i]] = true;
		else
			pq.push(A[i]);
	}

	int ans = 0;
	for (int i = 1; i <= A.size(); i++) {
		if (!visited[i]) {
			int top = pq.top(); pq.pop();
			int d;
			if (top > i)
				d = top - i;
			else
				d = i - top;

			if (ans + d > 1000000000)
				return -1;
			ans += d;
		}
	}
	return ans;
}

int main() {
	vector<int> v;
	/*v.push_back(1);
	v.push_back(2);
	v.push_back(1);*/

	/*v.push_back(2);
	v.push_back(1);
	v.push_back(4);
	v.push_back(4);*/

	/*v.push_back(6);
	v.push_back(2);
	v.push_back(3);
	v.push_back(5);
	v.push_back(6);
	v.push_back(3);*/

	cout << solution(v);
}