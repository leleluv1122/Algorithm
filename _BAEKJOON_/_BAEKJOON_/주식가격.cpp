#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 0;
	queue<pair<int, int>> q; // 중요도, 몇번째파일
	priority_queue<int> pq;
	for (int i = 0; i < priorities.size(); i++) {
		q.push({ priorities[i], i });
		pq.push(priorities[i]);
	}

	while (!q.empty()) {
		int cur_priority = q.front().first;
		int cur_idx = q.front().second;
		q.pop();

		if (cur_priority == pq.top()) {
			answer++;
			pq.pop();

			if (cur_idx == location)
				break;
		}
		else {
			q.push({ cur_priority, cur_idx });
		}
	}

	return answer;
}