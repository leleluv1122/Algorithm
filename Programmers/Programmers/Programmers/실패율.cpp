#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int s[200001];
int num[200001];
pair<double, int> rst[200001];

bool compare(pair<double, int> a, pair<double, int> b) {
	if (a.first > b.first)
		return true;
	else if (a.first == b.first)
		return a.second < b.second;
	else
		return false;
}

vector<int> solution(int N, vector<int> stages) {
	for (int i = 0; i < stages.size(); i++) {
		for (int j = 1; j <= stages[i]; j++) {
			if (j > N)
				break;
			num[j]++;
		}
		if (stages[i] > N)
			continue;
		s[stages[i]]++;
	}
	
	for (int i = 1; i <= N; i++) {
		if (s[i] == 0 && num[i] == 0) {
			rst[i] = make_pair(0, i);
			continue;
		}
		rst[i] = make_pair((double)s[i] / num[i], i);
	}
	sort(rst + 1, rst + N + 1, compare);

	vector<int> answer;
	for (int i = 1; i <= N; i++)
		answer.push_back(rst[i].second);

	return answer;
}

int main() {
	vector<int> ss;
	/*ss.push_back(2);
	ss.push_back(1);
	ss.push_back(2);
	ss.push_back(6);
	ss.push_back(2);
	ss.push_back(4);
	ss.push_back(3);
	ss.push_back(3);*/

	ss.push_back(1);
	ss.push_back(2);
	ss.push_back(3);
	ss.push_back(4);
	ss.push_back(5);
	ss.push_back(6);
	ss.push_back(7);

	vector<int> result = solution(8, ss);

	for (int i = 0; i < result.size(); i++)
		cout << result[i] << " ";
}