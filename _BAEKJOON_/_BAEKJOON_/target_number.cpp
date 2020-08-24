#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> numbers, int target) {
	int answer = 0;

	int maxval = 0;
	for (int i = 0; i < numbers.size(); i++)
		maxval += numbers[i];

	queue<pair<int, int>> q;
	q.push({ numbers[0], 0 }); // sum, 몇번째숫자까지했는지
	q.push({ -numbers[0], 0 });

	while (!q.empty()) {
		int sum = q.front().first;
		int idx = q.front().second;
		q.pop();

		if (idx == numbers.size() - 1) {
			if (sum == target)
				answer++;
			continue;
		}

		q.push({ sum + numbers[idx + 1], idx + 1 });
		q.push({ sum - numbers[idx + 1], idx + 1 });
	}

	return answer;

}