#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;

	int size = commands.size();
	for (int i = 0; i < size; i++) {
		vector<int> sub;
		sub.assign(array.begin() + commands[i][0] - 1, array.begin() + commands[i][1]);

		sort(sub.begin(), sub.end());
		answer.push_back(sub[commands[i][2] - 1]);
	}
	return answer;
}

void print(vector<int> array1, vector<vector<int>> commands, vector<int> answer) {
	vector<int> t = solution(array1, commands);
	if (t == answer)
		cout << "정답" << endl;
	else
		cout << "틀림 " << endl;
}

int main() {
	print({ 1, 5, 2, 6, 3, 7, 4 }, { {2, 5, 3},{4, 4, 1},{1, 7, 3} }, { 5, 6, 3 });
	return 0;
}