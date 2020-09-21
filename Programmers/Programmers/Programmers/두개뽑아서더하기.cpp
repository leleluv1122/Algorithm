#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> solution(vector<int> numbers) {
	vector<int> answer;
	for (int i = 0; i < numbers.size() - 1; i++) {
		for (int j = 1; j < numbers.size(); j++) {
			if (i == j)
				continue;
			int n = numbers[i] + numbers[j];
			if (find(answer.begin(), answer.end(), n) == answer.end())
				answer.push_back(n);
		}
	}
	sort(answer.begin(), answer.end());
	return answer;
}