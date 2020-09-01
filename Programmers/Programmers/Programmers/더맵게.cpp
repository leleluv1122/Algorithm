#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < scoville.size(); i++) {
		pq.push(scoville[i]);
	}

	int answer = 0;
	while (1) {
		if (pq.size() == 1 && pq.top() < K)
			return -1;
		if (pq.top() >= K)
			break;
		int a = pq.top();
		pq.pop();
		int b = pq.top();
		pq.pop();

		pq.push(a + b * 2);
		answer++;
	}
	return answer;
}