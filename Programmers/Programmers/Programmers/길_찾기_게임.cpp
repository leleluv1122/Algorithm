#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;

vector<int> v[10001];

vector<vector<int>> solution(vector<vector<int>> nodeinfo) {
	vector<vector<int>> answer;

	return answer;
}

int main() {
	vector<vector<int>> r;
	r.resize(9);
	r[0].push_back(5);
	r[0].push_back(3);
	r[1].push_back(11);
	r[1].push_back(5);
	r[2].push_back(13);
	r[2].push_back(3);
	r[3].push_back(3);
	r[3].push_back(5);
	r[4].push_back(6);
	r[4].push_back(1);
	r[5].push_back(1);
	r[5].push_back(3);
	r[6].push_back(8);
	r[6].push_back(6);
	r[7].push_back(7);
	r[7].push_back(2);
	r[8].push_back(2);
	r[8].push_back(2);

	vector<vector<int>> result = solution(r);
}