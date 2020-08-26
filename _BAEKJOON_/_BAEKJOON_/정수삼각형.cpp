#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int solution(vector<vector<int>> triangle) {
	int answer = 0;

	int arr[2][500];
	int b = 1;
	memset(arr, 0, sizeof(arr));
	arr[0][0] = triangle[0][0];
	for (int i = 1; i < triangle.size(); i++) {
		int tsz = triangle[i].size();
		arr[b][0] = arr[1 - b][0] + triangle[i][0];
		arr[b][tsz - 1] = arr[1 - b][tsz - 2] + triangle[i][tsz - 1];
		for (int j = 1; j < tsz - 1; j++)
			arr[b][j] = max(arr[1 - b][j - 1], arr[1 - b][j]) + triangle[i][j];
		b = 1 - b;
	}

	for (int i = 0; i < triangle.size(); i++)
		answer = max(answer, arr[1 - b][i]);

	return answer;
}

int main() {
	vector<vector<int>> t;
	t.resize(5);
	t[0].push_back(7);

	t[1].push_back(3);
	t[1].push_back(8);

	t[2].push_back(8);
	t[2].push_back(1);
	t[2].push_back(0);

	t[3].push_back(2);
	t[3].push_back(7);
	t[3].push_back(4);
	t[3].push_back(4);

	t[4].push_back(4);
	t[4].push_back(5);
	t[4].push_back(2);
	t[4].push_back(6);
	t[4].push_back(5);

	cout << solution(t);
}